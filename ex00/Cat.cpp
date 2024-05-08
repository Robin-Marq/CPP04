/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:21:20 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/05 11:07:29 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->setType("Cat");
    std::cout << "Cat Default constructor called for " << _type << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" <<  std::endl;
}

Cat::Cat(Cat &copy) : Animal()
{
    this->setType("Cat");
    std::cout << "Cat copy constructor called for " << _type << std::endl;
    *this = copy;
}

Cat::Cat(const std::string &someString) : Animal()
{
    this->setType(someString);
    std::cout << "Cat Constructor called for " << _type << std::endl;
}

Cat &Cat::operator=(const Cat &variable)
{
    _type = variable._type;
    std::cout << "Cat Assignment Operator = called\n";
    return *this;
}

void Cat::makeSound() const
{
	std::cout << "\x1b[35m";
	std::cout << "This is the cat sound: Miauuuuu :-)" << std::endl;
	std::cout << "\x1b[0m";
}