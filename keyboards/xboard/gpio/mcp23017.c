#include "mcp23017.h"
#include "i2c_master.h"


void mcp23017_init(uint8_t expander_address, uint8_t bank_A_direction, uint8_t bank_B_direction)
{
    i2c_init();

    // polarity
    mcp23017_write(expander_address, MCP23017_REG_IPOLA, 0xFF);
    mcp23017_write(expander_address, MCP23017_REG_IPOLB, 0xFF);

    // turn on pull-ups
    mcp23017_write(expander_address, MCP23017_REG_GPPUA, 0xFF);
    mcp23017_write(expander_address, MCP23017_REG_GPPUB, 0xFF);

    mcp23017_write(expander_address, MCP23017_REG_IODIRA, bank_A_direction);
    mcp23017_write(expander_address, MCP23017_REG_IODIRB, bank_B_direction);
}

uint8_t mcp23017_write(uint8_t expander_address, uint8_t reg, uint8_t data)
{
    uint8_t ret;
    ret = i2c_start(expander_address | I2C_WRITE, I2C_TIMEOUT);
    if (ret) goto stop;
    ret = i2c_write(reg, I2C_TIMEOUT);
    if (ret) goto stop;
    ret = i2c_write(data, I2C_TIMEOUT);

stop:
    i2c_stop();
    return ret;
}

uint8_t mcp23017_read(uint8_t expander_address, uint8_t reg, uint8_t *data)
{
    uint8_t ret;
    ret = i2c_start(expander_address | I2C_WRITE, I2C_TIMEOUT);
    if (ret) goto stop;
    ret = i2c_write(reg, I2C_TIMEOUT);
    if (ret) goto stop;
    ret = i2c_start(expander_address | I2C_READ, I2C_TIMEOUT);
    if (ret) goto stop;
    *data = i2c_read_nack(I2C_TIMEOUT);

stop:
    i2c_stop();
    return ret;
}
