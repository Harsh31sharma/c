#include <stdio.h>
int main () {
    //enter thr size of the array
    int n ,i =0 , counter;
    int sum[10];
    printf ("Enter the size of an array""\n");
    scanf("%d", &n);
    int arr[10];
    arr[0] = 0;
    arr[1] = 1;
    if (n ==1){
        printf ("%d",arr[0]);
    }
    if (n ==2){
        printf (" %d ",arr[0]);
        printf (" %d ",arr[1]);
    }
    if (n>2){
        printf (" %d ",arr[0]);
        printf (" %d ",arr[1]);
    while ( counter < n-2){
         sum[counter] = arr[i] + arr[i+1]  ;
        arr[i] = arr[i+1];
       arr[i+1] = sum[counter] ;
    counter++;
        }
    for (i = 0 ; counter ;  i++)
    printf ("%d",sum[i]);
}
}