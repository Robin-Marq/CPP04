#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

class ICharacter;

// This class is also called abstract class, because it contains the "minimum of 1 pure virtual function", which have to be initialisied in the next class
class AMateria
{
protected:
    std::string _type;

public:
AMateria();
virtual ~AMateria();
AMateria(AMateria &copy);
AMateria(std::string const & type);
AMateria &operator=(const AMateria &variable);
std::string const & getType() const;
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target) = 0;
};

#endif