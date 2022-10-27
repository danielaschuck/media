#include <stdio.h>

int main(void) {
  float n1,n2,media;
  
  printf("Digite a primeira nota\n");
  scanf("%f",&n1);
  printf("Digite a segunda nota\n");
  scanf("%f",&n2);
  media=(n1+n2)/2;
  printf("a  nota 1 = %f nota 2 =%f \n  media é %f",n1,n2,media);
  
  return 0;
}