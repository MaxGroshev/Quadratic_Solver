#pragma once
#include <windows.h>
#include <stdio.h>
#include <math.h>
#define DEBUG
#include "My_ASSERT.h"
//=======================================================================================================

/**
* \brief Is used to compare a number with zero in the function "is_zero"
*/

const double EPSILON = 1e-6;

//=======================================================================================================

///A set of possible number of solutions
 enum nRoots
 {
     INF_ROOTS = -1, ///<Indicates that the equation has infinite number of solutions
     NO_ROOTS  =  0, ///<Indicates that the equation has no roots
     ONE_ROOT  =  1, ///<Indicates that the equation has one root
     TWO_ROOTS =  2, ///<Indicates that the equation has two roots
 };

//=======================================================================================================

/**
 * Solve linear equation
 * @param[in] b, c
 * @param[out] x1
 * \return One equation's root x1
 */
int  solves_linear_equations(double b, double c, double* x1);

//-------------------------------------------------------------------------------------------------------

/**
 * Input of of the value
 * @param[out] a, b, c
 *
 * The coefficients of the quadratic equation are assigned values
 */
void read_coefficients(double* a, double* b, double* c);

//-------------------------------------------------------------------------------------------------------

/**
 * Gets the value and number of roots of the equation and outputs them to the console
 * @param[out] x1, x2, nRoots
 */
void output_equation_decisins(double x1, double x2, int nRoots);

//-------------------------------------------------------------------------------------------------------

/**
 *  Performs a check on whether the equation is square
 * @param[in] a, b, c, x1, x2
 *
 * When receiving data on the coefficient (a), the function determines the further course of the program:
 *the solution of a quadratic equation or a linear one
 */
int  solves_equations(double a, double b, double c, double* x1, double* x2);

//-------------------------------------------------------------------------------------------------------

/**
 * Solving of the quadratic equation
 * @param[in] a, b, c
 * @param[out] x1, x2
 * \return nRoots
 */
int  solves_quadratic_equations(double a, double b, double c, double* x1, double* x2);

//-------------------------------------------------------------------------------------------------------

/**
 * Greeting a user in the first iteration of the program
 */
void welcome_message();

//-------------------------------------------------------------------------------------------------------

/**
 * Reads all entered characters up to the end of line sign
 */
void skip_input_line();

//-------------------------------------------------------------------------------------------------------

/**
 * Define user's decision
 * \return
 *
 * 1 if the user has decided to continue executing the program and 0 if he has decided to end its execution
 */
int  ask_user_about_continuing_work();

//-------------------------------------------------------------------------------------------------------

/**
 * Running the test of the function  "quadratic_equation"
 */
void test();

//-------------------------------------------------------------------------------------------------------

/**
 * Compare numbers
 */
bool are_equal(double n, double k);

//-------------------------------------------------------------------------------------------------------

/**
 *Compare number with zero
 */
bool is_zero(double number);

//-------------------------------------------------------------------------------------------------------
/**
 * Test the function solves_equations
 */
int unit_tests(double a, double b, double c, int nRoots);

