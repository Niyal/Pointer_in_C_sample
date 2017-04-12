//Fibonacchi in Pointer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int prev[15],aft[15],i,result;
    int *ptr_prev = prev, *ptr_aft = aft, *ptr_result = &result;

    for(i = 0; i < 15; i++)
    {
        if(i == 0)
        {
            *(ptr_prev+i) = 0;
            *(ptr_aft+i) = 1;
            printf("0 \t1 \t");
        }
        
     *ptr_result = *(ptr_prev+i) + *(ptr_aft+i);
     *(ptr_prev + i+1) = *(ptr_aft+i);
     *(ptr_aft+i+1) = *ptr_result;
     printf("%d \t",*ptr_result);

	}


    return 0;
}




