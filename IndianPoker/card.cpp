#include "card.h"

card::card()
{
	this->p_cardValue = 0;
//	this->p_cardSuit = 0;
}
card::card(int cardValue, int suitValue)
{
	this->p_cardValue = cardValue;
	this->p_cardSuit = (Suit)suitValue;
}
int card::getCardValue()
{
	return p_cardValue;
}
card::Suit card::getSuit()
{
	return p_cardSuit;
}
card::~card()
{

}