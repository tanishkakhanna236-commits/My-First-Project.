//sum of 10 arrays in 1d
#include <stdio.h>

int main() {
    int a[10];
    int sum = 0;
    int i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("the array elements are%d:\n",a[i]);
    for(i=0;i<10;i++){
        printf("enter the elements:\n");
        printf("the elements are: %d\n",a[i]);
    }
    for(i=0;i<10;i++){
        sum = sum + a[i];
    }
    printf("the sum is: %d\n",sum);

    return 0;
}
