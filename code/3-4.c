#include <stdio.h>
#include <stdarg.h>

int max_of(int count, ...) {
    va_list ap;
    va_start(ap, count);
    int result = va_arg(ap, int);

   for (int i = 0; i< count-1; i++)
    {
    int current = va_arg(ap, int);
    if (current > result)
    {
        result = current;
    }
}
    va_end(ap);
    return result;
}


int main() {
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));
    return 0;
} 
