// #include <stdio.h>
// void print (int arr[] , int size);
// void bubblesort(int arr[] , int size);
// int main (){
//     int arr [] = {6,54,98,43,74,73,87,36,4,12,43,2,31,3,43,1};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     printf ("the unsorted array\n");
//     print (arr , size);
//     bubblesort(arr , size);
//     printf ("the sorted array\n");
//     print (arr , size);
//     return 0 ;
// }
// void bubblesort(int arr[] , int size){
//     int i , j ;
//     for (i = 0 ; i <size -1 ; i++){
//         for (j = 0 ; j < size - 1 ; j++) {
//             if (arr[j] > arr[j+1])
//             {
//                 arr[j] = arr[j] + arr[j+1] ;
//                 arr[j+1] = arr[j] - arr[j+1] ;
//                 arr[j] = arr[j] - arr[j+1] ;
//             }
//         }
//     }
// }
// void print (int arr[] , int size){
//     for (int i = 0 ; i <size ; i++){
//         printf ("arr[%d] = %d\n", i,arr[i]);
//     }
// }

#include <stdio.h>
int swap = 0;

void bubblesort (int arr[] , int size ){
    int i , j , temp ;
for ( i = 0 ; i < size -1 ; i++){
    for ( j = 0 ; j <size-1-i ; j++){
        if (arr[j]>  arr[j+1]){
            temp =  arr[j];
             arr[j] =  arr[j+1];
             arr[j+1] = temp;
             swap +=1;  // it will tell the array is already sorted or not 
        }
    }
}
}


int main ( ){
    int arr[]= {1,2,3,4,5,6,7,8,9};
     int size = sizeof(arr)/sizeof(arr[0]);
     for (int i  = 0 ; i< size ; i++){
        printf ("the index is %d and value is %d\n", i, arr[i]);
    }
    bubblesort(arr , size );
    for (int i  = 0 ; i< size ; i++){
        printf ("the index is %d and value is %d\n", i, arr[i]);
    }

    printf("no of swap %d", swap);
    return 0;
    
}