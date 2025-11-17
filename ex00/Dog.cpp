/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:55:00 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/16 18:09:49 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	log("Dog-> Default constructor called");
	type = "Dog";
}

Dog::Dog(const Dog& other) : Animal()
{
	log("Dog-> Copy constructor called");
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	log("Dog-> Default destructor called");
}

void Dog::makeSound()const
{
	logColored("auauauauuauauauauua", GREEN);
}