//Kathy Saad
//CPSC 131 - Section 01
//Assignment 02 - Playing Card
//March 5, 2013
//REVISED

#pragma once
#include <string>

enum Suits {CLUB, DIAMOND, HEART, SPADE};
enum RelationType {LESS, EQUAL, GREATER};

class Card{
public:
	Card();
	Card(int initRank, Suits initSuit);
	int GetRank() const;
	Suits GetSuit() const;
	bool operator < (Card other) const;
	bool operator > (Card other) const;
	bool operator == (Card other) const;
	std::string PrintString() const;
	RelationType ComparedTo(const Card * someCard);
	std::string convertRank[13];
	std::string convertSuit[4];
	int getRank (int rank);
private:
	int rank;
	Suits suit;
};