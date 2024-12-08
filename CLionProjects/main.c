#include<stdio.h>
// int main() {
//     int minindex;
//     int a;
//     int asizeof;
//     int length = sizeof[a]/asizeof(a[0]);
//     for (int i=0;i<length-1;i++)
//     {
//         minindex=i;
//         for(int j=i+1;j<length;j++)
//         {
//             if(a[minindex]>a[j])
//             {
//                 minindex=j;
//             }
//         }
//         if(minindex!= i){
//           int swap(a[i],a)minindex;
//             }
//         return 0;
// }
int main() {
   int number[] = {2,5,6,1,3,4};
   int length=sizeof(number)/sizeof(number[0]);
   for(int i=0;i<length;i++) {
      number[i]+=number[i+1];
      for(int j=0;j<length;j++) {
         if(number[i]==number[j]) {
            printf("%d ",number[i]);
         }
         else {
            printf("%d ",number[i]);
         }
      }
      printf("\n");
   }
   return 0;
}
void swap(int *a,int *b) {
   int temp=*a;
   *a=*b;
   *b=temp;
}