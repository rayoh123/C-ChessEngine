#include "Board.hpp"

Board::Board()
	: pieces{}, color_to_move{Color{'w'}}, move_number{1}
{
	// Initialize all pieces to their starting positions
	pieces.push_back(Piece("Rook", const char& color, const Square& starting_square));
}

Board(const std::vector<Piece> pieces, const Color& color_to_move, unsigned move_number)
	: pieces{pieces}, color_to_move{color_to_move}, move_number{move_number}
{

}