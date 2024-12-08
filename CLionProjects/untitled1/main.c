#include <stdio.h>
#include<stdbool.h>
int main() {
    int number[]={2,4,6,8,10};
    bool ifOutOfIndex = true;
    printf("Enter the number to search the array : ");
    int numbers;
    int sizeofarray = 4;
    scanf("%d",&numbers);
    for (int i = 0; i <= sizeofarray; i++) {
        if (numbers==number[i]) {
            ifOutOfIndex = false;
         printf("Item found at index %d\n",i);
        }
        }
    if (ifOutOfIndex==true) {
        printf("Item not found\n");
    }
    return 0;
    }
