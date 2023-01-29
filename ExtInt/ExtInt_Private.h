/*
 * ExtInt_Private.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef MCAL_EXTINT_EXTINT_PRIVATE_H_
#define MCAL_EXTINT_EXTINT_PRIVATE_H_

#define MCUCR_REG     *(volatile u8*)0x55
#define GICR_REG      *(volatile u8*)0x5B

/* MCUCR BITS */
#define ISC00_BIT             0
#define ISC01_BIT             1

#define ISC10_BIT             2
#define ISC11_BIT             3

/* GICR BITS */
#define INT0_BIT              6
#define INT1_BIT              7
#define INT2_BIT              5


#define RISING_EDGE                1
#define FALLING_EDGE               2
#define LOW_LEVEL                  3
#define LOGICAL_CHANGE             4


#endif /* MCAL_EXTINT_EXTINT_PRIVATE_H_ */
