#include <stdlib.h>
#include <stdio.h>
int main(){
void *p, *q, *r, *s;
p = malloc(12);
q = malloc(12);
free(p);
r = malloc(12);
s = malloc(12);
printf("%p %p %p %p\n",p,q,r,s);
return 0;
}
