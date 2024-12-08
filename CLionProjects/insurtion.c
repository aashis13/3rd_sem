#include<stdio.h>
int main() {
    int n[] = {8,6,2,10,1,11};
    for(int i=0;i<n;i++) {
        int a;
        int key = a[i];
        int j = i-1;
        while (a[j]>a key && j>=0) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = key;
    }
}