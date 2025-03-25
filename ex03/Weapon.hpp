/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:20:03 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/24 15:23:02 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#define YELLOW "\033[33m"
#define BLUE "\033[36m"
#define RESET "\033[0m"

#include <iostream>

class Weapon
{
	private:
			std::string _type;
	public:
			Weapon(const std::string& str);
			const std::string& getType();
			void setType(const std::string& newType);
};

#endif
