`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:06:37 01/03/2022 
// Design Name: 
// Module Name:    full_adder 
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
module full_adder(
 A,
 B,
 Cin,
 Cout,
 S);
input A;
input B;
input Cin;
output Cout;
output S;
assign S=A^B^Cin;
assign Cout=(B&Cin)|(A&Cin)|(A&B);
endmodule
