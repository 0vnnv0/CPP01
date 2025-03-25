/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:22:12 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/25 15:28:58 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	
	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cerr << RED << "Error! Usage: ./harlFilter <COMPLAINT>" << std::endl;
	return (0);
}