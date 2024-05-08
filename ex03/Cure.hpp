#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{

    public:
    Cure();
    ~Cure();
    Cure(Cure &copy);
    Cure(std::string const & type);
    Cure &operator=(const Cure &variable);

    AMateria* clone() const;
    void use(ICharacter& target);
	std::string const & getType() const;
};

#endif