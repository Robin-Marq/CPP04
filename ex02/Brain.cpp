/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:27:47 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/08 14:27:49 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain Copy Constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &value)
{
    for (size_t i = 0; i < 100; i++)
    {
        this->_ideas[i] = value._ideas[i];
    }
    std::cout << "Brain Assignment Operator = called\n";
    return *this;
}

std::string Brain::getIdea(size_t i) const
{
  if (i > 99)
  {
    std::cout << "unable to get idea, nr. of index is to big" << std::endl;
    return "";
  }
  return this->_ideas[i];
}

void Brain::setIdea(size_t i, std::string incomigIdea)
{
  if (i > 99)
  {
    std::cout << "Array is full, no more ideas can be saved in brain" << std::endl;
    return;
  }
  this->_ideas[i] = incomigIdea;
}