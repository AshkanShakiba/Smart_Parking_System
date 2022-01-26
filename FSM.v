`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:12:33 01/23/2022 
// Design Name: 
// Module Name:    FSM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FSM(
input [2:0] system_token,
input request,
input [7:0] TimeData,
input reset,
input clock,
input confirm,
input [2:0] user_token,
output reg R1,
output reg R2
);

reg [2:0] present;
reg [2:0] next;

parameter wait_state = 3'b000;
parameter active_state = 3'b001;
parameter request_state = 3'b101;
parameter save_state = 3'b111;
parameter trap_state = 3'b110;

always @(request or posedge clock)
	begin
		if(~request) present = wait_state;
		else present = next;
	end

always @(present or TimeData or confirm or request)
	case(present)
		wait_state:
			if(~request) next = wait_state;
			else next = active_state;
		active_state:
			if(~request) next = wait_state; 
			else if(~confirm) next = active_state;
			else if(system_token == user_token) next = request_state;
			else next = trap_state;
		request_state:
			if(~request) next = wait_state;
			else if(~confirm) next = request_state;
			else next = save_state;
		save_state:
			if(~request) next = wait_state;
			else if(confirm)
				begin
					if(TimeData[4] != 1'b1 || TimeData[5] != 1'b1 || TimeData[6] != 1'b1 || TimeData[7] != 1'b1)
						begin
							R1 = 0;
							R2 = 1;
						end
					else
						begin
							R2 = 0;
							R1 = 1;
						end
				end
		trap_state:
			if(~request) next = wait_state;
			else next = trap_state;
	endcase

endmodule
