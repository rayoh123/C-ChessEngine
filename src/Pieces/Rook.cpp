#include "Rook.hpp"

Rook::Rook(const char color, const Square starting_square)
	: Piece(color, starting_square)
{

}

std::vector<Square> Rook::get_legal_moves(const Board& board) const
{
	// Draw lines from rook outwards. Stop when a piece is in the way.
	const unsigned rook_col = square.col;
	const unsigned rook_row = square.row;

	for (int col = rook_col; col > -1; --col)
	{
		Piece* 
		if ()
	}
}