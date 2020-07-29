#include "cube.hpp"
#include "colorful_output.hpp"
#include <iostream>

void Cube::color_print(char buffer) const
{
        switch(buffer)
        {
                case 'w': std::cout << BOLD(FWHT("w")); break;
                case 'o': std::cout << BOLD(FORA("o")); break;
                case 'g': std::cout << BOLD(FGRN("g")); break;
                case 'r': std::cout << BOLD(FRED("r")); break;
                case 'b': std::cout << BOLD(FBLU("b")); break;
                case 'y': std::cout << BOLD(FYEL("y")); break;
        }
}

/*Function which prints cube as cube sweep

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

(this function is complicated, its just "line by line" output, so don't try to understand it, it works)
*/
void Cube::print() const
{
	// Line №1.
	std::cout << FGRA("        # # # # #") << std::endl;

	// Line №2-4;
	for(int i = 0; i < 3; i++)
	{
		std::cout << FGRA("        #");

		for(int k = 0; k < 3; k++)
		{

			std::cout << " ";
			color_print(this->elements[0][i][k]);
		}

		std::cout << FGRA(" #") << std::endl;
	}

	// Line №5
	std::cout << FGRA("# # # # # # # # # # # # # # # # #") << std::endl;

	//Line №6-8
	for(int i = 0; i < 3; i++)
	{
		for(int k = 1; k < 5; k++)
		{
			if(k != 1)
			{
				std::cout << FGRA(" #");
			}

			else
			{
				std::cout << FGRA("#");
			}

			for(int n = 0; n < 3; n++)
			{
				std::cout << " ";
				color_print(this->elements[k][i][n]);
			}
		}

		std::cout << FGRA(" #") << std::endl;
	}

	// Line №9
	std::cout << FGRA("# # # # # # # # # # # # # # # # #") << std::endl;

	// Line №10-12;
	for(int i = 0; i < 3; i++)
	{
		std::cout << FGRA("        #");

		for(int k = 0; k < 3; k++)
		{

			std::cout << " ";
			color_print(this->elements[5][i][k]);
		}

		std::cout << FGRA(" #") << std::endl;
	}

	// Line №13.
	std::cout << FGRA("        # # # # #") << std::endl;
}
