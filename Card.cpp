#include "Card.h"

Card::Card(int value,  char suit, char rank, char color) {
	this->value = value;
	this->suit = suit;
	this->rank = rank;
	this->color = color;
}

int Card::getValue() {
	return this->value;
}

char Card::getSuit() {
	return this->suit;
}

char Card::getRank() {
	return this->rank;
}

char Card::getColor() {
	return this->color;
}
