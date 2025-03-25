/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:38:48 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/19 16:16:19 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
	std::cout << name << ": \033[31mDestroyed!\033[0m" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": \033[36mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}
