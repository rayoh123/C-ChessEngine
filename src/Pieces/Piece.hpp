#ifndef PIECE_HPP
#define PIECE_HPP

#include <vector>
#include <string>
#include "../Board.hpp"
#include "../Square.hpp"
#include "../Color.hpp"

struct Move;

class Piece
{
public:
	Piece(const char color, const Square starting_square);
	const Color& get_color() const;
	const Square& get_square() const;
	bool get_has_moved() const;
	virtual std::vector<Square> get_legal_moves(const Board& board) const = 0;

	void move(const Move& m);
	void undo_move(const Move& m);

protected:
	Square square;
	Color color;
	bool has_moved;
};

#endif