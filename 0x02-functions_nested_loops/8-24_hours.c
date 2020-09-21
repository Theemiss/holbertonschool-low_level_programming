#include "holberton.h"



void jack_bauer(void)
{
  int i, j, k, y, m, t;

  for (i = 0; i < 24 ;i++)
    {
      k = i / 10;
      y = i % 10;
      for (j = 0; j < 60;j++)
	{
	 m = j / 10;
			t = j % 10;
			_putchar('0' + k);
			_putchar('0' + y);
			_putchar(':');
			_putchar('0' + m);
			_putchar('0' + t);
			_putchar('\n');
		}
	}
    }
