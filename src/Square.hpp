#ifndef SQUARE_HPP
#define SQUARE_HPP

struct Square{
	int col;
	int row;
	bool operator ==(const Square& square2) const;
};

#endif