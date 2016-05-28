#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
#include "project_h.h"

using namespace std;

int main() {

    srand(unsigned(time(NULL)));

    int const size = 10;

    int a_int[size];
    for (int i = 0; i < size; i++)
        a_int[i] = rand() % 10;

    printf("Do \n");
    print(a_int, size);
    binary_sort(a_int, size);//
    printf("Posle \n");
    print(a_int, size);

    double a_double[size];
    for (int i = 0; i < size; i++)
        a_double[i] = (double) rand() / RAND_MAX * 7 + 1;

    printf("Do \n");
    print(a_double, size);
    binary_sort(a_double, size);
    printf("Posle \n");
    print(a_double, size);

    char *a_char = rand_char_array(size);

    printf("Do \n");
    print(a_char, size);
    binary_sort(a_char, size);
    printf("Posle \n");
    print(a_char, size);

    char **a_string = rand_string_array(size);

    printf("Do \n");
    print(a_string, size);
    binary_sort(a_string, size);
    printf("Posle \n");
    print(a_string, size);

    _getch();
    return 0;
}