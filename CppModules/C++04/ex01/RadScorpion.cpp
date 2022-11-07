/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cromalde <cromalde@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:54:37 by cromalde          #+#    #+#             */
/*   Updated: 2021/04/12 18:30:07 by cromalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

	//	Constructors & Destructor
RadScorpion::RadScorpion(void) :
	Enemy(80, "*Rad Scorpion*")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& src)
{
	this->hp = src.getHP();
	this->type = src.getType();
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{}

/*===============================================*/
	// Operator Overload
RadScorpion&	RadScorpion::operator=(const RadScorpion& src)
{
	this->hp = src.getHP();
	this->type = src.getType();
	return *this;
}
/*===============================================*/
void RadScorpion::takeDamage(int _n)
{
	if (_n <= 0)
		return;
	if ((this->hp -= _n ) <= 0)
	{
		this->hp = 0;
		std::cout << "* SPROTCH *" << std::endl;
	}
}
