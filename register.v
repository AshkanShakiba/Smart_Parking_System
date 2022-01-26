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
---  Module Name: register
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module register(
input [7:0] D,
input CLK, 
input RST,
input en,
output [7:0] Q
);

reg [7:0] Q_reg;
	 
always @(posedge CLK or negedge RST)
	begin
		if(~RST)
			Q_reg <= 8'b00000000;
		if(RST && en)
			Q_reg <= D;
	end

assign Q = Q_reg;

endmodule
