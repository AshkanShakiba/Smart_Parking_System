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
---  Module Name: decrypt 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module decrypt(
 exit,
 token,
 pattern,
 park_number);
input exit;
input [2:0] token;
input [2:0] pattern;
output [2:0] park_number;
reg [2:0] park_number_reg;
always @(exit or token or pattern)
	begin
		if(exit)
			park_number_reg<=token^pattern;
		else
			park_number_reg<=3'bzzz;
	end
	assign park_number=park_number_reg;
endmodule
