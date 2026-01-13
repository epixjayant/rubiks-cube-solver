#include <iostream>
#include <array>
using namespace std;
/* We will create a face first
amd then 6 face with different predefined colors characters
and then take input value of color for each face 
Then we will solve this cube step-by-step */


 // We'll define each face as 3x3
    struct Face {
        array<array<char, 3>, 3> squares;
    };

    // The Cube will have 6 faces
    struct Cube {
        Face F_up, F_down, F_left, F_right, F_front, F_back;
    };

// Function to create a solved cube
Cube createSolvedCube() {
    Cube cube;

// Fill each face with its color
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cube.F_up.squares[i][j] = 'W';
            cube.F_down.squares[i][j] = 'Y';
            cube.F_left.squares[i][j] = 'O';
            cube.F_right.squares[i][j] = 'R';
            cube.F_front.squares[i][j] = 'G';
            cube.F_back.squares[i][j] = 'B';
        }
    }

    return cube;
}

// Display a single face
void printFace(const Face &face) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << face.squares[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    Cube myCube = createSolvedCube();
    cout << "Left Face:" << endl;
    printFace(myCube.F_left);

    cout << "Front Face:" << endl;
    printFace(myCube.F_front);

    cout << "Right Face:" << endl;
    printFace(myCube.F_right);
    return 0;
}
