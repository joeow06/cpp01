/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:13:19 by jow               #+#    #+#             */
/*   Updated: 2025/10/16 00:36:06 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

//returns a const reference to the Weapon’s "type" string
std::string const &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}