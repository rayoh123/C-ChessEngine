#include "Move.hpp"

Move::Move(Piece* piece, Square source, Square dest, bool is_first_move_for_piece)
	: piece{piece}, source{source}, destination{dest}, is_first_move_for_piece{is_first_move_for_piece}, 
	  is_castling{false}, is_en_passant{false}, is_promotion{false}
{

}

Move::Move(Piece* king, Piece* rook, Square k_source, Square k_dest, Square r_source, Square r_dest)
	: castling_king{king}, castling_rook{rook}, king_source{k_source}, king_destination{k_dest}, 
	  rook_source{r_source}, rook_destination{r_dest}, is_first_move_for_piece{false}, is_castling{true},
	  is_en_passant{false}, is_promotion{false}
{

}

// TODO: en passant constructor
// TODO: allow pawn to promote to pieces other than the queen
Move::Move(Piece* pawn, Square source, Square dest)
	: piece{pawn}, source{source}, destination{dest}, is_first_move_for_piece{false}, 
	  is_castling{false}, is_en_passant{false}, is_promotion{true}
{

}