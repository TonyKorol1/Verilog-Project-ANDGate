module andgate (a,b,y,clock);
input a;
input b;
input clock;
output y;
wire a;
wire clock;
wire b;
reg y;
always @(posedge clock) begin
    y<=a&b;
end
endmodule