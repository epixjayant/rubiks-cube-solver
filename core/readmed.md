### **Cube.h :**

- This represents the Cube —> How the cube is represented, What operations are possible on a cube.
- This is what a Rubik’s cube looks like in code.
- What goes inside :
  Cube Data Structure
  Face indexing
  Public methods to :
  - Rotate Faces
  - Print Cube (temporary , for debugging)
  - Access cube state
  like :
  6 Faces x 3 x 3
  Colors stored
  rotateU( ) , rotateF( ), rotateR( ), rotateU_rev( ), rotateF_rev( ), rotateR_rev( ), rotateD( ), rotateD_rev( );
  U — > Clockwise;
  U_rev —> Anti-Clockwise;

### Cube.cpp :

This files Implement all the Rotations, All internal data Manipulations

Face rotation logic,

Adjacent strip swapping

Helper functions for rotations

Example :

- Rotate face matrix clockwise
- Swap rows/columns between faces.

### Move.h
