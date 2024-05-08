/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:21:54 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/08 13:38:11 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
std::cout << GREEN;
std::cout << "---------------------------------" << std::endl;
std::cout << "This is the Test from the subject" << std::endl;
std::cout << "---------------------------------" << std::endl;
std::cout << DEFAULT;

const Animal* j = new Dog();
const Animal* i = new Cat();

delete j;//should not create a leak
delete i;

std::cout << GREEN;
std::cout << "---------------------------------" << std::endl;
std::cout << "**** This is the Array Test *****" << std::endl;
std::cout << "---------------------------------" << std::endl;
std::cout << DEFAULT;

Animal *ptr_to_array[5];

for (int i = 0; i < 5; i++)
{
    if (i % 2 == 0)
        ptr_to_array[i] = new Cat();
    else
        ptr_to_array[i] = new Dog();
}

for (int i = 0; i < 5; i++)
{
    ptr_to_array[i]->makeSound();
}

for (int i = 0; i < 5; i++)
{
    delete ptr_to_array[i];
}

std::cout << GREEN;
std::cout << "---------------------------------" << std::endl;
std::cout << "** This is the Deep Copy Test ***" << std::endl;
std::cout << "---------------------------------" << std::endl;
std::cout << DEFAULT;

Cat *Cat_Pointer1 = new Cat();
Cat_Pointer1->incomigIdea("First ID");
Cat_Pointer1->incomigIdea("Second ID");
Cat_Pointer1->show();

delete Cat_Pointer1;

std::cout << GREEN;
std::cout << "---------------------------------" << std::endl;
std::cout << "** This is the Assignment Operator Test ***" << std::endl;
std::cout << "---------------------------------" << std::endl;
std::cout << DEFAULT;

Cat *Cat_Pointer2 = new Cat();
Cat *Cat_Pointer3 = Cat_Pointer2;

Cat_Pointer2->incomigIdea("First ID");
Cat_Pointer2->incomigIdea("Second ID");
Cat_Pointer2->show();
Cat_Pointer3->show();
delete Cat_Pointer2;

std::cout << GREEN;
std::cout << "---------------------------------" << std::endl;
std::cout << "This is the Copy Constructor Test" << std::endl;
std::cout << "---------------------------------" << std::endl;
std::cout << DEFAULT;


Cat *Cat_Pointer4 = new Cat();
Cat *Cat_Pointer5 = new Cat();
Cat *Cat_Pointer6(Cat_Pointer4);
Cat *Cat_Pointer7(Cat_Pointer5);

Cat_Pointer4->incomigIdea("First ID");
Cat_Pointer4->incomigIdea("Second ID");
Cat_Pointer5->incomigIdea("Third ID");
Cat_Pointer5->incomigIdea("Fourth ID");
Cat_Pointer6->incomigIdea("Fifth ID");
Cat_Pointer6->incomigIdea("Sixth ID");
Cat_Pointer4->show();
Cat_Pointer5->show();
Cat_Pointer6->show();
Cat_Pointer7->show();
delete Cat_Pointer4;
delete Cat_Pointer5;

// system("leaks program");
return 0;
}


// int main()
// {
//     Animal A;
//     Cat C;
//     Dog D;

// 	Animal A2("Animal2");

// 	std::cout << "\x1b[33m" << "Name of Animal class is: " << A.getName() << "\x1b[0m" << std::endl;
// 	A.makeSound();
// 	std::cout << '\n';

// 	std::cout << "\x1b[33m" << "Name of Animal class is: " << A2.getName() << "\x1b[0m" << std::endl;
// 	A2.makeSound();
// 	std::cout << '\n';

// 	std::cout << "\x1b[35m" << "Name of cat class is: " << C.getName() << "\x1b[0m" << std::endl;
// 	C.makeSound();
// 	std::cout << '\n';

// 	std::cout << "\x1b[32m" << "Name of cat class is: " << D.getName() << "\x1b[0m" << std::endl;
// 	D.makeSound();
// 	std::cout << '\n';

//     return 0;
// }