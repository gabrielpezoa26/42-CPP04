/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:54:46 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/16 17:52:33 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	log("Cat-> Default constructor called");
	type = "Cat";
}

Cat::Cat(const Cat& other) : Animal()
{
	log("Cat-> Copy constructor called");
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	log("Cat-> Default destructor called");
}

void Cat::makeSound()
{
	logColored("miaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", BLUE);

}