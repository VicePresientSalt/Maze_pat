#include "Commande.h"
#include <iostream>

ostream & operator<< (ostream &os, const Commande &c)
{
	return os << c.GetSymbole();
}

istream & operator>> (istream &is, Commande &c)
{
	char ch;
	if (is >> ch)
		c= Commande(ch);
	return is;
}