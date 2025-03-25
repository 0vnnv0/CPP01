/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:36:17 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/19 17:14:02 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	n = 7;
	
	Zombie* horde = zombieHorde(n, BLUE "Waldemar");
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
