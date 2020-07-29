# Rubik-s_Cube_module_for_cpp
Module for c++ programms, which allows to create and work with Rubik's Cube.

class Cube allows you to make the Rubik's Cube and work with it.
(there is an example of using this module, see example.cpp)

I implemented all 54 possible moves & rotations:

(to find info about Rubik's Cube notation look here: https://www.speedsolving.com/wiki/index.php/NxNxN_Notation)

moves(27):
R R' R2
U U' U2
F...
L...
B...
D...
M...
S...
E E' E2

wide moves(18):
Rw Rw' Rw2
Uw Uw' Uw2
Fw...
Lw...
Bw...
Dw..
(note that there are different notations for Rubik's Cube, 'r' represents the same as 'Rw', so "r'" == "Rw'" and etc.)

rotations(9):
x x' x2
y y' y2
z z' z2

(27 + 18 + 9 = 54)

Method perform("...") performs moves, which you send to the method(type std::string).
Sequence of moves have to meet the requirements:
1)each move is seperated from other moves by one space
2)all moves, which you can use were listed above

There is method solved() which only returns true if cube is solved, else returns false.
