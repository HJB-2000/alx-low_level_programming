#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
 * FUNCTION_LIKE_MACRO_H
 *
 * Description:
 *   This header file defines a function-like macro ABS(x) that computes the
 *   absolute value of a number x using the ternary conditional operator.
 */

#define ABS(x) (((x) < 0) ? (-(x)) : (x))

#endif
