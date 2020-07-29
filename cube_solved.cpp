#include "cube.hpp"

//If cube is solved returns true, else returns false.

bool Cube::solved() const
{
	for(int i = 0; i < 6; i++)
	{
		for(int k = 0; k < 3; k++)
		{
			for(int n = 0; n < 3; n++)
			{
				if(this->elements[i][k][n] != this->elements[i][0][0])
				{
					return false;
				}
			}
		}
	}

	return true;
}

