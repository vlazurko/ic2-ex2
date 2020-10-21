#include <stdio.h>
#include <stdlib.h>


int main()
{
    int dolla;
    int twenty=0,ten=0,five=0,one=0;

    printf("Enter US Dollar amount:");
    scanf("%d", &dolla);

    while(dolla>0){

        if(dolla >= 20){
            dolla=dolla-20;
            twenty=twenty+1;
        }

        else if (dolla >=10){
            dolla=dolla-10;
            ten=ten+1;
        }
        else if (dolla >=5){
            dolla=dolla-5;
            five=five+1;
        }
        else if (dolla >=1){
            dolla=dolla-1;
            one=one+1;
        }
    }

    printf("$20 dollar bills:%d\n",twenty);
    printf("$10 dollar bills:%d\n",ten);
    printf("$5 dollar bills:%d\n",five);
    printf("$1 dollar bills:%d\n",one);


}
