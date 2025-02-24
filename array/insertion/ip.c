#include<stdio.h>
void display (int arr[] , int n ){
    //travarsal
for (int i = 0 ; i < n ; i++)
{

    printf ("\n%d", arr[i]);
}
// inserstion
    int intersion (int arr[] ,int n ,int newelement ,int indexing ){
        for (int i > n-1 ; i> = indexing ; ind)
    }

}
int main (){
    int n ; 
    printf ("input size of array");
    scanf("%d", &n);
    int arr[n];

    printf ("input array element");
    for (int i = 0 ; i<n ; i++){
     scanf("%d",&arr[i]);
    }
    printf ("the array is");
    display (arr , n );
    int newelement ;
    printf ("input array new element");
    scanf("%d", &newelement);
    int index ;
    printf ("input the index at which it get placed");
    scanf("%d", &index);

    intersion (arr , n , newelement , indexing );
}