/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 23:13:11 by jow               #+#    #+#             */
/*   Updated: 2025/10/16 01:01:12 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon &weaponA;
	public:
		HumanA(std::string name, Weapon &weaponA);
		void attack(void);
		std::string getName(void);
};

#endif