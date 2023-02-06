#include "Square.hpp"

bool Square::operator ==(const Square& square2) const{
	return (col == square2.col) && (row == square2.row);
}