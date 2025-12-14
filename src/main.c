#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[])
{
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <operation> <a> [b]\n", argv[0]);
        return 1;
    }

    const char *op = argv[1];
    double a = atof(argv[2]);
    double b = (argc >= 4) ? atof(argv[3]) : 0.0;
    double result = 0.0;

    if (strcmp(op, "add") == 0) {
        if (argc != 4) {
            fprintf(stderr, "Usage: %s add <a> <b>\n", argv[0]);
            return 1;
        }
        result = add(a, b);

    } else if (strcmp(op, "sub") == 0) {
        if (argc != 4) {
            fprintf(stderr, "Usage: %s sub <a> <b>\n", argv[0]);
            return 1;
        }
        result = sub(a, b);

    } else if (strcmp(op, "mul") == 0) {
        if (argc != 4) {
            fprintf(stderr, "Usage: %s mul <a> <b>\n", argv[0]);
            return 1;
        }
        result = mul(a, b);

    } else if (strcmp(op, "div") == 0) {
        if (argc != 4) {
            fprintf(stderr, "Usage: %s div <a> <b>\n", argv[0]);
            return 1;
        }
        result = division(a, b);

    } else if (strcmp(op, "car") == 0) {
        if (argc != 3) {
            fprintf(stderr, "Usage: %s car <a>\n", argv[0]);
            return 1;
        }
        result = car(a);

    } else {
        fprintf(stderr, "Unknown operation: %s\n", op);
        return 1;
    }

    printf("%f\n", result);
    return 0;
}

		
