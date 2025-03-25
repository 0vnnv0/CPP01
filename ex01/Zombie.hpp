/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:12:20 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/25 15:15:59 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#define RED "\033[31m"
#define BLUE "\033[36m"
#define RESET "\033[0m"

#include <iostream>
#include <new>

class Zombie
{
	private:
			std::string	name;
	public:	
			Zombie();
			~Zombie();
			void announce();
			void set_name(std::string name);

};

Zombie* zombieHorde(int n, std::string name);

#endif