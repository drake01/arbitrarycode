/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  first test for debugging
 *
 *        Version:  1.0
 *        Created:  12/21/2011 07:16:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *        Company:
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char **argv)
{
  if (argc != 3)
    return 1;
  int a = atoi (argv[1]);
  int b = atoi (argv[2]);
  int c = a + b;
  printf ("%d\n", c);
  return 0;
}
