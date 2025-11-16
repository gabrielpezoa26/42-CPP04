/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:35:19 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/16 18:04:02 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define BLUE "\033[34m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

class Animal
{
	protected:
		std::string type;


	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		~Animal();

		std::string getType()const;
		void makeSound()const;
};

void log(std::string message);
void logColored(std::string message, std::string color);

#endif