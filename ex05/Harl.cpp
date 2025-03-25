/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:09:39 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/25 15:16:20 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::debug(void)
{
	std::cout << PINK << "[DEBUG] " RESET << "I love having extra bacon for my 7XL-double-cheese"
	<< "-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << PINK << "[INFO] " << RESET << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger!" 
	<< "If you did, I would not be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << PINK << "[WARNING] " << RESET << "I think I deserve to have some extra bacon for free." 
	<< "I have been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << PINK << "[ERROR] " << RESET << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	struct LevelAction
	{
		std::string level;
		void(Harl::*action)();
	};
	
	LevelAction actions[] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning}, 
		{"ERROR", &Harl::error}
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (actions[i].level == level)
		{
			(this->*actions[i].action)();
			return ;
		}
	}
}



