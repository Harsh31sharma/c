#include<stdio.h>
//  Function 
int binarysearch (int arr[] , int size , int element){
    int low = 0 ;
    int high = size-1;
    //binary search start
    while (low <= high){
        int mid = (high+low)/2 ;
        if (arr[mid]==element){
            return mid;
        }
        if(arr[mid]< element){
        low = mid+1;    }
        else{
        high = mid-1;    }
    //binary search end 
    }
    return -1;
    }

    // main function
int main (){
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,20};
    int size = sizeof(arr)/sizeof(int);
    int element = 20;
   int searchindex =  binarysearch(arr,size,element);
   printf ("the element %d was found at %dth index", element,searchindex);

   return 0 ;
}