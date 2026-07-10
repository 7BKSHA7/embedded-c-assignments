#include "STD_TYPES.h"

void reverse_int (u16 arr[], u16 size , u16 reversed_arr[])
{
    u16 counter = 0 ;
    for(counter = 0 ; counter < size ; counter++)
    {
        reversed_arr[counter] = arr[size - 1 - counter] ;
    }

}
void reverse_char (u8 arr[], u16 size , u8 reversed_arr[])
{
    u16 counter = 0 ;
    for(counter = 0 ; counter < size ; counter++)
    {
        reversed_arr[counter] = arr[size - 1 - counter] ;
    }
}