/*
 * Copyright (c) 2013, Kelvin Lawson. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. No personal names or organizations' names associated with the
 *    Atomthreads project may be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE ATOMTHREADS PROJECT AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE PROJECT OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __DM36X_IO_H__
#define __DM36X_IO_H__

#include "atomport.h"


/** Timer input clock speed: 24MHz */
#define TIMER_CLK       24000000


/*
 * IO Addresses for use with DM36x
 */

/** System registers */
#define DM36X_SYSTEM_BASE       0x01C40000 /* System base registers */
#define DM36X_SYSTEM_PINMUX0    0x00
#define DM36X_SYSTEM_PINMUX1    0x04
#define DM36X_SYSTEM_PINMUX2    0x08
#define DM36X_SYSTEM_PINMUX3    0x0C
#define DM36X_SYSTEM_PINMUX4    0x10
/* PINMUX0 register bitfields */
#define DM36X_PINMUX0_MMCSD0     24
#define DM36X_PINMUX0_GIO49      23
#define DM36X_PINMUX0_GIO48      22
#define DM36X_PINMUX0_GIO47      21
#define DM36X_PINMUX0_GIO46      20
#define DM36X_PINMUX0_GIO45      19
#define DM36X_PINMUX0_GIO44      18
#define DM36X_PINMUX0_GIO43      16
#define DM36X_PINMUX0_C_WE_FIELD 14
#define DM36X_PINMUX0_VD         13
#define DM36X_PINMUX0_HD         12
#define DM36X_PINMUX0_YIN0       11
#define DM36X_PINMUX0_YIN1       10
#define DM36X_PINMUX0_YIN2       9
#define DM36X_PINMUX0_YIN3       8
#define DM36X_PINMUX0_YIN4       6
#define DM36X_PINMUX0_YIN5       4
#define DM36X_PINMUX0_YIN6       2
#define DM36X_PINMUX0_YIN7       0
/* PINMUX1 register bitfields */
#define DM36X_PINMUX1_VCLK       22
#define DM36X_PINMUX1_EXTCLK     20
#define DM36X_PINMUX1_FIELD      18
#define DM36X_PINMUX1_LCD_OE     17
#define DM36X_PINMUX1_HVSYNC     16
#define DM36X_PINMUX1_COUT0      14
#define DM36X_PINMUX1_COUT1      12
#define DM36X_PINMUX1_COUT2      10
#define DM36X_PINMUX1_COUT3      8
#define DM36X_PINMUX1_COUT4      6
#define DM36X_PINMUX1_COUT5      4
#define DM36X_PINMUX1_COUT6      2
#define DM36X_PINMUX1_COUT7      0
/* PINMUX2 register bitfields */
#define DM36X_PINMUX2_EM_CLK     12
#define DM36X_PINMUX2_EM_ADV     11
#define DM36X_PINMUX2_EM_WAIT    10
#define DM36X_PINMUX2_EM_WE_OE   9
#define DM36X_PINMUX2_EM_CE1     8
#define DM36X_PINMUX2_EM_CE0     7
#define DM36X_PINMUX2_EM_D15_8   6
#define DM36X_PINMUX2_EM_A7      4
#define DM36X_PINMUX2_EM_A3      2
#define DM36X_PINMUX2_EM_AR      0
/* PINMUX3 register bitfields */
#define DM36X_PINMUX3_GIO26      31
#define DM36X_PINMUX3_GIO25      29
#define DM36X_PINMUX3_GIO24      28
#define DM36X_PINMUX3_GIO23      26
#define DM36X_PINMUX3_GIO22      25
#define DM36X_PINMUX3_GIO21      23
#define DM36X_PINMUX3_GIO20      21
#define DM36X_PINMUX3_GIO19      20
#define DM36X_PINMUX3_GIO18      19
#define DM36X_PINMUX3_GIO17      17
#define DM36X_PINMUX3_GIO16      15
#define DM36X_PINMUX3_GIO15      14
#define DM36X_PINMUX3_GIO14      13
#define DM36X_PINMUX3_GIO13      12
#define DM36X_PINMUX3_GIO12      11
#define DM36X_PINMUX3_GIO11      10
#define DM36X_PINMUX3_GIO10      9
#define DM36X_PINMUX3_GIO9       8
#define DM36X_PINMUX3_GIO8       7
#define DM36X_PINMUX3_GIO7       6
#define DM36X_PINMUX3_GIO6       5
#define DM36X_PINMUX3_GIO5       4
#define DM36X_PINMUX3_GIO4       3
#define DM36X_PINMUX3_GIO3       2
#define DM36X_PINMUX3_GIO2       1
#define DM36X_PINMUX3_GIO1       0
/* PINMUX4 register bitfields */
#define DM36X_PINMUX4_GIO42      30
#define DM36X_PINMUX4_GIO41      28
#define DM36X_PINMUX4_GIO40      26
#define DM36X_PINMUX4_GIO39      24
#define DM36X_PINMUX4_GIO38      22
#define DM36X_PINMUX4_GIO37      20
#define DM36X_PINMUX4_GIO36      18
#define DM36X_PINMUX4_GIO35      16
#define DM36X_PINMUX4_GIO34      14
#define DM36X_PINMUX4_GIO33      12
#define DM36X_PINMUX4_GIO32      10
#define DM36X_PINMUX4_GIO31      8
#define DM36X_PINMUX4_GIO30      6
#define DM36X_PINMUX4_GIO29      4
#define DM36X_PINMUX4_GIO28      2
#define DM36X_PINMUX4_GIO27      0


