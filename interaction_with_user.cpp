#include "quad_equ_solver.h"

void welcome_message()
{
    printf("Добрый день. Эта функция решает квадратные уравнения.\n");
	printf("Введите значения для a, b, c в уравнение вида  ax^2 + bx + c = 0\n");
}

//--------------------------------------------------------------------

 void read_coefficients(double* a, double* b, double* c)
{
    while(scanf("%lf %lf %lf", a, b, c) != 3)
    {
        printf("Ошибка ввода, введите числовое значение.");
        skip_input_line();
    }
}

//--------------------------------------------------------------------

 void skip_input_line()
{
    while (getchar() != '\n');
}

//--------------------------------------------------------------------

int ask_user_about_continuing_work()
{
    printf("Спасибо за участие в демонстрации.\n");
    printf("Хотите продолжить? Выберите один из вариантов:\n");
    printf("Нажмите клавишу (Enter), чтобы продолжить. Нажмите любую другую клавишу, чтобы выйти.\n");
    skip_input_line();

    int ch = getchar();
    if(ch == '\n')
    {
        printf("Введите коэффиценты для уравнения\n");
        return 1;
    }
    return 0;
}

//--------------------------------------------------------------------

void output_equation_decisins(double x1, double x2, int nRoot)
{
    switch (nRoot)
    {
        case INF_ROOTS:
            printf("Бесконечное количество корней\n");
            break;

        case NO_ROOTS:
            printf("Нет корней\n");
            break;

        case ONE_ROOT:
            printf("X=%.2lf\n", x1);
            break;

        case TWO_ROOTS:
            printf("X1 = %.2lf; X2 = %.2lf\n", x1, x2);
            break;

        default:
            ASSERT("Ошибка в работе программы");
    }
}
