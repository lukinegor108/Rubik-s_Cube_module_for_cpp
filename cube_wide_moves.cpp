#include "cube.hpp"

//Look for more info in Google by searching "Rubik's Cube Notation"
//Note that the are different notations for wide moves(small 'r' is the same move, which stays for 'Rw'(short for R wide))

void Cube::move_Rwcw()
{
	this->move_Lcw();
	this->rotation_xcw();
}

void Cube::move_Rwccw()
{	
	this->move_Lccw();
	this->rotation_xccw();
}

void Cube::move_Rw2()
{
	this->move_L2();
	this->rotation_x2();
}

void Cube::move_Uwcw()
{
	this->move_Dcw();
	this->rotation_ycw();
}

void Cube::move_Uwccw()
{
	this->move_Dccw();
	this->rotation_yccw();
}

void Cube::move_Uw2()
{
	this->move_D2();
	this->rotation_y2();
}

void Cube::move_Fwcw()
{
	this->move_Bcw();
	this->rotation_zcw();
}

void Cube::move_Fwccw()
{
	this->move_Bccw();
	this->rotation_zccw();
}

void Cube::move_Fw2()
{
	this->move_Fwcw();
	this->move_Fwcw();
}

void Cube::move_Lwcw()
{
	this->move_Rcw();
	this->rotation_xccw();
}

void Cube::move_Lwccw()
{
	this->move_Rccw();
	this->rotation_xcw();
}

void Cube::move_Lw2()
{
	this->move_R2();
	this->rotation_x2();
}

void Cube::move_Dwcw()
{
	this->move_Ucw();
	this->rotation_yccw();
}

void Cube::move_Dwccw()
{
	this->move_Uccw();
	this->rotation_ycw();
}

void Cube::move_Dw2()
{
	this->move_U2();
	this->rotation_y2();
}

void Cube::move_Bwcw()
{
	this->move_Fcw();
	this->rotation_zccw();
}

void Cube::move_Bwccw()
{
	this->move_Fccw();
	this->rotation_zcw();
}

void Cube::move_Bw2()
{
	this->move_F2();
	this->rotation_z2();
}
