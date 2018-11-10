/*
 * ADC.c
 *
 *  Created on: Feb 15, 2018
 *      Author: ziad
 */
ADC_Init(void)
{
/*ADC module to be used*/
/*PLL must be enabled and programmed to a supported crystal frequency in the RCC register*/
/*Using unsupported frequencies can cause faulty operation in the ADC module.*/
RCC = 0x7E716F1 ;
/*reconfigure the sample sequencer priorities (optional) */
/*The default configuration has Sample Sequencer 0 with the highest priority */
/* Sample Sequencer 3 as the lowest priority */
ADCSSPRI =0x00 ;
/*  the sample sequencer is disabled 0x00 */
/* if enable 0x0F */
ADCACTSS =0x00 ;
/* Configure the trigger event for the sample sequencer */
ADCEMUX =0x00 ;
ADCPSSI = 0x8800000F ;
/*using a PWM generator as the trigger source */
/*specify in which PWM module the generator is located */
/*ADC Trigger Source Select */
ADCTSSEL =10101010 ;
/*For each sample in the sample sequence, configure the corresponding input source */
ADCSSMUX =0x00 ;
/* ADC Raw Interrupt Status */
/* configure the sample control bits in the corresponding nibble */
ADCRIS =0x0F;
/* ADC Digital Comparator Interrupt Status and Clear */
ADCDCISC=0x00 ;
/* ADC Interrupt Mask */
/* If interrupts are to be used, set the corresponding MASK bit */
/* in case of interrupts = 0xF000F */
ADCIM = 0x00 ;
/* sample sequencer is enabled */
ADCACTSS =0x0F ;
}
