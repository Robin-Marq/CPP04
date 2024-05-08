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
#include <string>

#define DEFAULT "\033[0m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

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