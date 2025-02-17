#include <stdio.h>

float area (int);
float area (int,int);

// void f(int a,int b)
// {
//     cout << a+b;
// }

// void f(int x,int y)
// {
//     cout << x+y;
// }

int main()
{
    // f(10,20);
    // f(10,20); give some error in the function overloading

    int r=10, l=10, b=20;
    float A;

    A = area(r);
    printf("%f\n",A);

    A = area (l,b);
    printf("%f",A);
}

float area (int R)
{
    return 3.14*R*R;
}

float area (int L, int B)
{
    return L*B;
}
