/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 01:38:36 by jow               #+#    #+#             */
/*   Updated: 2025/10/17 02:17:43 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harlFilter;

	if (ac == 2)
		harlFilter.complain(av[1]);
	else
		std::cout << "Error: invalid parameters" << std::endl;
	return (0);
}