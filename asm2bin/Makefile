LD=ram.ld
B2M=Bin2Mem.exe
FILENAME=test
SRC=$(FILENAME).s
OBJ=$(FILENAME).o
LD_OBJ=$(FILENAME).om
BIN=$(FILENAME).bin
OBJ_DIR=../JzCore/data/
OBJECT=$(OBJ_DIR)$(FILENAME).data

all: $(OBJECT)

$(OBJECT): $(BIN)
	./$(B2M) -f $^ -o $@

$(BIN): $(LD_OBJ)
	mips-linux-gnu-objcopy -O binary $^ $@

$(LD_OBJ): $(OBJ)
	mips-linux-gnu-ld -T $(LD) $^ -o $@

$(OBJ): $(SRC)
	mips-linux-gnu-as -mips32 $^ -o $@

.PHONY: clean

clean:
	rm -rf *.o *.om *.bin
