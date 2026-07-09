short int find_max(short int arr[], char size)
{
    short int max = arr[0];
    int counter = 0;
    for (counter = 0; counter < size; counter++)
    {
        if (arr[counter] > max)
        {
            max = arr[counter];
        }
    }
    return max;
}
