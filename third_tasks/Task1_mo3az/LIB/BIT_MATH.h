#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_ 


#define setbit(reg,bitno)      reg|=(1<<bitno)
#define clearbit(reg,bitno)    reg&=~(1<<bitno)
#define togglebit(reg,bitno)   reg^=(1<<bitno)  
#define readbit(reg,bitno)     (reg>>bitno)&0x01


#endif