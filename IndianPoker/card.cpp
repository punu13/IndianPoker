#include "card.h"

card::card()
{
	this->p_cardValue = 0;
//	this->p_cardSuit = 0;
}
card::card(int cardValue, Suit suit)
{
	this->p_cardValue = cardValue;
	this->p_cardSuit = suit;
}
card::~card()
{

}