/** I2C registers */
#define DM36X_I2C_BASE          0x01C21000 /* I2C */
#define DM36X_I2C_ICOAR         0x00
#define DM36X_I2C_ICIMR         0x04
#define DM36X_I2C_ICSTR         0x08
#define DM36X_I2C_ICCLKL        0x0C
#define DM36X_I2C_ICCLKH        0x10
#define DM36X_I2C_ICCNT         0x14
#define DM36X_I2C_ICDRR         0x18
#define DM36X_I2C_ICSAR         0x1C
#define DM36X_I2C_ICDXR         0x20
#define DM36X_I2C_ICMDR         0x24
#define DM36X_I2C_ICIVR         0x28
#define DM36X_I2C_ICEMDR        0x2C
#define DM36X_I2C_ICPSC         0x30
#define DM36X_I2C_REVID1        0x34
#define DM36X_I2C_REVID2        0x38
#define DM36X_I2C_ICPFUNC       0x48
#define DM36X_I2C_ICPDIR        0x4C
#define DM36X_I2C_ICPDIN        0x50
#define DM36X_I2C_ICPDOUT       0x54
#define DM36X_I2C_ICPDSET       0x58
#define DM36X_I2C_ICPDCLR       0x5C
/** Register bitfields: ICMDR */
#define DM36X_I2C_ICMDR_NACKMOD     (1 << 15)
#define DM36X_I2C_ICMDR_FREE        (1 << 14)
#define DM36X_I2C_ICMDR_STT         (1 << 13)
#define DM36X_I2C_ICMDR_STP         (1 << 11)
#define DM36X_I2C_ICMDR_MST         (1 << 10)
#define DM36X_I2C_ICMDR_TRX         (1 << 9)
#define DM36X_I2C_ICMDR_XA          (1 << 8)
#define DM36X_I2C_ICMDR_RM          (1 << 7)
#define DM36X_I2C_ICMDR_DLB         (1 << 6)
#define DM36X_I2C_ICMDR_IRS         (1 << 5)
#define DM36X_I2C_ICMDR_STB         (1 << 4)
#define DM36X_I2C_ICMDR_FDF         (1 << 3)
#define DM36X_I2C_ICMDR_BC          (1 << 0)
/** Register bitfields: ICSTR */
#define DM36X_I2C_ICSTR_SDIR        (1 << 14)
#define DM36X_I2C_ICSTR_NACKSNT     (1 << 13)
#define DM36X_I2C_ICSTR_BB          (1 << 12)
#define DM36X_I2C_ICSTR_RSFULL      (1 << 11)
#define DM36X_I2C_ICSTR_XSMT        (1 << 10)
#define DM36X_I2C_ICSTR_AAS         (1 << 9)
#define DM36X_I2C_ICSTR_AD0         (1 << 8)
#define DM36X_I2C_ICSTR_SCD         (1 << 5)
#define DM36X_I2C_ICSTR_ICXRDY      (1 << 4)
#define DM36X_I2C_ICSTR_ICRRDY      (1 << 3)
#define DM36X_I2C_ICSTR_ARDY        (1 << 2)
#define DM36X_I2C_ICSTR_NACK        (1 << 1)
#define DM36X_I2C_ICSTR_AL          (1 << 0)


