/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:21:06 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/05 11:19:34 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    virtual ~Animal();
    Animal(Animal &copy);
    Animal(const std::string &someString);
    Animal &operator=(const Animal &variable);

    void setType(const std::string &name);
    std::string getType() const;
	virtual void makeSound() const;
};

#endif