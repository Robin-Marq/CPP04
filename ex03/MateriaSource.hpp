/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:37:46 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/08 12:57:39 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
    AMateria *_materia[4];
    int _count;

    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource &copy);
    MateriaSource &operator=(const MateriaSource &variable);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};