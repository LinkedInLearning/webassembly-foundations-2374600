#include <stdio.h>
#include <emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    int fibonacci(int n) {
        if (n <= 1) {
            return n;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Benutzung: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    printf("Fibonacci Zahl an der Stelle %d ist %d\n", n, fibonacci(n));
    return 0;
}
}

