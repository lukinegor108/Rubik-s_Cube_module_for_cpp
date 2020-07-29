#include "cube.hpp"

//See "Rubik's Cube notation" for more info about x, y, z rotations

void Cube::rotation_xcw()
{
	this->move_Lccw();
	this->move_Mccw();
	this->move_Rcw();
}

void Cube::rotation_xccw()
{
	this->move_Lcw();
	this->move_Mcw();
	this->move_Rccw();
}

void Cube::rotation_x2()
{
	this->rotation_xcw();
	this->rotation_xcw();
}

void Cube::rotation_ycw()
{
	this->move_Ucw();
	this->move_Eccw();
	this->move_Dccw();
}

void Cube::rotation_yccw()
{
	this->move_Uccw();
	this->move_Ecw();
	this->move_Dcw();
}

void Cube::rotation_y2()
{
	this->rotation_ycw();
	this->rotation_ycw();
}

void Cube::rotation_zcw()
{
	this->move_Fcw();
	this->move_Scw();
	this->move_Bccw();
}

void Cube::rotation_zccw()
{
	this->move_Fccw();
	this->move_Sccw();
	this->move_Bcw();
}

void Cube::rotation_z2()
{
	this->rotation_zcw();
	this->rotation_zcw();
}
