#include <stdio.h>
#define MASK(x) ((unsigned char)(1<<(x)))
int main(){
  int age;
  char *class;
  printf("Type your age : ");
  scanf("%d", &age);

  class = ((age<19)? "child" : (age<65) ? "adult" : "geezer");
  printf("you are %s\n",class);
  /*int num;
  printf("type positive number : ");
  scanf("%d", &num);
  if (num < 1)
  {
    return 0;
  }
  
  printf("the number is %s\n", (num%2==0) ? "even" : "odd");*/
  
  int temp = MASK(4);
  printf("%d\n",temp);
  return 0;
  }
  
