#ifndef COLOR_HPP
#define COLOR_HPP

struct Color{
	char color;
	bool operator ==(const Color& color2) const;
};

#endif