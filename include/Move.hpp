#ifndef MOVE_HPP
#define MOVE_HPP

#include "Square.hpp"

class Piece;

class Move
{
public:
	Move(Piece* piece, Square source, Square dest, bool is_first_move_for_piece);
	Move(Piece* king, Piece* rook, Square k_source, Square k_dest, Square r_source, Square r_dest);
	// TODO: en passant constructor
	// TODO: allow pawn to promote to pieces other than the queen
	Move(Piece* pawn, Square source, Square dest);

public:
	Piece* piece;
	Piece* castling_king;
	Piece* castling_rook;
	Square source;
	Square destination;
	Square king_source;
	Square king_destination;
	Square rook_source;
	Square rook_destination;
	bool is_first_move_for_piece;
	bool is_castling;
	bool is_en_passant;
	bool is_promotion;
};

#endif