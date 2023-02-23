#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>
#include "Color.hpp"
#include "Square.hpp"

#define NUM_COLS 8
#define NUM_ROWS 8

class Piece;

class Board
{
public:
	Board();
	Board(const std::vector<Piece*> pieces, const Color color_to_move, unsigned move_number);
	const std::vector<Piece*>& get_all_pieces() const;
	bool square_empty(const Square& square) const;

private:
	std::vector<Piece*> pieces;
	Color color_to_move;
	unsigned move_number;
};

#endif