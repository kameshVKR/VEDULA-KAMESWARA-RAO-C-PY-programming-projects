#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a, b, res;
    char op;
    if (argc == 4) {
        a = atof(argv[1]);
        op = argv[2][0];
        b = atof(argv[3]);
    } else {
        printf("Simple calculator\n");
        printf("Enter expression (e.g. 3.5 + 4.2) or type: a op b\n");
        if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
            fprintf(stderr, "Invalid input\n");
            return 1;
        }
    }
    switch (op) {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/':
            if (b == 0) { fprintf(stderr, "Division by zero\n"); return 1; }
            res = a / b; break;
        default:
            fprintf(stderr, "Unsupported operator: %c\n", op);
            return 1;
    }
    printf("%g %c %g = %g\n", a, op, b, res);
    return 0;
}
