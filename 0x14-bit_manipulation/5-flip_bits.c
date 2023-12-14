#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m
 * @n: first decimal number
 * @m: second decimal number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int xor_result = n ^ m;
  unsigned int count = 0;

  /* Count the number of set bits in the XOR result */
  while (xor_result > 0)
  {
     /* Check the least significant bit */
    count += xor_result & 1;
    /* Shift to the right to check the next bit */
    xor_result >>= 1;
  }

  return (count);
}
