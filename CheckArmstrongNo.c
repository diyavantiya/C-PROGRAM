// To check if a number is armstrong number or not
#include <stdio.h>
#include<math.h>

int main() {
  int num, remainder, orignum, n=0;
  int result=0;
  printf("Enter a number:");
  scanf("%d", &num);
  orignum=num;
  // count digits
  while(orignum!=0) {
      orignum=orignum/10;
      n++;
  }
  orignum=num;
  while(orignum!=0) {
      remainder=orignum%10;
      result=result+pow(remainder,n);
      orignum=orignum/10;
  }
  if(result==num)
    printf("%d is an Armstrong number.", num);
  else
    printf("%d is not an Armstrong number.", num);
    return 0;
}
