/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:55:03 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/08 09:58:35 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// This function is called when a new instance of Cure is created
// from Robin Marquardt
Cure::Cure()
{
    std::cout << "Cure Default Constructor called\n";
    this->_type = "Cure";
}

// This function is called when the instance of Cure is destroyed
// from Robin Marquardt
Cure::~Cure()
{
    std::cout << "Cure Destructor called\n";
}

// This function is called when a new instance of Cure is created with a string as a parameter
// from Robin Marquardt
Cure::Cure(std::string const & type)
{
    std::cout << "Cure Constructor called for " << type << std::endl;
    _type = type;
}

// This function is called when a new instance of Cure is created as a copy of another instance of Cure
// from Robin Marquardt
Cure::Cure(Cure &copy)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = copy;
}

// This function assigns the value of the parameter to the instance of Cure
// from Robin Marquardt
Cure &Cure::operator=(const Cure &variable)
{
    _type = variable._type;
    std::cout << "Cure Assignment operator = called\n";
    return *this;
}

// This function returns a new instance of Cure
// from Robin Marquardt
AMateria* Cure::clone() const
{
	return (new Cure());
}

// This function prints "* heals target’s wounds *" to the console
// from Robin Marquardt
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

// This function returns "cure" as a string
// from Robin Marquardt
std::string const &Cure::getType() const
{
	return (_type);
}