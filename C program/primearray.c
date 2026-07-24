#include <stdio.h>
#include <stdbool.h>
int main() {
int i,inp, j= 0, k=0,primenos[100]; 
scanf("%d", &inp);
for(i=2 ; i<inp; i++) {
    bool flag = true; 
    for(j=2 ; j < i/2 && flag; j++)
    {
    if(i % j == 0) flag = false; 
  
    } if(flag) primenos[k++]=i;
} while(k > sizeof(primenos)/sizeof(primenos[0]))
   printf("%d", primenos[k++]); 
   return 0;
}