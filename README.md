# ft_sqrt

Welcome to the `ft_sqrt` repository, which hosts a custom implementation of the square root function. The `ft_sqrt` function is designed to find the square root of a non-negative integer `nb` if it is a perfect square, otherwise, it returns 0. This implementation highlights a methodical approach to solving the problem of square root calculation without the use of standard math libraries.

## Function Overview

The square root of a number is a value that, when multiplied by itself, gives the original number. Finding the square root of non-perfect squares without floating-point arithmetic presents a unique challenge. This function efficiently addresses the problem for integers, returning the square root for perfect squares and 0 for others.

### Function Prototype

```c
int ft_sqrt(int nb);
