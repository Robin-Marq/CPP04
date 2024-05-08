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
    this->_dog_ptr_to_brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called " << std::endl;
    delete _dog_ptr_to_brain;
}

Dog::Dog(Dog &copy) : Animal()
{
    this->_type = copy.getType();
    this->_dog_ptr_to_brain = new Brain(*copy._dog_ptr_to_brain);
    std::cout << "Dog copy constructor called for" << _type << std::endl;
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

// This function will add an idea to the dog's brain
// It will loop through the array of ideas and add the idea to the first empty spot
// If the brain is full, it will print a message
// This function is const, because it doesn't change the object
// from Robin Marquardt
void Dog::incomigIdea(std::string idea) 
{
	for (size_t i = 0; i < 100; i++) 
    {
        if (this->_dog_ptr_to_brain->getIdea(i) == "")
        {
            this->_dog_ptr_to_brain->setIdea(i, idea);
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
void Dog::show() const 
{
	std::string str;
	std::cout << "The ideas of the Dog's are:" << std::endl;
	for (int i = 0; i < 100; i++) 
    {
		str = this->_dog_ptr_to_brain->getIdea(i);
		if (str.empty())
			return;
		std::cout << str << std::endl;
	}
}