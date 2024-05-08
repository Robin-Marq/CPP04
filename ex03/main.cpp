/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:42:13 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/08 12:56:21 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());

ICharacter* me = new Character("me");

AMateria* tmp;
tmp = src->createMateria("ice"); //string 0, soll auf einen array auf feld 0 gespeichert werden
me->equip(tmp); // ausrüsten bzw. in feld 0 ablegen
tmp = src->createMateria("cure"); //string 1, soll auf einem array auf feld 1 gespeichert werden
me->equip(tmp); // ausrüsten bzw. in feld 1 ablegen

ICharacter* bob = new Character("bob");

me->use(0, *bob); // 0 muß shoot sein
me->use(1, *bob); // 1 muß heal sein vielleicht mit switch case machen

delete bob;
delete me;
delete src;

return 0;
}