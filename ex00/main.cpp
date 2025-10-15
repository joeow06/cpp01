/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:47:15 by jow               #+#    #+#             */
/*   Updated: 2025/10/15 16:55:58 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main(void)
{
	Zombie *new_zombie = new Zombie("joe");
	new_zombie->announce();
	randomChump("nathan");
	delete (new_zombie);
	return (0);
}