/** Timer registers */
#define DM36X_TIMER0_BASE       0x01C21400 /* TIMER0 */
#define DM36X_TIMER1_BASE       0x01C21800 /* TIMER1 */
#define DM36X_TIMER_PID12       0x00
#define DM36X_TIMER_EMUMGT      0x04
#define DM36X_TIMER_TIM12       0x10
#define DM36X_TIMER_TIM34       0x14
#define DM36X_TIMER_PRD12       0x18
#define DM36X_TIMER_PRD34       0x1C
#define DM36X_TIMER_TCR         0x20
#define DM36X_TIMER_TGCR        0x24
#define DM36X_TIMER_WDTCR       0x28
#define DM36X_TIMER_REL12       0x34
#define DM36X_TIMER_REL34       0x38
#define DM36X_TIMER_CAP12       0x3C
#define DM36X_TIMER_CAP34       0x40
#define DM36X_TIMER_INTCTL_STAT 0x44

/** Interrupt controller registers */
#define DM36X_INTC_BASE         0x01C48000 /* Interrupt controller */
#define DM36X_INTC_IRQ0         0x08
#define DM36X_INTC_IRQ1         0x0C
#define DM36X_INTC_FIQENTRY     0x10
#define DM36X_INTC_IRQENTRY     0x14
#define DM36X_INTC_EINT0        0x18
#define DM36X_INTC_EINT1        0x1C
#define DM36X_INTC_INTCTL       0x20
#define DM36X_INTC_EABASE       0x24
#define DM36X_INTC_PRI0         0x30
#define DM36X_INTC_PRI1         0x34
#define DM36X_INTC_PRI2         0x38
#define DM36X_INTC_PRI3         0x3C
#define DM36X_INTC_PRI4         0x40
#define DM36X_INTC_PRI5         0x44
#define DM36X_INTC_PRI6         0x48
#define DM36X_INTC_PRI7         0x4C
/** Interrupt controller vector offsets */
#define DM36X_INTC_VEC_TINT0    32

/** UART registers */
#define DM36X_UART0_BASE        0x01C20000 /* UART0 */
#define DM36X_UART1_BASE        0x01D06000 /* UART1 */

/** GPIO registers */
#define DM36X_GPIO_BASE         0x01C67000
#define DM36X_GPIO_DIR01        0x10
#define DM36X_GPIO_OUT01        0x14
#define DM36X_GPIO_SET01        0x18
#define DM36X_GPIO_CLR01        0x1C
#define DM36X_GPIO_IN01         0x20
#define DM36X_GPIO_DIR23        0x38
#define DM36X_GPIO_OUT23        0x3C
#define DM36X_GPIO_SET23        0x40
#define DM36X_GPIO_CLR23        0x44
#define DM36X_GPIO_IN23         0x48
#define DM36X_GPIO_DIR45        0x60
#define DM36X_GPIO_OUT45        0x64
#define DM36X_GPIO_SET45        0x68
#define DM36X_GPIO_CLR45        0x6C
#define DM36X_GPIO_IN45         0x70
#define DM36X_GPIO_DIR6         0x88
#define DM36X_GPIO_OUT6         0x8C
#define DM36X_GPIO_SET6         0x90
#define DM36X_GPIO_CLR6         0x94
#define DM36X_GPIO_IN6          0x98


/* Function prototypes */
extern int              low_level_init (void) ;


#endif /* __DM36X_IO_H__ */