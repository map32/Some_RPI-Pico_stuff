// -------------------------------------------------- //
// This file is autogenerated by pioasm; do not edit! //
// -------------------------------------------------- //

#pragma once

#if !PICO_NO_HARDWARE
#include "hardware/pio.h"
#endif

#define D0 2
#define A0 10
#define RD 18
#define WR 19
#define DIR 20
#define OE 21

// --- //
// Z80 //
// --- //

#define Z80_wrap_target 0
#define Z80_wrap 15

#define Z80_offset_set_default 0u
#define Z80_offset_read_data 2u
#define Z80_offset_write_data 10u

static const uint16_t Z80_program_instructions[] = {
            //     .wrap_target
    0xe002, //  0: set    pins, 2                    
    0x0000, //  1: jmp    0                          
    0x2012, //  2: wait   0 gpio, 18                 
    0x4010, //  3: in     pins, 16                   
    0x8020, //  4: push   block                      
    0x80a0, //  5: pull   block                      
    0x6008, //  6: out    pins, 8                    
    0xe000, //  7: set    pins, 0                    
    0x2392, //  8: wait   1 gpio, 18             [3] 
    0x0000, //  9: jmp    0                          
    0x2013, // 10: wait   0 gpio, 19                 
    0xe000, // 11: set    pins, 0                    
    0x4010, // 12: in     pins, 16                   
    0x8020, // 13: push   block                      
    0x2393, // 14: wait   1 gpio, 19             [3] 
    0x0000, // 15: jmp    0                          
            //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program Z80_program = {
    .instructions = Z80_program_instructions,
    .length = 16,
    .origin = -1,
};

static inline pio_sm_config Z80_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + Z80_wrap_target, offset + Z80_wrap);
    return c;
}
#endif
