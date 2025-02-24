#include<stdio.h>
void display (int arr[] , int n ){
    //travarsal
for (int i = 0 ; i < n ; i++)
{
    printf ("%d\n", arr[i]);
}}
// Inserition of an array
int insersiton(int arr[] , int size,int  capacity , int newelement ,int  index ){
if (size >= capacity)
{
    printf ("Array overflow");
}
for (int i = (size - 1) ; i>= index ; i--){
    arr[i+1]=arr[i];

    printf ("the new array is:\n");
}
arr[index] = newelement ;
return 1;
}
// Main function 
int main (){
int arr[100] = {1,4,16,25,36};
int size = 5 , capacity  = 100 , newelement = 9;
int index = 1;
printf ("the array is:");
display(arr , size );
insersiton(arr , size, capacity , newelement , index );
display(arr , size );
size +=1;
return 0 ;
}