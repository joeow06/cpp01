/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:13:13 by jow               #+#    #+#             */
/*   Updated: 2025/10/16 01:14:55 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* HumanB passes object "Weapon" to its private member variable "weaponB"
* through pass by pointer
*
* setWeapon takes in a reference to "Weapon"
* Then it stores its mem address in the pointer "weaponB"
*/

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weaponB)
{
	this->weaponB = &weaponB;
}

std::string HumanB::getName(void)
{
	return (name);
}

void HumanB::attack(void)
{
	std::cout << getName() << " attacks with their " << weaponB->getType() << std::endl;
}