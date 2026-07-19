#ifndef _SEGMENT_INTERFACE_H_
#define _SEGMENT_INTERFACE_H_

#include <stdint.h>

void Segment_Init(uint8_t GroupName);

void DisplayNumber(uint8_t GroupName,uint8_t Number);

void DisplayRang(uint8_t GroupName,uint8_t Start,uint8_t End);

#endif 