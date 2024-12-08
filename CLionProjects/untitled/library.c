#include "library.h"
#include<stdbool.h>
#include <stdio.h>

int main(void) {#include "library.h"
#include<stdbool.h>
#include <stdio.h>

int main(void) {
    int numbers[]={2,3,4,5,6,7};
    int low = 0;
    int high = 5;
    int number;
    bool condition=false;
    printf("enter the number to find");
    scanf("%d",&number);

    while (low <= high) {
    int mid = (low + high) / 2;
        if (number==numbers[mid]) {
            condition=true;
            printf("The  hindex is %d: ",mid);
            break;
        }else if (number<numbers[mid]) {
           high=mid-1;
       }
        else {
            low=mid+1;
        }
    }
    if (!condition) {
        printf("Invalid input");
    }
return 0;


}

    int numbers[]={2,3,5,7,11,13};
    int low = 0;
    int high = 5;
    int number;
    bool condition=false;
    printf("enter the number");
    scanf("%d",&number);

    while (low <= high) {
        int mid = (low + high) / 2;
        if (number==numbers[mid]) {
            condition=true;
            printf("The  h index is %d: ",mid);
            break;
        }else if (number<numbers[mid]) {
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    if (!condition) {
        printf("Invalid input");
    }
    return 0;


}
