#include <stdio.h>
#include <stdarg.h>

void my_sum (char type, int cnt, ...) {
    va_list ap;
    va_start(ap, cnt);

    if (type == 'D')
    {
        int result = 0;
        for (int i = 0; i < cnt; i++)
        {
            result += va_arg(ap,int);
        }
        printf("%d\n", result);
    }
    else if (type == 'C')
    {
        for (int i = 0; i < cnt; i++)
        {
            printf("%c", (char)va_arg(ap, int));
        }
        printf("\n");
    }
    else if (type == 'S')
    {
        for (int i = 0; i < cnt; i++) 
        {
            printf("%s%s", va_arg(ap, char*), (i < cnt - 1) ? " " : "");
        }
        printf("\n");
    }
    va_end(ap);
}

int main() {

    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C','N','U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
