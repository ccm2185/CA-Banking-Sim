#ifndef _CARD_H_
#define _CARD_H_
#include <iostream>

using namespace std;

class Card {
	private:
		int value; // 1- 10
		char suit; // c, d, h, s
		char rank; // 2 - A
		char color; // r or b

	public:
		Card(int value, char suit, char rank, char color);
		int getValue();
		char getSuit();
		char getRank();
		char getColor();
};

#endif
