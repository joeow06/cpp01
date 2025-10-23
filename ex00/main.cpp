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

#include "Zombie.hpp"

int main(void)
{
	Zombie *heap_zombie = new Zombie("joe");
	heap_zombie->announce();
	randomChump("nathan");
	delete (heap_zombie);
	return (0);
}