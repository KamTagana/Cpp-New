
#include <iostream>

bool A = true;
char B = 'F';
short int C = 256;
int D = 100;
long long E = 89;
float G = 10.45;
double I = 0.015;




struct board
{
	
};

enum tictactoe{ cross, zero, empty };

int main()
{
	tictactoe X;
	X = tictactoe::cross;

	tictactoe O;
	O = tictactoe::zero;

	tictactoe E;
	E = tictactoe::empty;

	tictactoe symbol[3] = { X, O, E };
}


