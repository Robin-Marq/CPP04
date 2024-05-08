#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMaterie Default Constructor called\n";
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called\n";
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria Constructor called for " << type << std::endl;
    _type = type;
}

AMateria::AMateria(AMateria &copy)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria &variable)
{
    _type = variable._type;
    std::cout << "AMateria Assignment operator = called\n";
    return *this;
}

std::string const &AMateria::getType() const
{
	return (_type);
}
