#ifndef ROOK_HPP
#define ROOK_HPP

#include "Piece.hpp"

class Rook : public Piece 
{
public:
	Rook(const char color, const Square starting_square);
	std::vector<Move> get_legal_moves(const Board& board) const;
};

#endif