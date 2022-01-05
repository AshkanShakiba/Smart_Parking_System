`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:47 01/03/2022 
// Design Name: 
// Module Name:    adder_subtractor_8bit 
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
module adder_subtractor_8bit(
 S,
 A,
 B,
 Sum,
 Cout);
input S;
input [7:0] A;
input [7:0] B;
output [7:0] Sum;
output Cout;
wire [7:0] C;
assign C[0]=S;
full_adder f1(A[0],B[0]^S,C[0],C[1],Sum[0]);
full_adder f2(A[1],B[1]^S,C[1],C[2],Sum[1]);
full_adder f3(A[2],B[2]^S,C[2],C[3],Sum[2]);
full_adder f4(A[3],B[3]^S,C[3],C[4],Sum[3]);
full_adder f5(A[4],B[4]^S,C[4],C[5],Sum[4]);
full_adder f6(A[5],B[5]^S,C[5],C[6],Sum[5]);
full_adder f7(A[6],B[6]^S,C[6],C[7],Sum[6]);
full_adder f8(A[7],B[7]^S,C[7],Cout,Sum[7]);
endmodule
