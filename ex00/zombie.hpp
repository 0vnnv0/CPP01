/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:39:57 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/19 12:45:01 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Zombie
{
	private: 
			std::string name;
	public:
			Zombie(std::string name);
			~Zombie();
			void announce( void );
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif