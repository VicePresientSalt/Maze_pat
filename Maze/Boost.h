#pragma once
#include <iostream>
#include "Position.h"
using namespace std;

class Boost
{
	Position position_;
	static const int ajoutPas_ = 5;
	bool manger_;

public:
	Boost() 
	{
		manger_ = false;
	}

	Boost(const Position &p) throw()
		: position_(p)
	{
		manger_ = false;
	}

	void SetPosition(Position pos)
	{
		position_ = pos;
	}

	Position GetPosition() const throw()
	{
		return position_;
	}

	bool estManger()
	{
		return manger_;
	}

	void Mange()
	{
		manger_ = true;
	}

	int GetAjoutPas() 
	{
		return ajoutPas_;
	}

};
ostream & operator<<(ostream&, const Boost&);