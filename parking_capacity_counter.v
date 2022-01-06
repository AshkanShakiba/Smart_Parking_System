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
---  Module Name: parking_capacity_counter
-----------------------------------------------------------*/
`timescale 1 ns/1 ns
module parking_capacity_counter(
 new_capacity,
 parked,
 empty);
input [7:0] new_capacity;
output [3:0] parked;
output [3:0] empty;
wire [1:0]w1;
wire [1:0]w2;
wire [1:0]w3;
wire [1:0]w4;
wire [2:0]w5;
wire [2:0]w6;
adder_subtractor_1bit a1(0,new_capacity[7],new_capacity[6],w1);
adder_subtractor_1bit a2(0,new_capacity[5],new_capacity[4],w2);
adder_subtractor_1bit a3(0,new_capacity[3],new_capacity[2],w3);
adder_subtractor_1bit a4(0,new_capacity[1],new_capacity[0],w4);
adder_subtractor_2bit a5(0,w1,w2,w5);
adder_subtractor_2bit a6(0,w3,w4,w6);
adder_subtractor_3bit a7(0,w5,w6,empty);
adder_subtractor_4bit a8(1,8,empty,parked);
endmodule
