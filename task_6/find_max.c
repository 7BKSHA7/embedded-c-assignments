char find_max(char arr[], char size)
{
    char max = arr[0];
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
