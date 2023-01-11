//全局
`define RstEnable 1'b0
`define RstDisable 1'b1
`define ZeroWord 32'h00000000
`define WriteEnable 1'b1
`define WriteDisable 1'b0
`define ReadEnable 1'b1
`define ReadDisable 1'b0
`define AluOpBus 7:0
`define AluSelBus 2:0
`define InstValid 1'b0
`define InstInvalid 1'b1
`define Stop 1'b1
`define NoStop 1'b0
`define InDelaySlot 1'b1
`define NotInDelaySlot 1'b0
`define Branch 1'b1
`define NotBranch 1'b0
`define InterruptAssert 1'b1
`define InterruptNotAssert 1'b0
`define TrapAssert 1'b1
`define TrapNotAssert 1'b0
`define True_v 1'b1
`define False_v 1'b0
`define ChipEnable 1'b1
`define ChipDisable 1'b0


//指令
`define EXE_AND  6'b100100
`define EXE_OR   6'b100101

`define EXE_SLT  6'b101010
`define EXE_ADD  6'b100000
`define EXE_SUB  6'b100010


`define EXE_J  6'b000010
`define EXE_JAL  6'b000011
`define EXE_JR  6'b001000
`define EXE_BEQ  6'b000100
`define EXE_LW  6'b100011
`define EXE_SW  6'b101011


`define EXE_NOP 6'b000000
`define SSNOP 32'b00000000000000000000000001000000

`define EXE_SPECIAL_INST 6'b000000
`define EXE_REGIMM_INST 6'b000001
`define EXE_SPECIAL2_INST 6'b011100

//AluOp
`define EXE_AND_OP   8'b00100100
`define EXE_OR_OP    8'b00100101

`define EXE_SLT_OP  8'b00101010
`define EXE_ADD_OP  8'b00100000
`define EXE_SUB_OP  8'b00100010

`define EXE_J_OP  8'b01001111
`define EXE_JAL_OP  8'b01010000
`define EXE_JR_OP  8'b00001000
`define EXE_BEQ_OP  8'b01010001

`define EXE_LW_OP  8'b11100011
`define EXE_SW_OP  8'b11101011

`define EXE_NOP_OP    8'b00000000

//AluSel
`define EXE_RES_LOGIC 3'b001
`define EXE_RES_ARITHMETIC 3'b100	
`define EXE_RES_JUMP_BRANCH 3'b110
`define EXE_RES_LOAD_STORE 3'b111	

`define EXE_RES_NOP 3'b000


//指令存储器inst_rom
`define InstAddrBus 31:0
`define InstBus 31:0
`define InstMemNum  255
`define InstMemNumLog2 8

//数据存储器data_ram
`define DataAddrBus 31:0
`define DataBus 31:0
`define DataMemNum 255
`define DataMemNumLog2 8

//通用寄存器regfile
`define RegAddrBus 4:0
`define RegBus 31:0
`define RegWidth 32
`define DoubleRegWidth 64
`define DoubleRegBus 63:0
`define RegNum 32
`define RegNumLog2 5
`define NOPRegAddr 5'b00000