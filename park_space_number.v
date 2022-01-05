/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2021-2022
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: park_space_number 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module park_space_number(
 enable,
 parking_capacity,
 park_number);
input enable;
input [7:0] parking_capacity;
output [2:0] park_number;
reg [2:0] park_number_reg;
always @(parking_capacity or enable)
	begin
		if(enable) 
			begin
				if(parking_capacity[7])
					park_number_reg<=3'b111;
				else if(parking_capacity[6])
					park_number_reg<=3'b110;
				else if(parking_capacity[5])
					park_number_reg<=3'b101;
				else if(parking_capacity[4])
					park_number_reg<=3'b100;
				else if(parking_capacity[3])
					park_number_reg<=3'b011;
				else if(parking_capacity[2])
					park_number_reg<=3'b010;
				else if(parking_capacity[1])
					park_number_reg<=3'b001;
				else if(parking_capacity[0])
					park_number_reg<=3'b000;
			end
		else
			park_number_reg<=3'bzzz;
	end
assign park_number=park_number_reg;
endmodule
