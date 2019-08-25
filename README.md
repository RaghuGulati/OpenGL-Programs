# OpenGL-Programs
This contains various graphics programs made using OpenGL glut with C++.

# Install OpenGL
For installing OpenGL on ubuntu, just execute the following command (like installing any other thing) in terminal:

		sudo apt-get install freeglut3-dev

# Programs Compilation and Execution
Write the OpenGL program with GLUT in C/C++ and compile them using gcc or g++ compiler. You can take example from this repository.

g++ filename.cpp -lGL -lGLU -lglut -lm -o exec-filename  // To compile .cpp prg with g++

gcc filename.cpp -lGL -lGLU -lglut -lm -o exec-filename  // To compile .c prg with gcc

To execute the program, type command:
		./exec-filename
