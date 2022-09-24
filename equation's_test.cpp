#include "quad_equ_solver.h"
void test()
{
     FILE *testing_quad_equ = fopen("unit_test.txt", "r");
     ASSERT(testing_quad_equ != NULL)
     int passed_tests = 0;

     double a = 0;
     double b = 0;
     double c = 0;
     int nRoots = 0;
     for(int i = 0; !feof(testing_quad_equ); i++)
     {
         fscanf(testing_quad_equ, "%lg %lg %lg %d", &a, &b, &c, &nRoots );
         passed_tests += unit_tests(a, b, c, nRoots);
     }
     fclose(testing_quad_equ);

     if (passed_tests != 0)
     {
        printf("Тесты пройдены в количестве %d\n", passed_tests);
     }

     else
     {
         printf("Ни один тест не пройден\n");
     }
}

//--------------------------------------------------------------------------------------------------------

int unit_tests(double a, double b, double c, int nRoots)
{
    double x1 = 0, x2 = 0;

    if (nRoots == solves_equations(a, b, c, &x1, &x2))
    {
        if (nRoots == INF_ROOTS || nRoots == NO_ROOTS)
        {
             return 1;
        }
        else if (nRoots == ONE_ROOT)
        {
             if (is_zero(a * x2 * x2 + b * x2 + c ) || is_zero(a * x1 * x1 + b * x1 + c ))
             {
                  return 1;
             }
        }
        else if (nRoots == TWO_ROOTS)
        {
             if (is_zero(a * x2 * x2 + b * x2 + c ) || is_zero(a * x1 * x1 + b * x1 + c ))
             {
                  return 1;
             }
        }
    }
    return 0;
}
//======================================================================================================================

bool are_equal(double n, double k)
{
    return fabs(k - n) < EPSILON;
}























