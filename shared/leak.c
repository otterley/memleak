#include <stdlib.h>
#include <stdio.h>
#define MALLOC_SIZE 1048576

int main() {
    void *memp;
    for (;;) {
        if (!malloc(MALLOC_SIZE)) {
          perror("malloc");
        }
    }
}
