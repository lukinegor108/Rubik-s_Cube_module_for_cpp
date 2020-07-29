#include "cube.hpp"

#include <string>
#include <map>


//Giving each move its id for easier and simpler working with moves.
int Cube::get_move_id(std::string move) const
{
	std::map<std::string, int> id_of_moves;

	id_of_moves["R"] = 0;
	id_of_moves["R'"] = 1;
	id_of_moves["R2"] = 2;
	id_of_moves["U"] = 3;
	id_of_moves["U'"] = 4;
	id_of_moves["U2"] = 5;
	id_of_moves["F"] = 6;
	id_of_moves["F'"] = 7;
	id_of_moves["F2"] = 8;
	id_of_moves["L"] = 9;
	id_of_moves["L'"] = 10;
	id_of_moves["L2"] = 11;
	id_of_moves["D"] = 12;
	id_of_moves["D'"] = 13;
	id_of_moves["D2"] = 14;
	id_of_moves["B"] = 15;
	id_of_moves["B'"] = 16;
	id_of_moves["B2"] = 17;
	id_of_moves["M"] = 18;
	id_of_moves["M'"] = 19;
	id_of_moves["M2"] = 20;
	id_of_moves["S"] = 21;
	id_of_moves["S'"] = 22;
	id_of_moves["S2"] = 23;
	id_of_moves["E"] = 24;
	id_of_moves["E'"] = 25;
	id_of_moves["E2"] = 26;
	id_of_moves["x"] = 27;
	id_of_moves["x'"] = 28;
	id_of_moves["x2"] = 29;
	id_of_moves["y"] = 30;
	id_of_moves["y'"] = 31;
	id_of_moves["y2"] = 32;
	id_of_moves["z"] = 33;
	id_of_moves["z'"] = 34;
	id_of_moves["z2"] = 35;
	id_of_moves["Rw"] = 36;
	id_of_moves["Rw'"] = 37;
	id_of_moves["Rw2"] = 38;
	id_of_moves["Uw"] = 39;
	id_of_moves["Uw'"] = 40;
	id_of_moves["Uw2"] = 41;
	id_of_moves["Fw"] = 42;
	id_of_moves["Fw'"] = 43;
	id_of_moves["Fw2"] = 44;
	id_of_moves["Lw"] = 45;
	id_of_moves["Lw'"] = 46;
	id_of_moves["Lw2"] = 47;
	id_of_moves["Dw"] = 48;
	id_of_moves["Dw'"] = 49;
	id_of_moves["Dw2"] = 50;
	id_of_moves["Bw"] = 51;
	id_of_moves["Bw'"] = 52;
	id_of_moves["Bw2"] = 53;

	return id_of_moves[move];
}
