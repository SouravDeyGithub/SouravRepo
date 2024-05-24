#include <stdio.h>
void main () {
int x,y;
   int *ptr;
   x=10;
   ptr = &x;
   y= *ptr;
   printf ("%d : (x) is stored in location :: %u \n", x, &x);
   printf ("%d : (*&x) is stored in location :: %u \n", *&x, &x);
   printf ("%d : (*ptr) is stored in location :: %u \n", *ptr, ptr);
   printf ("%d : (y) is stored in location :: %u \n", y, &*ptr);
   printf ("%u : (ptr = &x) is stored in location :: %u \n", ptr, &ptr);
   printf ("%d : (y) is stored in location :: %u \n", y, &y);

}
