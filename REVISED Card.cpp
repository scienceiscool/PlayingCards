//Kathy Saad
//CPSC 131 - Section 01
//Assignment 02 - Playing Card
//March 5, 2013
//REVISED

#include "REVISED Card.h"

int Card::getRank (int Rank)
{
	rank = Rank;
	return Rank;
}

Card::Card(void)
{
	rank = 1;
	suit = CLUB;
}

Card::Card(int initRank, Suits initSuit)
{
	rank = initRank;
	suit = initSuit;
}

int Card::GetRank() const
{
	return rank;
}

Suits Card::GetSuit() const
{
	return suit;
}

bool Card::operator < (Card other) const
{
	if (suit < other.suit)
	{	
		return true;
	}
	else if (suit > other.suit)
	{
		return false;
	}
	else if (rank < other.rank)
	{
		return true;
	}
	else if (rank > other.rank)
	{
		return false;
	}
	else
	{
		return false;
	}
}

bool Card::operator > (Card other) const
{
	if (suit > other.suit)
	{
		return true;
	}
	else if (suit < other.suit)
	{
		return false;
	}
	else if (rank > other.rank)
	{
		return true;
	}
	else if (rank < other.rank)
	{
		return false;
	}
	else
	{
		return false;
	}
}

bool Card::operator == (Card other) const
{
	if (suit == other.suit && rank == other.rank)
	{	
		return true;
	}
	else
	{
		return false;
	}
}

RelationType Card::ComparedTo(const Card * someCard)
//Returns relative position of self to someCard
{
	if (suit < someCard->suit)
		return LESS;
	else if (suit > someCard->suit)
		return GREATER;
	else if (rank == someCard->rank)
		return EQUAL;
	else if (rank == 1)
		return GREATER;
	else if (someCard->rank == 1)
		return LESS;
	else if (rank < someCard->rank)
		return LESS;
	else if (rank > someCard->rank)
		return GREATER;
}

std::string Card::PrintString() const
{
	std::string convertRank[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	std::string convertSuit[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
	std::string printString = convertRank[rank - 1] + " of " + convertSuit[suit];
	return printString;
}