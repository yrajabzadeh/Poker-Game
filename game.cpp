#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Card
{
	string rank;
	string suit;
	int value;
	public:
	string getRank()
	{
		return rank;
	}
	string getSuit()
	{
		return suit;
	}
	int getValue()
	{
		return value;
	}
	card ()
	{}
	card (string rk, string st, int val)
	{
		rank=rk;
		suit=st;
		value=val;
	}
	void print()
	{
		cout<<rank<<"of"<<suit<<endl;
};

class Deck
{
	Card deck [S2];
	int top;
	public:
	Deck()
	{
		string ranks [13]= {"Ace","King","Queen","Jack","Ten","Nine","Eight","Seven","Six","Five","Four","Three","Two"};
		string suits [4]= {"Spades","Diamonds","Hearts","Clubs"}
		int values [13]= {11,10,10,10,10,9,8,7,6,5,4,3,2};
		for (inti=0;i<S2;i++)
		deck[i]=Card(ranks[i%13],suits[i%4],values[i%13]);
		top0;
	}
	card dealCard()
	{
		return deck [top++];
	}
	void shuffle()
	{}
};

Card c;
vector <Card> hand;
hand.push_back(c);
hand.push_back(c2);
for (inti=0;i<int)hand_push.size();i++)
cout<<hand[i];
hand.clear();

class Player
{
	string name;
	double cash;
	double bet;
	vector<Card>hand;
	public:
	Player (doubletheCash)
	{
		cash=theCash;
		bet=0;
	}
	void hit (Card c)
	{
		hand.push_back(c);
	}
		int totalHand()
	{
		int count=0;
		for (inti=0;i<(int);hand.size(); i++)
	{
		Card c=hand[i];
		count=count+c.setVector();
	}
	return count;
	}
};
