/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:16:26 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/17 17:35:59 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	log("WrongCat-> Default constructor called");
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
	log("WrongCat-> Copy constructor called");
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	log("WrongCat-> Default destructor called");
}

void WrongCat::makeSound()const
{
	logColored("miaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaau", RED);

}