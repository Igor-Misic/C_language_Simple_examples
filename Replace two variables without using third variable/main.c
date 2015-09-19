#include <stdio.h>
#include <stdlib.h>

void replaceIntVariables(int* firstValue, int* secondValue);

int main()
{
  int firstVariable = 1023;
  int secondVariable = 16;
  
  //print values of variables before replacing
  printf("firstVariable = %d ,secondVariable = %d\n", firstVariable, secondVariable);
  
  replaceIntVariables(&firstVariable, &secondVariable);
  
  //print values of variables after replacing
  printf("firstVariable = %d ,secondVariable = %d\n", firstVariable, secondVariable);
  
}

void replaceIntVariables(int* firstValue, int* secondValue)
{
  *firstValue ^= *secondValue;
  *secondValue ^= *firstValue;
  *firstValue ^= *secondValue;
}