//This file allows to type a command like this: 
//cube.perform("R U Fw' Rw2 x y L'");

#include "cube.hpp"

#include <string>
#include <map>

//Deletes a first move (chars before first space and the space).
//ex: cut("R Uw L F' D2") -> "Uw L F' D2".
void cut(std::string &moves)
{
	size_t position;

	if( (position = moves.find_first_of(" ")) != std::string::npos)
	{
		moves.erase(moves.begin(), moves.begin() + position + 1);
	}

	else
	{
		moves.clear();
	}
}

//Returns first move
std::string get_move(std::string moves)
{
	 return moves.substr(0, moves.find_first_of(" "));
}

//Gets a sequence of moves in a string and performs them.
void Cube::perform(std::string moves)
{
	std::string move;

	while(moves != "")
	{
		move = get_move(moves);

		switch(get_move_id(move))
		{
			case 0: this->move_Rcw(); break;
			case 1: this->move_Rccw(); break;
			case 2: this->move_R2(); break;
			case 3: this->move_Ucw(); break;
			case 4: this->move_Uccw(); break;
			case 5: this->move_U2(); break;
			case 6: this->move_Fcw(); break;
			case 7: this->move_Fccw(); break;
			case 8: this->move_F2(); break;
			case 9: this->move_Lcw(); break;
			case 10: this->move_Lccw(); break;
			case 11: this->move_L2(); break;
			case 12: this->move_Dcw(); break;
			case 13: this->move_Dccw(); break;
			case 14: this->move_D2(); break;
			case 15: this->move_Bcw(); break;
			case 16: this->move_Bccw(); break;
			case 17: this->move_B2(); break;
			case 18: this->move_Mcw(); break;
			case 19: this->move_Mccw(); break;
			case 20: this->move_M2(); break;
			case 21: this->move_Scw(); break;
			case 22: this->move_Sccw(); break;
			case 23: this->move_S2(); break;
			case 24: this->move_Ecw(); break;
			case 25: this->move_Eccw(); break;
			case 26: this->move_E2(); break;
			case 27: this->rotation_xcw(); break;
			case 28: this->rotation_xccw(); break;
			case 29: this->rotation_x2(); break;
			case 30: this->rotation_ycw(); break;
			case 31: this->rotation_yccw(); break;
			case 32: this->rotation_y2(); break;
			case 33: this->rotation_zcw(); break;
			case 34: this->rotation_zccw(); break;
			case 35: this->rotation_z2(); break;
			case 36: this->move_Rwcw(); break;
			case 37: this->move_Rwccw(); break;
			case 38: this->move_Rw2(); break;
			case 39: this->move_Uwcw(); break;
			case 40: this->move_Uwccw(); break;
			case 41: this->move_Uw2(); break;
			case 42: this->move_Fwcw(); break;
			case 43: this->move_Fwccw(); break;
			case 44: this->move_Fw2(); break;
			case 45: this->move_Lwcw(); break;
			case 46: this->move_Lwccw(); break;
			case 47: this->move_Lw2(); break;
			case 48: this->move_Dwcw(); break;
			case 49: this->move_Dwccw(); break;
			case 50: this->move_Dw2(); break;
			case 51: this->move_Bwcw(); break;
			case 52: this->move_Bwccw(); break;
			case 53: this->move_Bw2(); break;
		}
		
		cut(moves);
	}
}
