# This file intentionally left blank
F_CPU = 8000000

SRC += ./gpio/mcp23017.c ./versions/v1/feather32u4.c
QUANTUM_LIB_SRC += i2c_master.c
