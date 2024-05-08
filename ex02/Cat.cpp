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
    this->_cat_ptr_to_brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" <<  std::endl;
    delete _cat_ptr_to_brain;
}

Cat::Cat(Cat &copy) : Animal()
{
    this->_type = copy.getType();
    this->_cat_ptr_to_brain = new Brain(*copy._cat_ptr_to_brain);
    std::cout << "Cat copy constructor called for " << _type << std::endl;
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

// This function will add an idea to the cat's brain
// It will loop through the array of ideas and add the idea to the first empty spot
// If the brain is full, it will print a message
// This function is const, because it doesn't change the object
// from Robin Marquardt
void Cat::incomigIdea(std::string idea) 
{
	for (size_t i = 0; i < 100; i++) 
    {
        if (this->_cat_ptr_to_brain->getIdea(i) == "")
        {
            this->_cat_ptr_to_brain->setIdea(i, idea);
            return;
        }
	}
	std::cout << "Brain of cat is full!" << std::endl;
}

// This function will show the ideas of the cat
// It will loop through the array of ideas and print them
// If the idea is empty, it will return
// This function is const, because it doesn't change the object
// from Robin Marquardt
void Cat::show() const 
{
	std::string str;
	std::cout << "The ideas of the Cat's are:" << std::endl;
	for (int i = 0; i < 100; i++) 
    {
		str = this->_cat_ptr_to_brain->getIdea(i);
		if (str.empty())
			return;
		std::cout << str << std::endl;
	}
}