#include "deck.h"
#include <iostream>
using std::cout;

deck::deck()
{
	short count = 0;
	for (int suitcount = 1; suitcount <= 4; suitcount++)
	{
		for (int cardvalue = 1; cardvalue <= 13; cardvalue++)
		{
			deck_of_cards[count] = card(cardvalue, suitcount);
			count++;
		}
	}
}

deck::~deck()
{

}

void deck::showDeck()
{
	for (int suitcount = 0; suitcount < 52; suitcount++)
	{
		cout << "Card no " << suitcount << " with value " << deck_of_cards[suitcount].getCardValue()  << " " << deck_of_cards[suitcount].getSuit() << "\n";
	}
	
}

