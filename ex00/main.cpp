/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:38:25 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/19 16:16:57 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int	main()
{
	randomChump("Stacki");
	Zombie*	heapZombie = newZombie("Heapi");
	heapZombie->announce();
	delete heapZombie;
	return (0);
}
