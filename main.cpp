#include "quad_equ_solver.h"
#if !defined(DEBUG)
#define test();
#endif

int main(void)
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    welcome_message();

	double a = NAN, b = NAN, c = NAN;

	test();

	int continue_flag = 1;

	while (continue_flag)
	{
        read_coefficients(&a, &b, &c);
        double x1 = NAN, x2 = NAN;
        int nRoot = solves_equations(a, b, c, &x1, &x2);
        output_equation_decisins(x1, x2, nRoot);

        continue_flag = ask_user_about_continuing_work();
	}

	return  0;
}
