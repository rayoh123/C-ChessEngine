#include "Rook.hpp"

Rook::Rook(const char color, const Square starting_square)
	: Piece(color, starting_square)
{

}

std::vector<Move> Rook::get_legal_moves(const Board& board) const
{
	// Draw lines from rook outwards. Stop when a piece is in the way.
	const unsigned rook_col = square.col;
	const unsigned rook_row = square.row;

	std::vector<Move> legal_moves;

	for (unsigned col = rook_col; col != 0; --col)
	{
		if (board.square_empty(Square{rook_col, rook_row}))
		{
			// legal_moves.push_back(Move)
		}
		else
		{
			
		}
	}

	for (unsigned row = rook_row; row != 0; --row)
	{
		// Piece* 
		// if ()
	}

	std::vector<Move> moves;
	return moves;
}