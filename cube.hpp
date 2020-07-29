#ifndef CUBE
#define CUBE

#include <string>

class Cube
{

private:
	
	char elements[6][3][3] = {'N'};

	char colours[6] = {'w', 'o', 'g', 'r', 'b', 'y'};

	void color_print(char buffer) const; // cube_print.cpp
	
	int get_move_id(std::string move) const; // cube_get_move_id.cpp
public:

	Cube(); // cube_constructor.cpp

	void print() const; // cube_print.cpp

	bool solved() const; // cube_solved.cpp

	void perform(std::string moves); //cube_move_perform.cpp

	void move_Rcw(); //cube_moves.cpp
	void move_Rccw();
	void move_R2();

	void move_Ucw();
	void move_Uccw();
	void move_U2();

	void move_Fcw();
	void move_Fccw();
	void move_F2();

	void move_Lcw();
	void move_Lccw();
	void move_L2();

	void move_Dcw();
	void move_Dccw();
	void move_D2();

	void move_Bcw();
	void move_Bccw();
	void move_B2();

	void move_Mcw();
	void move_Mccw();
	void move_M2();

	void move_Scw();
	void move_Sccw();
	void move_S2();

	void move_Ecw();
	void move_Eccw();
	void move_E2();

	void rotation_xcw(); //cube_rotations.cpp
	void rotation_xccw();
	void rotation_x2();
	
	void rotation_ycw();
	void rotation_yccw();
	void rotation_y2();

	void rotation_zcw();
	void rotation_zccw();
	void rotation_z2();

	void move_Rwcw(); //cube_wide_moves.cpp
	void move_Rwccw();
	void move_Rw2();

	void move_Uwcw();
	void move_Uwccw();
	void move_Uw2();

	void move_Fwcw();
	void move_Fwccw();
	void move_Fw2();

	void move_Lwcw();
	void move_Lwccw();
	void move_Lw2();

	void move_Dwcw();
	void move_Dwccw();
	void move_Dw2();

	void move_Bwcw();
	void move_Bwccw();
	void move_Bw2();
};

#endif
