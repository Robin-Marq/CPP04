/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:58:42 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/08 12:58:01 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#pragma once

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_readyMateria[4];

public:
    Character();
    ~Character();
    Character(Character &copy);
    Character(std::string const & name);
    Character &operator=(const Character &variable);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};