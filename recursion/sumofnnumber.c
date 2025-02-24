#include <stdio.h>

int sum (int n ){
    if (n==1)
{
    return 1 ;
}
    return  sum(n-1) +n;
     
}

int main (){
    int n = 5 ;
    int s = sum(n);
    printf("%d", s);
    return 0;
}