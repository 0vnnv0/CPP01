/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:35:40 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/25 15:15:59 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cerr << RED << "Error! Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	Replace sed(argv[1], argv[2], argv[3]);
	sed.processing();
	return (0);
}
