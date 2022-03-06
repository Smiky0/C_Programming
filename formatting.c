#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  float num = 155.151555;
  printf("%-f\n", num);
  printf("%-1f\n", num);
  printf("%-2f\n", num);
  printf("%-3f\n", num);
  printf("%-4f\n", num);
  printf("%-5f\n", num);

  printf("%-.f\n", num);
  printf("%-.1f\n", num);
  printf("%-.2f\n", num);
  printf("%-.3f\n", num);
  printf("%-.4f\n", num);
  printf("%-.5f\n", num);

  return 0;
}
