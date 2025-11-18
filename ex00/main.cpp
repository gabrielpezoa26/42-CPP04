/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:33:38 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/17 23:46:28 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
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

	const WrongAnimal* mangoloko = new WrongCat();


	std::cout << mangoloko->getType() << " " << std::endl;
	mangoloko->makeSound();

	delete meta;
	delete j;
	delete i;
	delete mangoloko;
	return 0;
}