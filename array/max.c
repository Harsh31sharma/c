#include <stdio.h>
int main () {
    //enter thr size of the array
    printf ("Enter the size of an array""\n");
    int n, max = 0 , min ;
    scanf("%d", &n);
    int arr[n];
    //loop for the take array input.
    for (int i = 0 ; i <n ; i++)
    {
        scanf ("%d" ,&arr[i]);
    }
    //max
    for (int i = 0 ; i< n ; i ++){
        if (max <arr[i]){
            max = arr[i];
        }
    }
     printf ("The max is %d" ,max);

    //  min
    min = arr[0];
    for (int i = 0 ; i <n ; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
        printf ("\nThe min is %d" ,min);
        return 0;
}
