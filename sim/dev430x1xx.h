/*
	Copyright (c) 1999-2008, Phillip Stanley-Marbell (author)
 
	All rights reserved.

	Redistribution and use in source and binary forms, with or without 
	modification, are permitted provided that the following conditions
	are met:

	*	Redistributions of source code must retain the above
		copyright notice, this list of conditions and the following
		disclaimer.

	*	Redistributions in binary form must reproduce the above
		copyright notice, this list of conditions and the following
		disclaimer in the documentation and/or other materials
		provided with the distribution.

	*	Neither the name of the author nor the names of its
		contributors may be used to endorse or promote products
		derived from this software without specific prior written 
		permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
	"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
	FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
	COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
	BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
	CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
	LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN 
	ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
	POSSIBILITY OF SUCH DAMAGE.
*/

enum
{
	MSP430_IVT_END			= 0xFFFF,
	MSP430_IVT_BEGIN		= 0xFFE0,

	MSP430_ROM_END			= 0xFFDF,
	/*	MSP430_ROM_BEGIN		= ,	*/

	/*	MSP430_RAM_END		= ,	*/
	MSP430_RAM_BEGIN		= 0x0200,

	MSP430_PERIPH16_END		= 0x01FF,

	/*	DMA Ctrlr	*/
	MSP430_PERIPH16_DMA2SZ		= 0x01F6,
	MSP430_PERIPH16_DMA2DA		= 0x01F4,
	MSP430_PERIPH16_DMA2SA		= 0x01F2,
	MSP430_PERIPH16_DMA2CTL		= 0x01F0,
	MSP430_PERIPH16_DMA1SZ		= 0x01EE,
	MSP430_PERIPH16_DMA1DA		= 0x01EC,
	MSP430_PERIPH16_DMA1SA		= 0x01EA,
	MSP430_PERIPH16_DMA1CTL		= 0x01E8,
	MSP430_PERIPH16_DMA0SZ		= 0x01E6,
	MSP430_PERIPH16_DMA0DA		= 0x01E4,
	MSP430_PERIPH16_DMA0SA		= 0x01E2,
	MSP430_PERIPH16_DMA0CTL		= 0x01E0,
	MSP430_PERIPH16_DMACTL1		= 0x0124,
	MSP430_PERIPH16_DMACTL0		= 0x0122,

	/*	   ADC12	*/
	MSP430_PERIPH16_ADC12CTL0	= 0x01A0,
	MSP430_PERIPH16_ADC12CTL1	= 0x01A2,
	MSP430_PERIPH16_ADC12IFG	= 0x01A4,
	MSP430_PERIPH16_ADC12IE		= 0x01A6,
	MSP430_PERIPH16_ADC12IV		= 0x01A8,
	MSP430_PERIPH16_ADC12MEM0	= 0x0140,
	MSP430_PERIPH16_ADC12MEM1	= 0x0142,
	MSP430_PERIPH16_ADC12MEM2	= 0x0144,
	MSP430_PERIPH16_ADC12MEM3	= 0x0146,
	MSP430_PERIPH16_ADC12MEM4	= 0x0148,
	MSP430_PERIPH16_ADC12MEM5	= 0x014A,
	MSP430_PERIPH16_ADC12MEM6	= 0x014C,
	MSP430_PERIPH16_ADC12MEM7	= 0x014E,
	MSP430_PERIPH16_ADC12MEM8	= 0x0150,
	MSP430_PERIPH16_ADC12MEM9	= 0x0152,
	MSP430_PERIPH16_ADC12MEM10	= 0x0154,
	MSP430_PERIPH16_ADC12MEM11	= 0x0156,
	MSP430_PERIPH16_ADC12MEM12	= 0x0158,
	MSP430_PERIPH16_ADC12MEM13	= 0x015A,
	MSP430_PERIPH16_ADC12MEM14	= 0x015C,
	MSP430_PERIPH16_ADC12MEM15	= 0x015E,
	MSP430_PERIPH8_ADC12MCTL0	= 0x0080,
	MSP430_PERIPH8_ADC12MCTL1	= 0x0081,
	MSP430_PERIPH8_ADC12MCTL2	= 0x0082,
	MSP430_PERIPH8_ADC12MCTL3	= 0x0083,
	MSP430_PERIPH8_ADC12MCTL4	= 0x0084,
	MSP430_PERIPH8_ADC12MCTL5	= 0x0085,
	MSP430_PERIPH8_ADC12MCTL6	= 0x0086,
	MSP430_PERIPH8_ADC12MCTL7	= 0x0087,
	MSP430_PERIPH8_ADC12MCTL8	= 0x0088,
	MSP430_PERIPH8_ADC12MCTL9	= 0x0089,
	MSP430_PERIPH8_ADC12MCTL10	= 0x008A,
	MSP430_PERIPH8_ADC12MCTL11	= 0x008B,
	MSP430_PERIPH8_ADC12MCTL12	= 0x008C,
	MSP430_PERIPH8_ADC12MCTL13	= 0x008D,
	MSP430_PERIPH8_ADC12MCTL14	= 0x008E,
	MSP430_PERIPH8_ADC12MCTL15	= 0x008F,


