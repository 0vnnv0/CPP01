/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:33:43 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/19 16:56:09 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	int	i = 0;
	
	Zombie* zombies = new Zombie[n];
	while (i < n)
	{
		zombies[i].set_name(name);
		i++;
	}
	return (zombies);
}
