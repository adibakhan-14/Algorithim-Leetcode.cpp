#include<iostream>
#include<string>
#include<cmath>
#include <stdio.h>
#include <string.h>

using namespace std;
int main ()
{
  char str[] ="I want to learn everything related to pass the test";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }
  return 0;
}

