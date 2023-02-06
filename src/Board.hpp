#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>
#include "./Pieces/Piece.hpp"

#define NUM_COLS 8
#define NUM_ROWS 8

class Board
{
public:
	Board();
	Board(const std::vector<Piece> pieces, const Color& color_to_move, unsigned move_number);

private:
	std::vector<Piece> pieces;
	Color color_to_move;
	unsigned move_number;
};

#endif