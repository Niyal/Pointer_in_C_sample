//   reorder a one-dimensional, integer array from smallest to largest,
//   using  pointer notation

#include  <stdio.h>
#include  <stdlib.h>

void  reorder(int  n,  int  *x);

int main ( )
{
	int i, n, *x;

	printf("Enter any number for array element");
	scanf("%d",&n);
	printf("\n");

	x = (int*)malloc(n * sizeof(int));

	for(i = 0; i < n; i++)
	{
		scanf("%d",(x+i));
	}

	reorder(n,x);

	for(i = 0; i < n; ++i)
		printf("%d\t",*(x+i));

    free(x);

	return (0);
}

void reorder(int n, int *x)
{
	int item, i, temp;

	for(item = 0; item < n-1; ++item)
		for(i = item+1; i < n; ++i)
		{
            if(*(x+item) > *(x+i))
            {
                temp = *(x+item);
                *(x+item) = *(x+i);
                *(x+i) = temp;
            }
		}
}


