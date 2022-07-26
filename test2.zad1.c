#include <stdio.h>
#include <stdlib.h>
#define min 
#define max
int mintomax (const void * min, const void * max) {
   return ( *(int*)min - *(int*)max );
}
int maxtomin (const void * min, const void * max) {
   return ( *(int*)max - *(int*)min );
}
int absolute (const void * min, const void * max) {
    int sum= |*(int*)min| + |*(int*)max| ;
   return (sum);
}
int compare (const void * min, const void * max) {
    int sum1=*(int*)min%10;
    *(int*)min=*(int*)min/10;
    sum1=sum1+*(int*)min;
    int sum2=*(int*)max%10;
    *(int*)max=*(int*)max/10;
    sum2=sum2+*(int*)max;
   return ( sum2 - sum1);
}

int main(){
int count[min,max];
qsort(count, max, sizeof(int), mintomax);
qsort(count, max, sizeof(int), maxtomin);
qsort(count, max, sizeof(int), absolute);
qsort(count, max, sizeof(int), compare);
    return 0;
}