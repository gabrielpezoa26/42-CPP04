/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:35:14 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/16 18:03:40 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void log(std::string message)
{
	std::cout << message << std::endl;
}

void logColored(std::string message, std::string color)
{
	std::cout << color << message << RESET << std::endl;
}

Animal::Animal()
{
	log("Animal-> Default constructor called");
	type = "empty";
}

Animal::Animal(const Animal& other)
{
	log("Animal-> Copy constructor called");
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	log("Animal-> Default destructor called");
}

std::string Animal::getType()const
{
	return type;
}

void Animal::makeSound()const
{
	logColored("Animal generic sound", YELLOW);
}
