void reverse_int (short int arr[], int size , short int reversed_arr[])
{
    int counter = 0 ;
    for(counter = 0 ; counter < size ; counter++)
    {
        reversed_arr[counter] = arr[size - 1 - counter] ;
    }

}
void reverse_char (char arr[], int size , char reversed_arr[])
{
    int counter = 0 ;
    for(counter = 0 ; counter < size ; counter++)
    {
        reversed_arr[counter] = arr[size - 1 - counter] ;
    }
}