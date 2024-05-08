/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:21:54 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/08 13:33:46 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongCat(); //this is the wrong way to do it, without virtual keyword

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << meta->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;

i->makeSound();
j->makeSound();
meta->makeSound();
k->makeSound();

delete meta;
delete j;
delete i;
delete k;

return 0;
}


// int main()
// {
//     Animal A;
//     Cat C;
//     Dog D;

// 	Animal A2("Animal2");

// 	std::cout << "\x1b[33m" << "Name of Animal class is: " << A.getType() << "\x1b[0m" << std::endl;
// 	A.makeSound();
// 	std::cout << '\n';

// 	std::cout << "\x1b[33m" << "Name of Animal class is: " << A2.getType() << "\x1b[0m" << std::endl;
// 	A2.makeSound();
// 	std::cout << '\n';

// 	std::cout << "\x1b[35m" << "Name of cat class is: " << C.getType() << "\x1b[0m" << std::endl;
// 	C.makeSound();
// 	std::cout << '\n';

// 	std::cout << "\x1b[32m" << "Name of cat class is: " << D.getType() << "\x1b[0m" << std::endl;
// 	D.makeSound();
// 	std::cout << '\n';

//     return 0;
// }