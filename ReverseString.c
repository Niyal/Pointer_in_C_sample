// Reverse String

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverseSlogan(char *slogan);

int main() {

   char slogan[80];
   char *ptrSlogan = slogan,i;

   ptrSlogan = reverseSlogan(ptrSlogan);

   printf("\nLanded Slogan is : \n");
   puts(ptrSlogan);

   return (0);
}

char *reverseSlogan(char *slogan)
{
    static char *ptrSlogan;
    static char revSloArray[80];
    int i,j;
    size_t strLength;
    ptrSlogan = slogan;


    printf("Insert the slogan please: \n");
    //scanf("%s",slogan);

    gets(ptrSlogan);
    puts(ptrSlogan);

    strLength = strlen(ptrSlogan);
    printf("Length size: %d",strLength);

    for(i = 0,j = strLength-1; j >= 0; j--,i++)
    {
        revSloArray[i] = *(ptrSlogan+j);
        printf("%c \t",revSloArray[i]);
    }
    revSloArray[i] = '\0';

    return revSloArray;
}


