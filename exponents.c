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