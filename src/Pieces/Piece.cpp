#include "Piece.hpp"

Piece::Piece(const char color, const Square starting_square)
	: square{starting_square}, color{Color{color}}, has_moved{false}
{

}

const Color& Piece::get_color() const{
	return color;
}

const Square& Piece::get_square() const{
	return square;
}

bool Piece::get_has_moved() const{
	return has_moved;
}

void Piece::move(const Move& m){
	square = m.destination;
	has_moved = true;
}

void Piece::undo_move(const Move& m){
	square = m.source;
	if (m.is_first_move_for_piece){
		has_moved = false;
	}
}