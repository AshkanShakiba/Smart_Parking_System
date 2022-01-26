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
---  Module Name: controller
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module controller(
input [2:0] system_token,
input request,
input [7:0] TimeData,
input reset,
input clock,
input confirm,
input [2:0] user_token,
output [7:0] data_Q,
output [7:0] data_P
);

wire R1,R2;

FSM f(system_token,request,TimeData,reset,clock,confirm,user_token,R1,R2);
register r1(TimeData,clock,reset,R1,data_P);
register r2(TimeData,clock,reset,R2,data_Q);

endmodule
