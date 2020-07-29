#include "cube.hpp"
/*
R U F L B D - Right Up Front Left Back Down
cw - clockwise
ccw - counter clockwise
2 - means do twice
ex:
(note that Fcw2 = Fccw2, because of that there is only F2)

Fccw - Front layer counter clockwise(for more info search "Rubik's Cube Notation" in Google)
*/
void Cube::move_Rcw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][i][2];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][i][2] = this->elements[2][i][2];
		this->elements[2][i][2] = this->elements[5][i][2];
		this->elements[5][i][2] = this->elements[4][2 - i][0];
		this->elements[4][2 - i][0] = buffers[i];
	}

	char buffer = this->elements[3][0][0];
	this->elements[3][0][0] = this->elements[3][2][0];
	this->elements[3][2][0] = this->elements[3][2][2];
	this->elements[3][2][2] = this->elements[3][0][2];
	this->elements[3][0][2] = buffer;

	buffer = this->elements[3][0][1];
	this->elements[3][0][1] = this->elements[3][1][0];
	this->elements[3][1][0] = this->elements[3][2][1];
	this->elements[3][2][1] = this->elements[3][1][2];
	this->elements[3][1][2] = buffer;
}

void Cube::move_Rccw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][i][2];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][i][2] = this->elements[4][2 - i][0];
		this->elements[4][2 - i][0] = this->elements[5][i][2];
		this->elements[5][i][2] = this->elements[2][i][2];
		this->elements[2][i][2] = buffers[i];
	}

	char buffer = this->elements[3][0][0];
	this->elements[3][0][0] = this->elements[3][0][2];
	this->elements[3][0][2] = this->elements[3][2][2];
	this->elements[3][2][2] = this->elements[3][2][0];
	this->elements[3][2][0] = buffer;

	buffer = this->elements[3][0][1];
	this->elements[3][0][1] = this->elements[3][1][2];
	this->elements[3][1][2] = this->elements[3][2][1];
	this->elements[3][2][1] = this->elements[3][1][0];
	this->elements[3][1][0] = buffer;
}

void Cube::move_R2()
{
	this->move_Rcw();
	this->move_Rcw();
}

void Cube::move_Ucw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[2][0][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[2][0][i] = this->elements[3][0][i];
		this->elements[3][0][i] = this->elements[4][0][i];
		this->elements[4][0][i] = this->elements[1][0][i];
		this->elements[1][0][i] = buffers[i];
	}

	char buffer = this->elements[0][0][0];
	this->elements[0][0][0] = this->elements[0][2][0];
	this->elements[0][2][0] = this->elements[0][2][2];
	this->elements[0][2][2] = this->elements[0][0][2];
	this->elements[0][0][2] = buffer;

	buffer = this->elements[0][0][1];
	this->elements[0][0][1] = this->elements[0][1][0];
	this->elements[0][1][0] = this->elements[0][2][1];
	this->elements[0][2][1] = this->elements[0][1][2];
	this->elements[0][1][2] = buffer;
}

void Cube::move_Uccw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[2][0][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[2][0][i] = this->elements[1][0][i];
		this->elements[1][0][i] = this->elements[4][0][i];
		this->elements[4][0][i] = this->elements[3][0][i];
		this->elements[3][0][i] = buffers[i];
	}

	char buffer = this->elements[0][0][0];
	this->elements[0][0][0] = this->elements[0][0][2];
	this->elements[0][0][2] = this->elements[0][2][2];
	this->elements[0][2][2] = this->elements[0][2][0];
	this->elements[0][2][0] = buffer;

	buffer = this->elements[0][0][1];
	this->elements[0][0][1] = this->elements[0][1][2];
	this->elements[0][1][2] = this->elements[0][2][1];
	this->elements[0][2][1] = this->elements[0][1][0];
	this->elements[0][1][0] = buffer;
}

void Cube::move_U2()
{
	this->move_Ucw();
	this->move_Ucw();
}

void Cube::move_Fcw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][2][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][2][i] = this->elements[1][2 - i][2];
		this->elements[1][2 - i][2] = this->elements[5][0][2 - i];
		this->elements[5][0][2 - i] = this->elements[3][i][0];
		this->elements[3][i][0] = buffers[i];
	}

	char buffer = this->elements[2][0][0];
	this->elements[2][0][0] = this->elements[2][2][0];
	this->elements[2][2][0] = this->elements[2][2][2];
	this->elements[2][2][2] = this->elements[2][0][2];
	this->elements[2][0][2] = buffer;

	buffer = this->elements[2][0][1];
	this->elements[2][0][1] = this->elements[2][1][0];
	this->elements[2][1][0] = this->elements[2][2][1];
	this->elements[2][2][1] = this->elements[2][1][2];
	this->elements[2][1][2] = buffer;
}

