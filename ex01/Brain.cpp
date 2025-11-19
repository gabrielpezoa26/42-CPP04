/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:20:15 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/18 17:34:13 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	log("Brain-> Default constructor called");
}

Brain::Brain(const Brain& other)
{
	log("Brain-> Copy constructor called");
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		log("DEBUG: oiiii");
	}
	return (*this);
}

Brain::~Brain()
{
	log("Brain-> Default destructor called");
}