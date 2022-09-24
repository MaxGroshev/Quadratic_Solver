#include "quad_equ_solver.h"

int solves_equations(double a, double b, double c, double* x1, double* x2)
{
    ASSERT(isfinite(a));
    ASSERT(isfinite(b));
    ASSERT(isfinite(c));

    ASSERT(x1 != NULL);
    ASSERT(x2 != NULL);
    ASSERT(x1 != x2);

	if (is_zero(a))
	{
        return solves_linear_equations(b, c, x1);
	}
    return solves_quadratic_equations(a, b, c, x1, x2);
}

//--------------------------------------------------------------------

int solves_linear_equations(double b, double c, double* x1)
{
    if (is_zero(b))
    {
        if(!is_zero(c))
        {
            return NO_ROOTS;
        }
        return INF_ROOTS;
    }
    else
    {
        *x1 = -c / b;
        return ONE_ROOT;
    }
 }

//--------------------------------------------------------------------

int solves_quadratic_equations(double a, double b, double c, double* x1, double* x2)
{
    ASSERT(!is_zero(a));
    ASSERT(x1 != NULL);
    ASSERT(x2 != NULL);

    double d = b * b - 4 * a * c;
    if (is_zero(d))
    {
        double sqrt_d = sqrt(d);
        *x2 = (-b + sqrt_d) / (2 * a);
        return ONE_ROOT;
    }
    else if (d > 0)
    {
        double sqrt_d = sqrt(d);
        *x1 = (-b + sqrt_d) / (2 * a);
        *x2 = (-b - sqrt_d) / (2 * a);
        return TWO_ROOTS;
    }
        return NO_ROOTS;
}
 bool is_zero(double number)
 {
        return fabs(number) < EPSILON;
 }
