#include <iostream>
#include <array>
using namespace std;

// We'll define each face as 3x3
struct Face {
    array<array<char, 3>, 3> squares;
};

// The Cube will have 6 faces
struct Cube {
    Face up, down, left, right, front, back;
};

// Function to create a solved cube
Cube createSolvedCube() {
    Cube cube;

    // Fill each face with its color
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cube.up.squares[i][j] = 'W';
            cube.down.squares[i][j] = 'Y';
            cube.left.squares[i][j] = 'O';
            cube.right.squares[i][j] = 'R';
            cube.front.squares[i][j] = 'G';
            cube.back.squares[i][j] = 'B';
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

    cout << "Front Face:" << endl;
    printFace(myCube.front);

    return 0;
}
