/*
 * PB_Config.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef HAL_PB_PB_CONFIG_H_
#define HAL_PB_PB_CONFIG_H_

#define PUSH_BUTTON_0_PIN            PD2_PIN    /*AMIT-->PB0_PIN    (BTN2     BEFORE)    EDITED TO FIT EXT_INTERRUPTS*/    
#define PUSH_BUTTON_1_PIN            PD3_PIN    /*AMIT-->PD6_PIN    (LED2     BEFORE)    EDITED TO FIT EXT_INTERRUPTS*/    
#define PUSH_BUTTON_2_PIN            PC6_PIN    /*AMIT-->PD2_PIN    (H_BRIDGE BEFORE)    3ade not interrupt (INT3_PIN-->7SEG_EN2)*/    
/*
 * SELECT PB_MODE OPTIONS : ACTIVE_HIGH , ACTIVE_LOW
 */
#define PB_MODE                      ACTIVE_HIGH
/*
 * SELECT PB_DEBOUNCING_TIME IN MILLI SECOND
 */
#define PB_DEBOUNCING_TIME           120

#endif /* HAL_PB_PB_CONFIG_H_ */
