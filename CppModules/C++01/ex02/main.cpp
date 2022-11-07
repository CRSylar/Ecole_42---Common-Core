/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:00:29 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/08 12:28:16 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent	zt;
	Zombie		*first;

	zt.setZombieType("my_Z");
	first = zt.newZombie("mario");
	first->announce();
	delete first;

	first = zt.newZombie("alfredo");
	first->announce();
	delete first;

	for (int i = 0; i < 4 ; i++)
		zt.randomChump();
	return (0);
}
