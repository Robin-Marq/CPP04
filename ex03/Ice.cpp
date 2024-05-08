#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice Default Constructor called\n";
    this->_type = "ice";
}

Ice::~Ice()
{
    std::cout << "Ice Destructor called\n";
}

Ice::Ice(std::string const & type)
{
    std::cout << "Ice Constructor called for " << type << std::endl;
    _type = type;
}

Ice::Ice(Ice &copy)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = copy;
}

Ice &Ice::operator=(const Ice &variable)
{
    _type = variable._type;
    std::cout << "Ice Assignment operator = called\n";
    return *this;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