void Cube::move_Fccw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][2][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][2][i] = this->elements[3][i][0];
		this->elements[3][i][0] = this->elements[5][0][2 - i];
		this->elements[5][0][2 - i] = this->elements[1][2 - i][2];
		this->elements[1][2 - i][2] = buffers[i];
	}

	char buffer = this->elements[2][0][0];
	this->elements[2][0][0] = this->elements[2][0][2];
	this->elements[2][0][2] = this->elements[2][2][2];
	this->elements[2][2][2] = this->elements[2][2][0];
	this->elements[2][2][0] = buffer;

	buffer = this->elements[2][0][1];
	this->elements[2][0][1] = this->elements[2][1][2];
	this->elements[2][1][2] = this->elements[2][2][1];
	this->elements[2][2][1] = this->elements[2][1][0];
	this->elements[2][1][0] = buffer;
}

void Cube::move_F2()
{
	this->move_Fcw();
	this->move_Fcw();
}

void Cube::move_Lcw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][i][0];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][i][0] = this->elements[4][2 - i][2];
		this->elements[4][2 - i][2] = this->elements[5][i][0];
		this->elements[5][i][0] = this->elements[2][i][0];
		this->elements[2][i][0] = buffers[i];
	}

	char buffer = this->elements[1][0][0];
	this->elements[1][0][0] = this->elements[1][2][0];
	this->elements[1][2][0] = this->elements[1][2][2];
	this->elements[1][2][2] = this->elements[1][0][2];
	this->elements[1][0][2] = buffer;

	buffer = this->elements[1][0][1];
	this->elements[1][0][1] = this->elements[1][1][0];
	this->elements[1][1][0] = this->elements[1][2][1];
	this->elements[1][2][1] = this->elements[1][1][2];
	this->elements[1][1][2] = buffer;
}

void Cube::move_Lccw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][i][0];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][i][0] = this->elements[2][i][0];
		this->elements[2][i][0] = this->elements[5][i][0];
		this->elements[5][i][0] = this->elements[4][2 - i][2];
		this->elements[4][2 - i][2] = buffers[i];
	}

	char buffer = this->elements[1][0][0];
	this->elements[1][0][0] = this->elements[1][0][2];
	this->elements[1][0][2] = this->elements[1][2][2];
	this->elements[1][2][2] = this->elements[1][2][0];
	this->elements[1][2][0] = buffer;

	buffer = this->elements[1][0][1];
	this->elements[1][0][1] = this->elements[1][1][2];
	this->elements[1][1][2] = this->elements[1][2][1];
	this->elements[1][2][1] = this->elements[1][1][0];
	this->elements[1][1][0] = buffer;
}

void Cube::move_L2()
{
	this->move_Lcw();
	this->move_Lcw();
}

void Cube::move_Dcw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[2][2][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[2][2][i] = this->elements[1][2][i];
		this->elements[1][2][i] = this->elements[4][2][i];
		this->elements[4][2][i] = this->elements[3][2][i];
		this->elements[3][2][i] = buffers[i];
	}

	char buffer = this->elements[5][0][0];
	this->elements[5][0][0] = this->elements[5][2][0];
	this->elements[5][2][0] = this->elements[5][2][2];
	this->elements[5][2][2] = this->elements[5][0][2];
	this->elements[5][0][2] = buffer;

	buffer = this->elements[5][0][1];
	this->elements[5][0][1] = this->elements[5][1][0];
	this->elements[5][1][0] = this->elements[5][2][1];
	this->elements[5][2][1] = this->elements[5][1][2];
	this->elements[5][1][2] = buffer;
}

void Cube::move_Dccw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[2][2][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[2][2][i] = this->elements[3][2][i];
		this->elements[3][2][i] = this->elements[4][2][i];
		this->elements[4][2][i] = this->elements[1][2][i];
		this->elements[1][2][i] = buffers[i];
	}

	char buffer = this->elements[5][0][0];
	this->elements[5][0][0] = this->elements[5][0][2];
	this->elements[5][0][2] = this->elements[5][2][2];
	this->elements[5][2][2] = this->elements[5][2][0];
	this->elements[5][2][0] = buffer;

	buffer = this->elements[5][0][1];
	this->elements[5][0][1] = this->elements[5][1][2];
	this->elements[5][1][2] = this->elements[5][2][1];
	this->elements[5][2][1] = this->elements[5][1][0];
	this->elements[5][1][0] = buffer;
}

