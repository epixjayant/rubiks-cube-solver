# Rubik's Cube Solver

This project is a **Rubik's Cube solver** implemented primarily in **C/C++** for the core cube logic and GUI, with **Python (OpenCV)** for camera-based cube scanning. The goal is to create an **interactive, real-time assistant** that reads a scrambled cube via webcam, computes a solution, and displays or speaks the moves for the user.

---

## Project Vision
- **Core logic in C++** for performance and structure.
- **GUI in SFML** to visualize the cube in 2D/3D.
- **Camera input in Python (OpenCV)** to scan cube faces and detect colors.
- **Solver integration** (Kociemba or other algorithms) to compute optimal move sequences.
- **User assistance features**: real-time move display, speech instructions, possible 3D rotation animation.

---

## Project Structure
rubiks-cube-solver/

│
├── src/

│       ├── cube.cpp         # Cube data structure & operations (rotations, checks)

│       ├── cube.h           # Header for cube data

│       ├── solver.cpp       # Solver logic integration (e.g., Kociemba API)

│       ├── solver.h         # Header for solver functions

│       ├── gui.cpp          # SFML-based GUI rendering & animations
    
│       ├── gui.h

│       ├── main.cpp         # Entry point for full program

│
├── vision/              # Python OpenCV cube scanning

│       ├── detect.py        # Detects colors from webcam and outputs cube state

│
├── data/

│       ├── cube_state.txt   # Shared state file between Python and C++ (temp method)

│
├── Makefile / CMakeLists.txt  # Build instructions for C++ parts

├── requirements.txt     # Python dependencies (OpenCV, numpy)

├── README.md            # Project documentation (this file)


## Development Roadmap

### **Phase 1 — Planning & Core Structures**
1. **Cube Representation**  
   - Define cube in a structured format (e.g., `array<array<char,3>,3>` per face) in C++.  
   - Assign standard colors: `W` (white), `Y` (yellow), `R` (red), `O` (orange), `G` (green), `B` (blue).  
2. **Camera Input Plan**  
   - Plan Python OpenCV script to scan cube face-by-face and output a `cube_state.txt` file.  
3. **Move Functions**  
   - Plan rotations for all moves: `F, F', F2, R, R', ...`  
4. **Solver Plan**  
   - Choose solver algorithm/library and decide integration point.  
5. **GUI Plan**  
   - Decide 2D net vs. 3D view for the initial version in SFML.  
6. **Solved State Check**  
   - Plan function to check if cube is solved.

---

### **Phase 2 — Cube Structure & Input**
1. Implement `Cube` struct/class in C++.  
2. Implement Python OpenCV face scanning script:
   - Detect ROI for each sticker.
   - Convert BGR to HSV and classify colors.
   - Save colors to `cube_state.txt`.  
3. Implement C++ code to read `cube_state.txt` and populate cube state.

---

### **Phase 3 — Rotations & Solver**
1. Implement rotation functions for:
   - `F, F', R, R', U, U', L, L', D, D', B, B'`.  
   - Include both face rotation and adjacent edge updates.  
2. Integrate solver algorithm:
   - Convert cube state to solver string format.
   - Compute solution sequence.

---

### **Phase 4 — GUI & Interaction**
1. Implement SFML rendering of cube:
   - Draw each face as 3×3 colored squares.
   - Add simple animations for moves.  
2. Implement user assistance:
   - Show next move textually.
   - Add keyboard control to apply moves manually for testing.

---

### **Phase 5 — Integration & Testing**
1. Run full pipeline:
   - Python OpenCV scans cube.
   - C++ reads cube state.
   - Solver generates move sequence.
   - SFML GUI shows moves one-by-one.
2. Debug and fix rotation or display errors.

---

### **Phase 6 — Polish & Extra Features**
1. Add **speech output** for moves.
2. Optional **3D rotating cube** view in SFML.
3. Clean code, improve documentation, and prepare demo video.

---

## Upcoming Features
1. **3D Live Rotating Cube Display**
   - Implemented with SFML/OpenGL.
   - Allows user to rotate view with mouse/keyboard.
2. **Speaking Moves**
   - Text-to-Speech engine announces each move for hands-free solving.
3. **Direct Python–C++ Integration**
   - Replace file-based communication with `pybind11` for faster, real-time linking.
4. **Mobile Version**
   - Possible Android port with OpenCV and native rendering.

---

## How Contributors Should Work
- **Branches:**
  - `main` → stable, working code.
  - `dev` → integration/testing branch.
  - `feature/...` → for each specific task (e.g., `feature/gui`, `feature/rotation-F`).
- **Pull Requests:**  
  Always branch from `dev` and open PRs into `dev`, never `main` directly.
- **Code Style:**  
  Follow existing formatting, name variables clearly, and comment complex logic.

---

## Quick Workflow Diagram
Python (OpenCV Camera)
↓
cube_state.txt (temp)
↓
C++ Core Logic + SFML GUI 
↓
User sees moves / hears instructions