	/*	   ADC10	*/
	MSP430_PERIPH8_ADC10AE	= 0x004A,
	MSP430_PERIPH16_ADC10CTL0	= 0x01B0,
	MSP430_PERIPH16_ADC10CTL1	= 0x01B2,
	MSP430_PERIPH16_ADC10MEM	= 0x01B4,
	MSP430_PERIPH8_ADC10DTC0	= 0x0048,
	MSP430_PERIPH8_ADC10DTC1	= 0x0049,
	MSP430_PERIPH16_ADC10SA	= 0x01BC,


	/*	   DAC12	*/
	MSP430_PERIPH16_DAC12_0CTL	= 0x01C0,
	MSP430_PERIPH16_DAC12_0DAT	= 0x01C8,
	MSP430_PERIPH16_DAC12_1CTL	= 0x01C2,
	MSP430_PERIPH16_DAC12_1DAT	= 0x01CA,



	/*	Timer_A		*/
	MSP430_PERIPH16_TACTL		= 0x0160,
	MSP430_PERIPH16_TAR		= 0x0170,
	MSP430_PERIPH16_TACCTL0		= 0x0162,
	MSP430_PERIPH16_TACCR0		= 0x0172,
	MSP430_PERIPH16_TACCTL1		= 0x0164,
	MSP430_PERIPH16_TACCR1		= 0x0174,
	MSP430_PERIPH16_TACCTL2		= 0x0166,
	MSP430_PERIPH16_TACCR2		= 0x0176,
	MSP430_PERIPH16_TAIV		= 0x012E,

	/*	Timer_B		*/
	MSP430_PERIPH16_TBCTL		= 0x0180,
	MSP430_PERIPH16_TBR		= 0x0190,
	MSP430_PERIPH16_TBCCTL0		= 0x0182,
	MSP430_PERIPH16_TBCCCR0		= 0x0192,
	MSP430_PERIPH16_TBCCTL1		= 0x0184,
	MSP430_PERIPH16_TBCCR1		= 0x0194,
	MSP430_PERIPH16_TBCCTL2		= 0x0186,
	MSP430_PERIPH16_TBCCR2		= 0x0196,
	MSP430_PERIPH16_TBCCTL3		= 0x0188,
	MSP430_PERIPH16_TBCCR3		= 0x0198,
	MSP430_PERIPH16_TBCCTL4		= 0x018A,
	MSP430_PERIPH16_TBCCR4		= 0x019A,
	MSP430_PERIPH16_TBCCTL5		= 0x018C,
	MSP430_PERIPH16_TBCCR5		= 0x019C,
	MSP430_PERIPH16_TBCCTL6		= 0x018E,
	MSP430_PERIPH16_TBCCR6		= 0x019E,
	MSP430_PERIPH16_TBIV		= 0x011E,


	/*	Watchdog Timer	*/
	MSP430_PERIPH16_WDTCTL		= 0x0120,

	/*	Multiplier	*/
	MSP430_PERIPH16_SUMEXT		= 0x013E,
	MSP430_PERIPH16_RESHI		= 0x013C,
	MSP430_PERIPH16_RESLO		= 0x013A,
	MSP430_PERIPH16_OP2		= 0x0138,
	MSP430_PERIPH16_MACS		= 0x0136,
	MSP430_PERIPH16_MAC		= 0x0134,
	MSP430_PERIPH16_MPYS		= 0x0132,
	MSP430_PERIPH16_MPY		= 0x0130,

	/*	Flash		*/
	MSP430_PERIPH16_FCTL3		= 0x012C,
	MSP430_PERIPH16_FCTL2		= 0x012A,
	MSP430_PERIPH16_FCTL1		= 0x0128,



	MSP430_PERIPH16_BEGIN		= 0x0100,



	MSP430_PERIPH8_END		= 0x00FF,
	/*	USART0		*/
	MSP430_PERIPH8_U0CTL		= 0x0070,
	MSP430_PERIPH8_U0TCTL		= 0x0071,
	MSP430_PERIPH8_U0RCTL		= 0x0072,
	MSP430_PERIPH8_U0MCTL		= 0x0073,
	MSP430_PERIPH8_U0BR0		= 0x0074,
	MSP430_PERIPH8_U0BR1		= 0x0075,
	MSP430_PERIPH8_U0RXBUF		= 0x0076,
	MSP430_PERIPH8_U0TXBUF		= 0x0077,

