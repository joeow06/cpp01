/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:13:09 by jow               #+#    #+#             */
/*   Updated: 2025/10/16 01:11:18 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* HumanA passes object "Weapon" to its private member variable "weaponA"
* through pass by reference
*
* HumanA is initilzed through a constructor and a initializer list
* It takes in the object "Weapon" as reference
*/

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weaponA): name(_name), weaponA(_weaponA) {}

std::string HumanA::getName(void)
{
	return (name);
}

void HumanA::attack(void)
{
	std::cout << getName() << " attacks with their " << weaponA.getType() << std::endl;
}