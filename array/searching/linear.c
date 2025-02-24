// #include<stdio.h>
// int main (){
//     int i;
//     int arr[5] = {23,46,46,62,56};
//     int size = sizeof(arr)/sizeof(int);
//     int search = 46;
//     for (i = 0 ; i < size ; i++)
//     {
//         if (arr[i]==search){
//             printf ("The element get found");
//             return i;
//         }
        
//     }
// }

#include <stdio.h>
int input(){
    int n ;
    printf ("Enter\n");
    scanf ("%d", &n);
    return n;}

void array (int size , int arr[]){
    for (int i = 0 ; i < size ; i++){
        arr[i] = input();
    }
}

int main(){
    printf ("ENTER SIZE OF AN ARRAY\n");
    int size = input();
    int arr[size];
    printf ("ENTER ARRAY ELEMENT\n");
    array (size , arr);

    for (int i = 0 ; i <size ;i++ ){
        printf ("%d", arr[i]);
        printf ("  ");
    }

    
    return 0;
}