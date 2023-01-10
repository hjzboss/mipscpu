# 简单五级流水的32位MIPS CPU

该cpu实现了五级流水，解决了数据相关的问题，但是没有很好地解决控制相关。能够完成基本的运算，并拥有输入和输出功能，能够在FPGA开发板上很好的实现。只实现了9条基本mips指令加上改编的输入和输出指令（指令正在扩充中），其中输入输出指令用于在fpga开发板上读取数据和输出数据。

## CPU结构

采用mips架构的五级流水线，分别为：

* 取指（IF）：取出指令
* 译码（ID）：对取出的指令进行译码，发出控制信号
* 执行（EX）：进行逻辑和算术运算
* 访存（MEM）：访问存储器或者输入输出
* 写回（WB）：将数据写回寄存器文件

在每个模块之间都有一个流水线寄存器，在每个时钟周期的上升沿将前一个模块的数据送往下一个模块。并且综合了两个32位的存储器：数据存储器和指令存储器。

其中MEM模块中集成了输入输出功能，可以用于fpga的测试。

## 目前实现的指令

采用的是mips32位的指令集，目前只实现了其中9条指令：

| 指令符  | op[31:26] | rs[25:21] | rt[20:16] | rd[15:11] | shamt[10:6] | funct[5:0] | 功能    | 格式           | 功能描述               |
| ---- | --------- | --------- | --------- | --------- | ----------- | ---------- | ----- | ------------ | ------------------ |
| ADD  | 000000    | rs        | rt        | rd        | 00000       | 100000     | 寄存器加  | Add rd,rs,rt | Rd = rt + rs       |
| SUB  | 000000    | rs        | rt        | rd        | 00000       | 100010     | 寄存器减  | Sub rd,rs,rt | Rd = rs - rt       |
| AND  | 000000    | rs        | rt        | rd        | 00000       | 100100     | 寄存器与  | And rd,rs,rt | Rd = rs & rt       |
| OR   | 000000    | rs        | rt        | rd        | 00000       | 100101     | 寄存器或  | Or rd,rs,rt  | Rd = rs \| rt      |
| SLT  | 000000    | rs        | rt        | rd        | 00000       | 101010     | 小于则置位 | Slt rd,rs,rt | Rd = (rs<rt?)  1:0 |

 

| 指令   | op[31:26] | address[25:0] | 功能   | 格式        | 功能描述               |
| ---- | --------- | ------------- | ---- | --------- | ------------------ |
| J    | 000010    | Address       | 跳转指令 | J address | Goto  (address<<2) |

 

| 指令   | op[31:26] | rs[25:21] | rt[20:16] | address[15:0] | 功能    | 格式               | 功能描述                              |         |
| ---- | --------- | --------- | --------- | ------------- | ----- | ---------------- | --------------------------------- | ------- |
| LW   | 100011    | rs        | rt        | offset        | 取数指令  | Lw rt,rs(offset) | Rt=memory(rs+offset)              | Rt = in |
| SW   | 101011    | rs        | rt        | offset        | 存数指令  | Sw rt,rs(offset) | Memory(rs+offset)=rt              | Out= rt |
| BEQ  | 000100    | rs        | rt        | offset        | 相等则跳转 | Beq rs,rt,offset | If(rs == rt) goto  pc+4+offset<<4 |         |

LW指令可以用于读取输入的数据，**如果地址的最高位为1时，会从拨码开关读取数据进入寄存器**。

SW指令还可以用于输出数据，**只需让其地址最高位为1即可输出数据至led灯**。

其余指令正在实现中。。。。。。。

##  项目结构

```bash
mipscpu/
├── asm2bin # 汇编转机器码的程序
│   ├── Bin2Mem.exe
│   ├── Makefile
│   ├── ram.ld
│   └── test.s
├── data
│   └── test.data # 测试机器码程序，指令存储器读入
├── ctrl.v # 控制信号生成模块
├── data_ram.v # 数据存储器模块
├── defines.v # 一般的宏定义
├── ex_mem.v # 流水线寄存器
├── ex.v # 执行模块
├── fpga_define.v # 和fpga有关的宏定义
├── fp.v # 分频器模块
├── id_ex.v # 流水线寄存器
├── id.v # 译码模块
├── if_id.v # 流水线寄存器
├── inst_rom.v # 指令存储器模块
├── jz_core_min_sopc_tb.v # testbench
├── jz_core_min_sopc.v # 简单sopc
├── jz_core.v # 处理器核
├── mem.v # 访存模块
├── mem_wb.v # 流水线寄存器
├── pc_reg.v # pc
└── regfile.v # 寄存器文件
```

## 使用

1. 安装mips GNU工具链（Ubuntu）

```bash
sudo apt-get install mips-linux-gnu-gcc
```

2. 如果要使用fpga，则在`fpga_define.v`中定义``define FPGA_MODE`，根据fpga开发板情况修改`fpga_define.v`文件中的参数，目前支持拨码开关和led灯
3. 进入`asm2bin`目录在`test.s`文件中编写用于测试的汇编程序，使用`make`命令生成`test.data`机器程序，随后即可进行仿真或上板

## 参考书籍

* 《自己动手写CPU》
* 《计算机组成与设计：软硬件接口》