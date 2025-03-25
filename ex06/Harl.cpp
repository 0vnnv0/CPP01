/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:20:56 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/25 15:51:59 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::debug(void)
{
	std::cout << PINK << "[ DEBUG ] " RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese"
	<< "-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << PINK << "[ INFO ] " << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger!" 
	<< "If you did, I would not be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << PINK << "[ WARNING ] " << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." 
	<< "I have been coming for years, whereas you started working here just last month." << std::endl <<std::endl;
}

void	Harl::error(void)
{
	std::cout << PINK << "[ ERROR ] " << RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std:: endl;
}
int		Harl::enumlevel(const std::string &level)
{
	if (level == "DEBUG")
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (-1);
}

void	Harl::complain(std::string level)
{
	int ilevel = enumlevel(level);
	
	switch (ilevel)
    {
    case 0:
        debug();
    case 1:
        info();
    case 2:
        warning();
    case 3:
        error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
