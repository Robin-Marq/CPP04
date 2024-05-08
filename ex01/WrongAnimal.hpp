/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:22:55 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/05 13:27:07 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(WrongAnimal &copy);
    WrongAnimal(const std::string &someString);
    WrongAnimal &operator=(const WrongAnimal &variable);

    void setType(const std::string &name);
    std::string getType() const;
	void makeSound() const;
};

#endif