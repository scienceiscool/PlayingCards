//Kathy Saad
//CPSC 131 - Section 01
//Assignment 02 - Playing Card
//March 5, 2013
//REVISED

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "REVISED Card.h"

using namespace std;

void PrintDeck();
//Function: Prints the deck of cards.

void randomGenerator();
//Function: Randomly generates two cards and compares them using relational operators.

int main()
{
	PrintDeck();	
	randomGenerator();

	return 0;
}

void PrintDeck()
{
	int rank;
	Suits suit;
	Card * theCard;
	string convertSuit[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};

	cout << "Complete deck of cards:" << endl;

	for (int i = 0; i <= 3; i++)
	{
		cout << "Ace of " << convertSuit[i] << endl;

		for(unsigned int j = 2; j < 14; j++)
		{
			theCard = new Card(j, Suits(i));
			cout << theCard->PrintString() << endl;
		}

		cout << endl;
	}
	cout << endl;
}

void randomGenerator()
{
	int rank;
	Suits suit;
	srand(time(0));
	Card * theCard1;
	Card * theCard2;
	enum RelationType {LESS, EQUAL, GREATER};

	suit = Suits(rand() % 3);
	rank = rand() % 14;
	theCard1 = new Card(rank, suit);

	cout << "Randomly chosen card #1: " << theCard1->PrintString() << endl << endl;

	suit = Suits(rand() % 3);
	rank = rand() % 14;
	theCard2 = new Card(rank, suit);

	cout << "Randomly chosen card #2: " << theCard2->PrintString() << endl << endl;

	if((theCard1->ComparedTo(theCard2)) == 2)
		cout << "Card 1 is of greater value than card 2." << endl;
	else if((theCard1->ComparedTo(theCard2)) == 1)
		cout << "Card 1 is of equal value to Card 2." << endl;
	else if((theCard1->ComparedTo(theCard2)) == 0)
		cout << "Card 1 is of less value than Card 2." << endl;
}