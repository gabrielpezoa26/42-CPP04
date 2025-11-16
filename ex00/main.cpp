/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:33:38 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/16 18:00:49 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	Animal Animal;
// 	Dog Dog;
// 	Cat Cat;

// 	Animal.makeSound();
// 	Dog.makeSound();
// 	Cat.makeSound();
// }

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
	return 0;
}