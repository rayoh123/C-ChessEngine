#include "Board.hpp"
#include "Rook.hpp"

Board::Board()
	: pieces{}, color_to_move{Color{'w'}}, move_number{1}
{
	pieces.push_back(new Rook('b', Square{0, 7}));
}

Board::Board(const std::vector<Piece*> pieces, const Color color_to_move, unsigned move_number)
	: pieces{pieces}, color_to_move{color_to_move}, move_number{move_number}
{

}

const std::vector<Piece*>& Board::get_all_pieces() const
{
	return pieces;
}