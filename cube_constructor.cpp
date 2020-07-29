#include "cube.hpp"

/*
Creats the array [6][3][3], which represents the Rubik's Cube, colors its elements the standard way(see cube below)
U-layer is [0][x][y]
L-layer is [1][x][y]
F-layer is [2][x][y]
R-layer is [3][x][y]
B-layer is [4][x][y]
D-layer is [5][x][y]



U is short for Up
L is short for Left
...

	# # # # #
        # w w w #
        # w w w #
        # w w w # 
# # # # # # # # # # # # # # # # #
# o o o # g g g # r r r # b b b #
# o o o # g g g # r r r # b b b #
# o o o # g g g # r r r # b b b #
# # # # # # # # # # # # # # # # #
        # y y y #
        # y y y #
        # y y y #
        # # # # #

w is short for white
o is short for orange
g is short for green
r is shrot for red
b is short for blue
y is short for yellow
*/
Cube::Cube()
{
	for(int i = 0; i < 6; i++)
	{
		for(int n = 0; n < 3; n++)
		{
			for(int k = 0; k < 3; k++)
			{
				this->elements[i][n][k] = this->colours[i];
			}
		}
	}
}
