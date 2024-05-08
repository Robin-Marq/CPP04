/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:28:10 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/05 13:46:42 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::WrongAnimal(const std::string &someString) : _type(someString)
{
    std::cout << "WrongAnimal Constructor called for " << _type << std::endl;
    setType(someString);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &variable)
{
    _type = variable._type;
    std::cout << "WrongAnimal Assignment Operator = called\n";
    return *this;
}

void WrongAnimal::setType(const std::string &name)
{
    this->_type = name;
}

std::string WrongAnimal::getType () const
{
    return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "\x1b[33m";
	std::cout << "WrongAnimal is just the class, it doens't make a sound. Sorry" << std::endl;
	std::cout << "\x1b[0m";
}