/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:04:29 by jow               #+#    #+#             */
/*   Updated: 2025/10/16 21:34:29 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		s1,
					s2,
					outFileName,
					line,
					new_line;
	std::string::size_type	found,
							pos;
	
	if (ac != 4)
	{
		std::cout << "Error: Invalid number of parameters!" << std::endl;
		return (1);
	}
	inFile.open(av[1]);
	if (inFile.fail())
	{
		std::cout << "Error: Unable to open file [" << av[1] << "]" << std::endl;
		return (1);
	}
	s1 = av[2];
	s2 = av[3];
	if (s1.empty())
	{
		std::cout << "Error: String is empty" << std::endl;
		return (1);
	}	
	outFileName = av[1];
	outFileName.append(".replace");
	outFile.open(outFileName);
	while (getline(inFile, line))
	{
		if (outFile.is_open())
		{
			new_line.clear();
			pos = 0;
			while ((found = line.find(s1, pos)) != std::string::npos)
			{
				new_line.append(line, pos, found - pos);
				new_line.append(s2);
				pos = found + s1.length();
			}
			new_line.append(line, pos, line.length() - pos);
			outFile << new_line << std::endl;
		}
		else
			std::cout << "Error: Unable to write to file [" << outFileName << "]" << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}