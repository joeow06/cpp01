/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:13:15 by jow               #+#    #+#             */
/*   Updated: 2025/10/16 01:03:53 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *weaponB;
	public:
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon &weaponB);
		std::string getName(void);
};

#endif