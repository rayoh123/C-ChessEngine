#ifndef ROOK_HPP
#define ROOK_HPP

#include "Piece.hpp"

class Rook : Piece {
	Rook(const char color, const Square starting_square);
	std::vector<Square> get_legal_moves(const Board& board) const;
};

#endif