void Cube::move_D2()
{
	this->move_Dcw();
	this->move_Dcw();
}

void Cube::move_Bcw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][0][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][0][i] = this->elements[3][i][2];
		this->elements[3][i][2] = this->elements[5][2][2 - i];
		this->elements[5][2][2 - i] = this->elements[1][2 - i][0];
		this->elements[1][2 - i][0] = buffers[i];
	}

	char buffer = this->elements[4][0][0];
	this->elements[4][0][0] = this->elements[4][2][0];
	this->elements[4][2][0] = this->elements[4][2][2];
	this->elements[4][2][2] = this->elements[4][0][2];
	this->elements[4][0][2] = buffer;

	buffer = this->elements[4][0][1];
	this->elements[4][0][1] = this->elements[4][1][0];
	this->elements[4][1][0] = this->elements[4][2][1];
	this->elements[4][2][1] = this->elements[4][1][2];
	this->elements[4][1][2] = buffer;
}

void Cube::move_Bccw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][0][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][0][i] = this->elements[1][2 - i][0];
		this->elements[1][2 - i][0] = this->elements[5][2][2 - i];
		this->elements[5][2][2 - i] = this->elements[3][i][2];
		this->elements[3][i][2] = buffers[i];
	}

	char buffer = this->elements[4][0][0];
	this->elements[4][0][0] = this->elements[4][0][2];
	this->elements[4][0][2] = this->elements[4][2][2];
	this->elements[4][2][2] = this->elements[4][2][0];
	this->elements[4][2][0] = buffer;

	buffer = this->elements[4][0][1];
	this->elements[4][0][1] = this->elements[4][1][2];
	this->elements[4][1][2] = this->elements[4][2][1];
	this->elements[4][2][1] = this->elements[4][1][0];
	this->elements[4][1][0] = buffer;
}

void Cube::move_B2()
{
	this->move_Bcw();
	this->move_Bcw();
}

void Cube::move_Mcw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][i][1];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][i][1] = this->elements[4][2 - i][1];
		this->elements[4][2 - i][1] = this->elements[5][i][1];
		this->elements[5][i][1] = this->elements[2][i][1];
		this->elements[2][i][1] = buffers[i];
	}
}

void Cube::move_Mccw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][i][1];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][i][1] = this->elements[2][i][1];
		this->elements[2][i][1] = this->elements[5][i][1];
		this->elements[5][i][1] = this->elements[4][2 - i][1];
		this->elements[4][2 - i][1] = buffers[i];
	}
}

void Cube::move_M2()
{
	this->move_Mcw();
	this->move_Mcw();
}

void Cube::move_Scw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][1][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][1][i] = this->elements[1][2 - i][1];
		this->elements[1][2 - i][1] = this->elements[5][1][2 - i];
		this->elements[5][1][2 - i] = this->elements[3][i][1];
		this->elements[3][i][1] = buffers[i];
	}
}

void Cube::move_Sccw()
{
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[0][1][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[0][1][i] = this->elements[3][i][1];
		this->elements[3][i][1] = this->elements[5][1][2 - i];
		this->elements[5][1][2 - i] = this->elements[1][2 - i][1];
		this->elements[1][2 - i][1] = buffers[i];
	}
}

void Cube::move_S2()
{
	this->move_Scw();
	this->move_Scw();
}

void Cube::move_Ecw()
{	
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[2][1][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[2][1][i] = this->elements[1][1][i];
		this->elements[1][1][i] = this->elements[4][1][i];
		this->elements[4][1][i] = this->elements[3][1][i];
		this->elements[3][1][i] = buffers[i];
	}
}

void Cube::move_Eccw()
{	
	char buffers[3];

	for(int i = 0; i < 3; i++)
	{
		buffers[i] = this->elements[2][1][i];
	}

	for(int i = 0; i < 3; i++)
	{
		this->elements[2][1][i] = this->elements[3][1][i];
		this->elements[3][1][i] = this->elements[4][1][i];
		this->elements[4][1][i] = this->elements[1][1][i];
		this->elements[1][1][i] = buffers[i];
	}
}

void Cube::move_E2()
{
	this->move_Ecw();
	this->move_Ecw();
}
