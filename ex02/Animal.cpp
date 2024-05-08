/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:20:58 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/05 11:20:17 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(Animal &copy)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = copy;
}

Animal::Animal(const std::string &someString) : _type(someString)
{
    std::cout << "Animal Constructor called for " << _type << std::endl;
    setType(someString);
}

Animal &Animal::operator=(const Animal &variable)
{
    _type = variable._type;
    std::cout << "Animal Assignment Operator = called\n";
    return *this;
}

void Animal::setType(const std::string &name)
{
    this->_type = name;
}

std::string Animal::getType () const
{
    return _type;
}

void Animal::makeSound() const
{
	std::cout << "\x1b[33m";
	std::cout << "Animal is just the class, it doens't make a sound. Sorry" << std::endl;
	std::cout << "\x1b[0m";
}