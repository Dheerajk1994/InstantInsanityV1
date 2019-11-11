#include <iostream>
#include <vector>
#include "Puzzles.h"

bool solvePuzzle(std::vector<Cube>& cubeVector, std::vector<int>& colorCountVector, int currentCube, std::vector<OppPair>& solutionPairs) {
	if (currentCube >= cubeVector.size()) {
		return true;
	}
	Cube& cube = cubeVector.at(currentCube);
	if (!cube.oppPair1.marked) {
		if (colorCountVector.at(cube.oppPair1.side1 - 1) < 2 && colorCountVector.at(cube.oppPair1.side2 - 1) < 2) {
			colorCountVector.at(cube.oppPair1.side1 - 1) += 1;
			colorCountVector.at(cube.oppPair1.side2 - 1) += 1;
			cube.oppPair1.marked = true;
			if (colorCountVector.at(cube.oppPair1.side1 - 1) <= 2 && colorCountVector.at(cube.oppPair1.side2 - 1) <= 2 &&
				solvePuzzle(cubeVector, colorCountVector, currentCube + 1, solutionPairs)) {
				solutionPairs.at(currentCube) = cube.oppPair1;
				return true;
			}
			cube.oppPair1.marked = false;
			colorCountVector.at(cube.oppPair1.side1 - 1) -= 1;
			colorCountVector.at(cube.oppPair1.side2 - 1) -= 1;
		}
	}
	if (!cube.oppPair2.marked) {
		if (colorCountVector.at(cube.oppPair2.side1 - 1) < 2 && colorCountVector.at(cube.oppPair2.side2 - 1) < 2) {
			colorCountVector.at(cube.oppPair2.side1 - 1) += 1;
			colorCountVector.at(cube.oppPair2.side2 - 1) += 1;
			cube.oppPair2.marked = true;
			if (colorCountVector.at(cube.oppPair2.side1 - 1) <= 2 && colorCountVector.at(cube.oppPair2.side2 - 1) <= 2 &&
				solvePuzzle(cubeVector, colorCountVector, currentCube + 1, solutionPairs)) {
				solutionPairs.at(currentCube) = cube.oppPair2;
				return true;
			}
			cube.oppPair2.marked = false;
			colorCountVector.at(cube.oppPair2.side1 - 1) -= 1;
			colorCountVector.at(cube.oppPair2.side2 - 1) -= 1;
		}
	}
	if (!cube.oppPair2.marked) {
		if (colorCountVector.at(cube.oppPair3.side1 - 1) < 2 && colorCountVector.at(cube.oppPair3.side2 - 1) < 2) {
			colorCountVector.at(cube.oppPair3.side1 - 1) += 1;
			colorCountVector.at(cube.oppPair3.side2 - 1) += 1;
			cube.oppPair3.marked = true;
			if (colorCountVector.at(cube.oppPair3.side1 - 1) <= 2 && colorCountVector.at(cube.oppPair3.side2 - 1) <= 2 &&
				solvePuzzle(cubeVector, colorCountVector, currentCube + 1, solutionPairs)) {
				solutionPairs.at(currentCube) = cube.oppPair3;
				return true;
			}
			cube.oppPair3.marked = false;
			colorCountVector.at(cube.oppPair3.side1 - 1) -= 1;
			colorCountVector.at(cube.oppPair3.side2 - 1) -= 1;
		}
	}
	return false;
}



int main(int argc, char* argv[]) {
	std::vector<Cube> cubeVector;
	cubeVector.reserve(8);

	Puzzle4 puzzle;
	cubeVector.emplace_back(puzzle.cubes[0]);
	cubeVector.emplace_back(puzzle.cubes[1]);
	cubeVector.emplace_back(puzzle.cubes[2]);
	cubeVector.emplace_back(puzzle.cubes[3]);
	cubeVector.emplace_back(puzzle.cubes[4]);
	cubeVector.emplace_back(puzzle.cubes[5]);
	cubeVector.emplace_back(puzzle.cubes[6]);
	cubeVector.emplace_back(puzzle.cubes[7]);

	std::vector<int> colorCount1Vector(8, 0);
	std::vector<int> colorCount2Vector(8, 0);
	
	std::vector<OppPair> solution1Pairs(cubeVector.size());
	std::vector<OppPair> solution2Pairs(cubeVector.size());

	std::cout << solvePuzzle(cubeVector, colorCount1Vector, 0, solution1Pairs) << std::endl;
	std::cout << solvePuzzle(cubeVector, colorCount2Vector, 0, solution2Pairs) << std::endl;

	for (int i = 0; i < solution1Pairs.size(); ++i) {
		std::cout << solution1Pairs.at(i).side1 << " " << solution1Pairs.at(i).side2 << " : " <<
			         solution2Pairs.at(i).side1 << " " << solution2Pairs.at(i).side2 << std::endl;
	}

	std::cout<<"\n\n";
	system("PAUSE");
	return 0;
}