#include "holberton.h"

/**
 * 
 * 
 * 
 */

int _atoi(char *s)
{
  int num = 0;
  char digit;
  while ((digit = *s++) != '\0') 
  {
    if (digit < '0' && digit > '9') {
      return num; 
    }
    num *= 10;
    num +=  digit - '0';
  }
  return num;
}
