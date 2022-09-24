#include "quad_equ_solver.h"

void welcome_message()
{
    printf("������ ����. ��� ������� ������ ���������� ���������.\n");
	printf("������� �������� ��� a, b, c � ��������� ����  ax^2 + bx + c = 0\n");
}

//--------------------------------------------------------------------

 void read_coefficients(double* a, double* b, double* c)
{
    while(scanf("%lf %lf %lf", a, b, c) != 3)
    {
        printf("������ �����, ������� �������� ��������.");
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
    printf("������� �� ������� � ������������.\n");
    printf("������ ����������? �������� ���� �� ���������:\n");
    printf("������� ������� (Enter), ����� ����������. ������� ����� ������ �������, ����� �����.\n");
    skip_input_line();

    int ch = getchar();
    if(ch == '\n')
    {
        printf("������� ����������� ��� ���������\n");
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
            printf("����������� ���������� ������\n");
            break;

        case NO_ROOTS:
            printf("��� ������\n");
            break;

        case ONE_ROOT:
            printf("X=%.2lf\n", x1);
            break;

        case TWO_ROOTS:
            printf("X1 = %.2lf; X2 = %.2lf\n", x1, x2);
            break;

        default:
            ASSERT("������ � ������ ���������");
    }
}
