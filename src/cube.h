#ifndef CUBE_H
#define CUBE_H

typedef struct {
    // Define the cube's data structure here
    char faces[6][3][3]; // Example: 6 faces, each with a 3x3 grid
} cube;

// Function prototypes for manipulating the cube
void initialize_cube(cube *c);
void rotate_face(cube *c, int face_index);
void print_cube(const cube *c);
int is_solved(const cube *c);

#endif // CUBE_H