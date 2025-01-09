# Rubik's Cube Solver

This project is a Rubik's Cube solver implemented in C. It provides functions to manipulate the cube and solve it using various algorithms.

## Project Structure

```
rubiks-cube-solver
├── src
│   ├── solver.c       # Implementation of solving functions
│   ├── solver.h       # Header file for solver functions
│   ├── cube.c         # Implementation of cube data structure and operations
│   ├── cube.h         # Header file for cube data structure
│   └── main.c         # Entry point of the application
├── Makefile            # Build instructions
└── README.md           # Project documentation
```

## Building the Project

To build the project, navigate to the project directory and run:

```
make
```

This will compile the source files and create an executable.

## Running the Solver

After building the project, you can run the solver with the following command:

```
./rubiks-cube-solver
```

## Usage

The solver initializes a Rubik's Cube and applies algorithms to solve it. You can modify the source code to implement additional features or algorithms.

## Contributing

Feel free to contribute to this project by submitting issues or pull requests. Your contributions are welcome!


---------------------------------------------------------------------------------------------------------------------------------------------------------------

# project plan
### Day 1
1. plan to implement the cube data structure means to define the cube in a 3D array.   
2. plan to read the unsolved Rubik's cube from the camera, and store it in the cube data structure.  
3. plan to implement the functions to rotate the cube for each move like F,F',R,R',U,U',L,L',D,D',B,B'.  
4. plan to find the formula to solve the cube using the above moves. 
5. plan how will the moves of the created formulae will shown real time on display to assist the user to solve the rubik's cube. [ How GUI specific feature UI/UX will be implemented ].
6. plan to check if the cube is solved or not. 

### Day 2
1. implement the cube data structure in C : write the main function, and define the array,  
2. and define the functions to take the reading from the camera and store it in the array.  
3. implement the functions to rotate the cube for each move like F,F',R,R',U

### Day 3
1. Write the algorithm to find the formulae to solve the cube.  
2. write the code to design UI/UX and GUI related things. Assist the user to live interactively solve the Rubik's cube.  
3. implement the code to check if the cube is solved or not.

### Day 4
1. compile and Debug
2. run the program and test it.
3. fix the bugs and errors.


### Day 5

### Day 6

--------------------------------------------------------------------------------------------------------------------------------------------------------------  
# Upcoming Features
1. ##### 3D live rotating cube display
2. ##### speaking moves for the formula

