// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"

// GLOBAL VARIABLES ----------------------------------------------------------|


// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);                                                   //COMPULSORY

struct age_data
{
	unint8_t age;
	unint8_t month_ob;
	unint8_t year_ob;
	uint8_t date_ob;
}myAge;

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{   //collecting information
	myAge.year_ob = 2000;
	myAge.month_ob = 06;
	myAge.age = 22;
	myAge.date_ob = 08;

	init_LCD();


	while(1)
	{  char str[100];
	 //manipulating the string
	   for(uint8_t i=0; i<=myAge.age; i++){
		  sprintf(str,"%d,i");
		  lcd_putstring(str);
		  delay(250000);
		  lcd_command(CLEAR);
    	}

	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|




