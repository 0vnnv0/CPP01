/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:40:12 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/24 15:24:59 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon): _name(name), _weapon(weapon)
{
	
}

void	HumanA::attack()
{
 std::cout << YELLOW << _name << RESET << " attacks with their " << YELLOW << _weapon.getType() << RESET << std::endl;
}
