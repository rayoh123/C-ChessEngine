#ifndef SQUARE_HPP
#define SQUARE_HPP

struct Square{
	unsigned col;
	unsigned row;
	bool operator ==(const Square& square2) const;
};

#endif