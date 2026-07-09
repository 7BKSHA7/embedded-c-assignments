void convertarray(char arr[] , int size , short int new_arr[])
{
    int counter = 0 ;
    for(counter = 0 ; counter < size ; counter++)
    {
        new_arr[counter] = (short int)arr[counter];
    }
}
