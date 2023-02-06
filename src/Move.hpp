#ifndef MOVE_HPP
#define MOVE_HPP

#include "Square.hpp"

class Piece;

struct Move
{
	Piece* piece;
	Square source;
	Square destination;
	bool is_first_move_for_piece;
};

#endif