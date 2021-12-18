/*  set the  flag -lm at compile moment to include the ddl libm.so
*/

#include <stdio.h>
#include <math.h>

main()
{
  int i;
  for(i=0; i<=10; i++)
    printf("%5d:   %10f\n", i, sqrt(i));
}
