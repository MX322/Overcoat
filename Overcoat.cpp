#include "Overcoat.h"

Overcoat::Overcoat(int price, std::string coat)
{
	this->price = price;
	this->coat = coat;
}

bool Overcoat::operator==(Overcoat& obj)
{
	if (this->price == obj.price && this->coat == obj.coat)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool Overcoat::operator!=(Overcoat& obj)
{
	if (this->price != obj.price && this->coat != obj.coat)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool Overcoat::operator>(Overcoat& obj)
{
	if (this->price > obj.price)
	{
		return true;
	}

	else
	{
		false;
	}
}

bool Overcoat::operator>=(Overcoat& obj)
{
	if (this->price >= obj.price)
	{
		return true;
	}

	else
	{
		false;
	}
}

bool Overcoat::operator<(Overcoat& obj)
{
	if (this->price < obj.price)
	{
		return true;
	}

	else
	{
		false;
	}
}

bool Overcoat::operator<=(Overcoat& obj)
{
	if (this->price <= obj.price)
	{
		return true;
	}

	else
	{
		false;
	}
}

Overcoat& Overcoat::operator=(Overcoat& obj)
{
	this->coat = obj.coat;
	this->price = obj.price;

	return *this;
}

int main()
{
	Overcoat one{ 1000, "One" };
	Overcoat tmp{ 333, "trrr" };
	Overcoat two{ 2000, "Two" };

	tmp = one;

	if (one == tmp)
	{
		std::cout << "YES" << std::endl;
	}

	if (one > two)
	{
		std::cout << "YES" << std::endl;
	}

	if (one >= two)
	{
		std::cout << "YES" << std::endl;
	}

	if (one < two)
	{
		std::cout << "YES" << std::endl;
	}

	if (one <= two)
	{
		std::cout << "YES" << std::endl;
	}

}