#include<iostream>

using namespace std;

class Footballer 
{
public:
	string name;
	string surname;
	int number;
	virtual ~Footballer() = 0;
};
Footballer::~Footballer(){}

class IAttack
{
public:
	virtual void Attack() = 0;
};

class IDefend
{
public:
	virtual void Defend() = 0;
};

class IMidfielder : public IAttack, public IDefend
{};

class Defender : public Footballer, public IDefend
{
public:
	void Defend() override {
		cout << "I can Defend" << endl;
	}

};

class Forward : public Footballer, public IAttack
{
public:
	void Attack() override
	{
		cout << "I can Attack" << endl;
	}
	
};

class Midfielder : public Footballer, public IMidfielder
{
public:
	void Defend() override {
		cout << "I can Defend" << endl;
	}
	void Attack() override
	{
		cout << "I can Attack" << endl;
	}
};


void AnnouncmentForward(IAttack& player)
{
	player.Attack();
}

void AnnouncmentDefender(IDefend& player)
{
	player.Defend();
}

void AnnouncmentMiddlefielder(IMidfielder& player)
{
	player.Attack();
	player.Defend();
}

int main() {

	Forward forward;
	Defender defender;
	Midfielder middlefielder;

	/*AnnouncmentForward(forward);
	AnnouncmentForward(middlefielder);
	AnnouncmentDefender(defender);
	AnnouncmentDefender(middlefielder);*/
	AnnouncmentMiddlefielder(middlefielder);


}