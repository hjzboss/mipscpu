//分频器，此处只是为了分到最大值，便于fpga板上观察
`include "defines.v"

module fp(
    input wire		clk,
    input wire		rst,
    output reg		fp_clk
);

    reg[30:0] count;

    always @(posedge clk) begin
        if(rst == `RstEnable) begin
            count		<= 0;
            fp_clk		<= 0;
        end 
        else if(count == 31'd14999999) begin 
            count		<= 0;
            fp_clk		<= !fp_clk;
        end 
        else begin
            count		<= count + 1;
        end
    end

endmodule