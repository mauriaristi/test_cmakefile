// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include "tutorialConfig.h"

#ifdef USE_MYMATH

#include "MathFunctions.h"

#else

#include <math.h>

#endif
 
int main (int argc, char *argv[])
{
  if (argc < 2)
    {
    fprintf(stdout,"%s Version %d.%d\n",
            argv[0],
            Tutorial_VERSION_MAJOR,
            Tutorial_VERSION_MINOR);
    fprintf(stdout,"Usage: %s number\n",argv[0]);
    return 1;
    }
  double inputValue = atof(argv[1]);

#ifdef USE_MYMATH
  double outputValue1 = mysqrt(inputValue);
  double outputValue2 = mylog(inputValue);
#else
  double outputValue1 = sqrt(inputValue);
  double outputValue2 = log(inputValue);
#endif
  
  
#ifdef USE_MYMATH
  fprintf(stdout,"[USING MYMATH] The square root of %g is %g\n",
          inputValue, outputValue1);
  fprintf(stdout,"[USING MYMATH] The log of %g is %g\n",
          inputValue, outputValue2);
#else
  fprintf(stdout,"[USING STD MATH] The square root of %g is %g\n",
        inputValue, outputValue1);
  fprintf(stdout,"[USING STD MATH] The log of %g is %g\n",
        inputValue, outputValue2);
#endif

  return 0;
}
