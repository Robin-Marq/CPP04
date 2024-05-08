/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:27:57 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/08 14:28:00 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
protected:
    std::string _ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &value);

    void setIdea (size_t i, std::string incomigIdea);
    std::string getIdea(size_t index) const;
};

#endif