/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:31:18 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/24 15:23:13 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& str): _type(str) {}

const std::string& Weapon::getType()
{
	return (_type);
}

void Weapon::setType(const std::string& newType)
{
	_type = newType;
}
