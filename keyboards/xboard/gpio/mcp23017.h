#pragma once

#include <stdint.h>

#define I2C_TIMEOUT 200
#define MCP23017_ADDR 0x20

enum MCP23017_REG_BANK0 {
    MCP23017_REG_IODIRA = 0,
    MCP23017_REG_IODIRB,
    MCP23017_REG_IPOLA,
    MCP23017_REG_IPOLB,
    MCP23017_REG_GPINTENA,
    MCP23017_REG_GPINTENB,
    MCP23017_REG_DEFVALA,
    MCP23017_REG_DEFVALB,
    MCP23017_REG_INTCONA,
    MCP23017_REG_INTCONB,
    MCP23017_REG_IOCONA,
    MCP23017_REG_IOCONB,
    MCP23017_REG_GPPUA,
    MCP23017_REG_GPPUB,
    MCP23017_REG_INTFA,
    MCP23017_REG_INTFB,
    MCP23017_REG_INTCAPA,
    MCP23017_REG_INTCAPB,
    MCP23017_REG_GPIOA,
    MCP23017_REG_GPIOB,
    MCP23017_REG_OLATA,
    MCP23017_REG_OLATB
};

enum MCP23017_BANK_DIRECTION {
    MCP23017_BANK_OUTPUT = 0x0,
    MCP23017_BANK_INPUT = 0xFF
};

void mcp23017_init(uint8_t expander_address, uint8_t bank_A_direction, uint8_t bank_B_direction);
uint8_t mcp23017_write(uint8_t expander_address, uint8_t reg, uint8_t data);
uint8_t mcp23017_read(uint8_t expander_address, uint8_t reg, uint8_t *data);
