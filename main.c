#include <stdio.h>

/* 
* A program that performs calculations based on certain conditions
* 1 - 9 - power 2
* 10 - 19 - power 3
* 20 - 30 - power 4
* User will input value
* result will be printed
*/

int main(void){
  /*Variables*/
  int x, result;

  /*Ask user for number*/
  printf("Kindly input a number between 1 and 30: ");
  scanf("%d", &x);
  
  /*If satements*/
  if(x >= 1 && x <=9){
    printf("Your value is: %d \n", x * x);
  }else if(x >=10 && x <= 19){
    printf("Your value is: %d \n", x * x * x);
  }else if(x >=20 && x <= 30){
    printf("Your value is: %d \n", x * x * x * x);
  }else{
    printf("The value %d is out of scope \n ", x);
  }
  return 0;
}
