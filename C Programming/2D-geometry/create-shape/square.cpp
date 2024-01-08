#include <stdio.h>
#include <math.h>

#define PI acos(-1)
#define S 10

void findPathAB(char coord_plane[S][S]);

struct Point
{
	short int x, y;

	void plotPoint(char argcoord_plane[S][S])
	{
		argcoord_plane[this->x][this->y] = '@';
		return;
	}

	void setPoint(short int argx = 0, short int argy = 0)
	{
		this -> x = argx;
		this -> y = argy;	
		return;
	}

	Point(short int argx = 0, short int argy = 0)
	{
		setPoint(argx, argy);
		return;
	}
};

void printGraph(char argcoord_plane[S][S]);
inline float degreesToRadian(float dregree);

int main (void)
{
	char coord_plane[S][S];
	struct Point A(2, 2), B(5, 2), C(5, 5), D(2, 5);

	for (short int i = 0; i < S; i++)
	{
		for (short int j = 0; j < S; j++)
		{
			coord_plane[i][j] = '.';
		}
	}

	A.plotPoint(coord_plane);
	B.plotPoint(coord_plane);
	C.plotPoint(coord_plane);
	D.plotPoint(coord_plane);

	printGraph(coord_plane);

	return 0;
}

void printGraph(char argcoord_plane[S][S])
{
	for (short int i = S - 1; i >= 0; i--)
	{
		for (short int j = 0; j < S; j++)
		{
			printf(" %c", argcoord_plane[i][j]);
		}
		printf("\n");
	}	

	return;
}

inline float degreesToRadian(float dregree)
{
	return dregree * PI/180;
}