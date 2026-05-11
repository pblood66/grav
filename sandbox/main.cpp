#include <stdio.h>
#include <grav/core.hpp>

int main() {

    grav::Vec3 *test = new grav::Vec3(); 

    printf("test: %f, %f, %f", test->x, test->y, test->z);

    printf("Hello World\n");

    free(test);

    return 0;
}