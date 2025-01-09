#include <stdio.h>
#include "cube.h"
#include "solver.h"

int main()
{
    cube c;
    // Initialize the cube (this function should be defined in cube.c)
    initialize_cube(&c);

    // Call solver functions to solve the cube
    first_layer_cross(&c);
    first_layer_corners(&c);

    // Print the solved state of the cube (this function should be defined in cube.c)
    print_cube(&c);

    return 0;
}