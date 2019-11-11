#ifndef PUZZLES_H
#define PUZZLES_H

struct OppPair
{
	int side1 = 0;
	int side2 = 0;
	bool marked = false;
	OppPair() {}
	OppPair(int side1, int side2) {
		this->side1 = side1;
		this->side2 = side2;
	}
};

struct Cube
{
	OppPair oppPair1;
	OppPair oppPair2;
	OppPair oppPair3;
	Cube(){}
	Cube(OppPair oppPair1, OppPair oppPair2, OppPair oppPair3) {
		this->oppPair1 = oppPair1;
		this->oppPair2 = oppPair2;
		this->oppPair3 = oppPair3;
	}
};

class Puzzle1
{
public:
	Cube cubes[8];
	Puzzle1() {
		cubes[0] = Cube(OppPair(1, 8), OppPair(8, 8), OppPair(6, 7));
		cubes[1] = Cube(OppPair(4, 8), OppPair(1, 8), OppPair(1, 3));
		cubes[2] = Cube(OppPair(6, 7), OppPair(2, 8), OppPair(3, 3));
		cubes[3] = Cube(OppPair(5, 7), OppPair(3, 8), OppPair(2, 5));
		cubes[4] = Cube(OppPair(4, 7), OppPair(3, 7), OppPair(1, 7));
		cubes[5] = Cube(OppPair(5, 5), OppPair(2, 2), OppPair(2, 3));
		cubes[6] = Cube(OppPair(4, 5), OppPair(1, 4), OppPair(5, 6));
		cubes[7] = Cube(OppPair(7, 7), OppPair(1, 6), OppPair(4, 6));
	}
};

class Puzzle2
{
public:
	Cube cubes[8];
	Puzzle2() {
		cubes[0] = Cube(OppPair(1, 8), OppPair(8, 8), OppPair(6, 8));
		cubes[1] = Cube(OppPair(4, 8), OppPair(8, 8), OppPair(1, 3));
		cubes[2] = Cube(OppPair(6, 7), OppPair(8, 8), OppPair(3, 3));
		cubes[3] = Cube(OppPair(5, 7), OppPair(8, 8), OppPair(2, 5));
		cubes[4] = Cube(OppPair(4, 8), OppPair(3, 7), OppPair(1, 7));
		cubes[5] = Cube(OppPair(5, 5), OppPair(2, 2), OppPair(2, 3));
		cubes[6] = Cube(OppPair(4, 5), OppPair(1, 4), OppPair(5, 8));
		cubes[7] = Cube(OppPair(7, 8), OppPair(1, 6), OppPair(4, 8));
	}
};

class Puzzle3
{
public:
	Cube cubes[8];
	Puzzle3(){
		cubes[0] = Cube(OppPair(1, 8), OppPair(8, 8), OppPair(1, 6));
		cubes[1] = Cube(OppPair(1, 2), OppPair(1, 8), OppPair(1, 3));
		cubes[2] = Cube(OppPair(6, 7), OppPair(2, 8), OppPair(1, 1));
		cubes[3] = Cube(OppPair(5, 7), OppPair(3, 8), OppPair(2, 5));
		cubes[4] = Cube(OppPair(4, 7), OppPair(3, 7), OppPair(1, 7));
		cubes[5] = Cube(OppPair(5, 5), OppPair(1, 1), OppPair(2, 3));
		cubes[6] = Cube(OppPair(1, 4), OppPair(1, 4), OppPair(5, 6));
		cubes[7] = Cube(OppPair(7, 7), OppPair(1, 1), OppPair(4, 6));
	}
};

class Puzzle4
{
public:
	Cube cubes[8];
	Puzzle4() {
		cubes[0] = Cube(OppPair(1, 8), OppPair(8, 8), OppPair(5, 8));
		cubes[1] = Cube(OppPair(4, 5), OppPair(1, 8), OppPair(1, 3));
		cubes[2] = Cube(OppPair(6, 7), OppPair(2, 8), OppPair(3, 5));
		cubes[3] = Cube(OppPair(5, 7), OppPair(3, 8), OppPair(2, 6));
		cubes[4] = Cube(OppPair(4, 7), OppPair(3, 7), OppPair(1, 6));
		cubes[5] = Cube(OppPair(5, 5), OppPair(2, 2), OppPair(2, 3));
		cubes[6] = Cube(OppPair(4, 5), OppPair(1, 4), OppPair(5, 6));
		cubes[7] = Cube(OppPair(7, 7), OppPair(1, 6), OppPair(4, 6));
	}
};
#endif // !PUZZLES_H

