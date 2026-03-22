#include <stdio.h>

int call_count() {
    int static count = 0;
    return ++count;
}

int main(void) {

   printf("%d\n", call_count());
   printf("%d\n", call_count());
   printf("%d\n", call_count());

    return 0;
}
