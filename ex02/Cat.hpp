/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:21:28 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/05 11:07:23 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* _cat_ptr_to_brain;
    std::string _idea;
public:
    Cat();
    ~Cat();
    Cat(Cat &copy);
    Cat(const std::string &someString);
    Cat &operator=(const Cat &variable);

	void makeSound() const;
    void incomigIdea(std::string message);
    void show()const;
};

#endif