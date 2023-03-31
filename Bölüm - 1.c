#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1 , x ;

    printf("Bir x degeri giriniz ==> \n");
    scanf("%d" ,&x);

    while(i<=10){

        printf("==>%d \n", i * x );
        i = i + 1;
    }

}
