#include <stdio.h> 
void insertion(int arr[], int size){
 
 for (int i = 1; i< size; i++){ 
    int curr = arr[i];
    int pev = i-1;
    //find out the correct pos to insert--
    while (pev >= 0 && arr[pev] > curr){
        arr[pev+1] = arr[pev];
        pev--;
    }
    //insertion
    arr[pev+1] = curr ;
} 
}
int main (){ 
int arr[] = {2,9,1,3,5}; 
int size = sizeof(arr)/sizeof(arr[0]);
 insertion(arr,size);
 for (int i = 0 ; i <size ; i++){
    printf("%d\n" , arr[i]);
 }
 return 0; 
}   