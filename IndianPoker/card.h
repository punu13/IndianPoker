#pragma once
class card
{
public:
	enum Suit
	{
		joker = 0, //TODO implement joker later
		clubs,
		diammonds,
		hearts,
		spades
	};
	card();
	card(int cardValue, int suitValue);
	int getCardValue();
	card::Suit getSuit();

	~card();


private:
	

	short p_cardValue;
	Suit p_cardSuit;

	

}; 