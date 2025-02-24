#include<stdio.h>
void display (int arr[] , int n ){
    //travarsal
for (int i = 0 ; i < n ; i++)
{

    printf ("%d\n", arr[i]);
}}
//deletion
int deletion (int arr[], int size, int index)
{
    
for (int i = index ; i < size ; i++){
arr[i]=arr[i+1];
}
}

int main (){
int arr[5] = {0,1,2,3,4};
int index = 4 ;
int size = 5 ;
printf ("old");
display(arr , size);
deletion (arr , size , index) ;
size -=1;
printf ("new\n");
display(arr , size);

return 0;
}