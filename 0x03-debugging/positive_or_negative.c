#include "main.h"
/**
 * main Determine if number is positive,negative or zero.
 (*0 : is the number to be checked 
 * return 0 on sucess
  */
void positve_or_negative(int i)
{ 
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else 
{
printf("%d is %s\n", i, "zero");
}
return;


}
