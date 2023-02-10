#pragma once
#include <iostream>
class Overcoat
{
private:
	int price;
	std::string coat;

public:
	Overcoat(int price, std::string coat);

	bool operator==(Overcoat& obj);
	bool operator!=(Overcoat& obj);

	bool operator>(Overcoat& obj);
	bool operator>=(Overcoat& obj);
	bool operator<(Overcoat& obj);
	bool operator<=(Overcoat& obj);

	Overcoat& operator=(Overcoat& obj);
};

