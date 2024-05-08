/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:21:44 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/05 11:07:39 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* _dog_ptr_to_brain;
    // std::string _idea;
public:
    Dog();
    ~Dog();
    Dog(Dog &copy);
    Dog(const std::string &someString);
    Dog &operator=(const Dog &variable);

	void makeSound() const;
    void incomigIdea(std::string message);
    void show()const;
};

#endif