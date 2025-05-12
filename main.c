#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void usage(char *program_name) {
    printf("Uzycie: %s <liczba1> <operacja> <liczba2>\n", program_name);
    printf("Dostepne operacje: + - / m ^\n");
    exit(1);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        usage(argv[0]);
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    char op = argv[2][0];
    int result;

    switch (op) {
        case '+':
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
            break;
        case '^':
            result = (int)pow(a, b);
            printf("%d ^ %d = %d\n", a, b, result);
        default:
            usage(argv[0]);
    }

    return 0;
}
