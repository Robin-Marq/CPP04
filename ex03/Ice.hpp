#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    ~Ice();
    Ice(Ice &copy);
    Ice(std::string const & type);
    Ice &operator=(const Ice &variable);

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif