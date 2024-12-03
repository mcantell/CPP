#include "Weapon.h"

Weapon::Weapon( const std::string &type ) : _type(type){}

Weapon::Weapon( const Weapon& other )
{
	this->_type = other._type;
}

Weapon& Weapon::operator=( const Weapon& other )
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Weapon::~Weapon() {}

const	std::string& Weapon::getType( void ) const
{
	return _type;
}

void	Weapon::setType( const std::string &newType )
{
	_type = newType;
}
