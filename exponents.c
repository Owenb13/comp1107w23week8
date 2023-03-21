#include <stdio.h>
#include "helpers.h"
int main()
{
 
 double num = get_double("please enter an intager to be squared");

 int times = get_int("how many times would you like to square this number");
 
 for(int i= 0; i  < times; i++)
 {
   num = num * num;

   printf("%lf\n",num);

 }
 
 
return 0;




}

/*#include<stdio.h>

int main(){
    int input;
    printf("enter a number\n");
    scanf("%d", &input);

    for(int i=1 ; i<=input; i++){

        if(i % 15 == 0 ){

            printf("fizzbuzz \n");
        }else if(i % 5 == 0 ){

         printf ( "buzz\n");

        }else if( i % 3 == 0){
          printf(" fizz\n");
        }else{

            printf("%d\n", i );
        }

    }

       return 0 ; 


    }
*/