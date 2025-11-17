/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:33:38 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/17 17:55:02 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();



	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;



	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* mangoloko = new WrongAnimal();
	const WrongCat* banana = new WrongCat();


	std::cout << mangoloko->getType() << " " << std::endl;
	mangoloko->makeSound();

	std::cout << banana->getType() << " " << std::endl;
	banana->makeSound();




	delete meta;
	delete j;
	delete i;
	delete mangoloko;
	delete banana;
	return 0;
}