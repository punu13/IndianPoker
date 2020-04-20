#pragma once
class card
{
private:
	enum Suit
	{
		//joker = 0, //TODO implement joker later
		clubs,
		diammonds,
		hearts,
		spades
	};

	short p_cardValue;
	Suit p_cardSuit;

	
public:
	card();
	card(int cardValue, Suit suit);
	~card();
};