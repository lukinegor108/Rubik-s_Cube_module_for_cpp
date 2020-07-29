#include <iostream>
#include "cube.hpp"

int main()
{
	Cube cube; //Making the object of Cube class

	cube.print(); // Prints cube
	std::cout << std::endl;
	
	int counter_of_repeats = 0;

	do //Turns right and than up layers
	{
		cube.perform("R U");
	
		cube.print(); // Prints cube
		std::cout << std::endl;

		counter_of_repeats++;
	}
	while(!cube.solved()); // while cube won't be solved
	
	std::cout << counter_of_repeats << std::endl; // outputing the answer

	return 0;
}
