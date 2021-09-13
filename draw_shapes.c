#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}
//Prints an arrow of size of a triangle and square together.
void print_varrow(int leftCol, int size)
{
  int i = leftCol;
  int j = size;
  print_triangle(i, j);
  print_square(i*2,j);
}
//Prints an arrow of a specified length of wing.
void print_harrow(int size)
{
  int i,j,k;
    for (i = -size; i <= size; i++)
      {
	k = i;
	if(k < 0 )
	  {
	    k = k * -1;
	  }
	for (j = 0; j <= size; ++j)
	  {
	    if (j < k)
	      {
		printf("  "); //two spaces
	      }
	    else
	      {
		putchar('*');
	      }
	  }
	putchar('\n');
      }
}
// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

