/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:49:32 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/05 13:51:19 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->setType("WrongCat");
    std::cout << "WrongCat Default constructor called for " << _type << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" <<  std::endl;
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal()
{
    this->setType("WrongCat");
    std::cout << "WrongCat copy constructor called for " << _type << std::endl;
    *this = copy;
}

WrongCat::WrongCat(const std::string &someString) : WrongAnimal()
{
    this->setType(someString);
    std::cout << "WrongCat Constructor called for " << _type << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &variable)
{
    _type = variable._type;
    std::cout << "WrongCat Assignment Operator = called\n";
    return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "\x1b[35m";
	std::cout << "This is the WrongCat sound: Miauuuuu :-)" << std::endl;
	std::cout << "\x1b[0m";
}