	/*	USART1		*/
	MSP430_PERIPH8_U1CTL		= 0x0078,
	MSP430_PERIPH8_U1TCTL		= 0x0079,
	MSP430_PERIPH8_U1RCTL		= 0x007A,
	MSP430_PERIPH8_U1MCTL		= 0x007B,
	MSP430_PERIPH8_U1BR0		= 0x007C,
	MSP430_PERIPH8_U1BR1		= 0x007D,
	MSP430_PERIPH8_U1RXBUF		= 0x007E,
	MSP430_PERIPH8_U1TXBUF		= 0x007F,

	/*	  I2C 		*/
	MSP430_PERIPH8_I2CIE		= 0x0050,
	MSP430_PERIPH8_I2CIFG		= 0x0051,
	MSP430_PERIPH8_I2CNDAT		= 0x0052,
	MSP430_PERIPH8_I2CTCTL		= 0x0071,
	MSP430_PERIPH8_I2CDCTL		= 0x0072,
	MSP430_PERIPH8_I2CPSC		= 0x0073,
	MSP430_PERIPH8_I2CSCLH		= 0x0074,
	MSP430_PERIPH8_I2CSCLL		= 0x0075,
	MSP430_PERIPH8_I2CDRWB		= 0x0076,
	MSP430_PERIPH16_I2COA		= 0x0118,	/*	This is a 16-bit register	*/
	MSP430_PERIPH16_I2CSA		= 0x011A,	/*	This is a 16-bit register	*/
	MSP430_PERIPH16_I2CIV		= 0x011C,	/*	This is a 16-bit register	*/

	/*	Comparator_A	*/
	MSP430_PERIPH8_CACTL1		= 0x0059,
	MSP430_PERIPH8_CACTL2		= 0x005A,
	MSP430_PERIPH8_CAPD		= 0x005B,
	
	/*	Clock Module	*/
	MSP430_PERIPH8_BCSCTL2		= 0x0058,
	MSP430_PERIPH8_BCSCTL1		= 0x0057,
	MSP430_PERIPH8_DCOCTL		= 0x0056,

	/*	SVS Ctrlr	*/
	/*						*/
	/*	slau049d.pdf incorrectly lists		*/
	/*	this at 0x0050. slau049e corrects	*/
	/*						*/
	MSP430_PERIPH8_SVSCTL		= 0x0055,

	/*	I/O Ports	*/
	MSP430_PERIPH8_P6SEL		= 0x0037,
	MSP430_PERIPH8_P6DIR		= 0x0036,
	MSP430_PERIPH8_P6OUT		= 0x0035,
	MSP430_PERIPH8_P6IN		= 0x0034,
	MSP430_PERIPH8_P5SEL		= 0x0033,
	MSP430_PERIPH8_P5DIR		= 0x0032,
	MSP430_PERIPH8_P5OUT		= 0x0031,
	MSP430_PERIPH8_P5IN		= 0x0030,
	MSP430_PERIPH8_P4SEL		= 0x001F,
	MSP430_PERIPH8_P4DIR		= 0x001E,
	MSP430_PERIPH8_P4OUT		= 0x001D,
	MSP430_PERIPH8_P4IN		= 0x001C,
	MSP430_PERIPH8_P3SEL		= 0x001B,
	MSP430_PERIPH8_P3DIR		= 0x001A,
	MSP430_PERIPH8_P3OUT		= 0x0019,
	MSP430_PERIPH8_P3IN		= 0x0018,
	MSP430_PERIPH8_P2SEL		= 0x002E,
	MSP430_PERIPH8_P2IE		= 0x002D,
	MSP430_PERIPH8_P2IES		= 0x002C,
	MSP430_PERIPH8_P2IFG		= 0x002B,
	MSP430_PERIPH8_P2DIR		= 0x002A,
	MSP430_PERIPH8_P2OUT		= 0x0029,
	MSP430_PERIPH8_P2IN		= 0x0028,
	MSP430_PERIPH8_P1SEL		= 0x0026,
	MSP430_PERIPH8_P1IE		= 0x0025,
	MSP430_PERIPH8_P1IES		= 0x0024,
	MSP430_PERIPH8_P1IFG		= 0x0023,
	MSP430_PERIPH8_P1DIR		= 0x0023, /* BUG ? typo ? */
	MSP430_PERIPH8_P1OUT		= 0x0021,
	MSP430_PERIPH8_P1IN		= 0x0020,
	MSP430_PERIPH8_BEGIN		= 0x0010,


	MSP430_SFR_END			= 0x000F,

	MSP430_SFR_ME2			= 0x0005,
	MSP430_SFR_ME1			= 0x0004,
	MSP430_SFR_IFG2			= 0x0003,
	MSP430_SFR_IFG1			= 0x0002,
	MSP430_SFR_IE2			= 0x0001,
	MSP430_SFR_IE1			= 0x0000,

	MSP430_SFR_BEGIN		= 0x0000,
};

enum
{
	MSP430x1xxBEGIN 		= 0x0000,
	MSP430x1xxEND 			= 0xFFFF,
};

enum
{
	MSP430_RESET_PUC,
	MSP430_RESET_BOR,
	MSP430_RESET_POR
};
