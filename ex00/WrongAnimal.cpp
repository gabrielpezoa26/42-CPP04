/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:58:43 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/17 18:26:01 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	log("WrongAnimal-> Default constructor called");
	type = "empty";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	log("WrongAnimal-> Copy constructor called");
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	log("WrongAnimal-> Default destructor called");
}

std::string WrongAnimal::getType()const
{
	return type;
}

void WrongAnimal::makeSound()const
{
	logColored("*WrongAnimal generic sound*", RED);
}
