/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:40:01 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/24 15:31:00 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name)
{
	
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << BLUE << _name << RESET << " attacks with their " << BLUE << _weapon->getType() << RESET << std::endl;
	else
		std::cout << BLUE << _name << RESET << " attacks without a weapon" << std::endl;
	}
