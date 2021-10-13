#ifndef __BOX64_STACK_H_
#define __BOX64_STACK_H_

#include <stdint.h>

typedef struct box64context_s box64context_t;
typedef struct x64emu_s x64emu_t;
typedef struct pipe_bodge_s pipe_bodge_t;

int CalcStackSize(box64context_t *context);
void SetupInitialStack(x64emu_t *emu);

uint16_t Pop16(x64emu_t *emu);
void Push16(x64emu_t *emu, uint16_t v);
uint32_t Pop32(x64emu_t *emu);
void Push32(x64emu_t *emu, uint32_t v);
uint64_t Pop64(x64emu_t *emu);
void Push64(x64emu_t *emu, uint64_t v);

#endif //__BOX64_STACK_H_