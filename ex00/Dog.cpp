/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:21:36 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/05 11:08:56 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->setType("Dog");
    std::cout << "Dog Default constructor called for " << _type << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called " << std::endl;
}

Dog::Dog(Dog &copy) : Animal()
{
    this->setType("Dog");
    std::cout << "Dog copy constructor called for" << _type << std::endl;
    *this = copy;
}

Dog::Dog(const std::string &someString) : Animal()
{
    this->setType(someString);
    std::cout << "Dog Constructor called for " << _type << std::endl;
}

Dog &Dog::operator=(const Dog &variable)
{
    _type = variable._type;
    std::cout << "Dog Assignment Operator = called\n";
    return *this;
}

void Dog::makeSound() const
{
	std::cout << "\x1b[32m";
	std::cout << "This is the dog sound: Wau wau :-)" << std::endl;
	std::cout << "\x1b[0m";
}