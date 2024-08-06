#include <stdio.h>
void sort(int size, int array[])
{
        for (int i = 0; i < size ; i++)
        {
                for (int j = 0; j < size - 1; j++)
                {
                        if (array[j] > array[i])
                        {
                                int temp = array[j];
                                array[j] = array[i];
                                array[i] = temp;
                        }
                }
        }
}

void printnums(int size, int array[])
{
        for (int i = 0; i < size; i++)
        {
                printf("%d ", array[i]);
        }
}

int main()
{
        int array[] = {4, 1, 2, 6, 9, 5, 3};
        int size = sizeof(array) / sizeof(array[0]);
        sort(size , array);
        printnums( size , array ) ;
}