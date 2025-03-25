/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:23:58 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/20 13:01:07 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "\033[35mMemory str ‣ \033[0m" << &str << std::endl;
	std::cout << "\033[35mMemory stringPTR ‣ \033[0m" << stringPTR << std::endl;
	std::cout << "\033[35mMemory stringREF ‣ \033[0m" << &stringREF << std::endl << std::endl;
	std::cout << "\033[36mValue of str ‣ \033[0m" << str << std::endl;
	std::cout << "\033[36mValue of stringPTR ‣ \033[0m" << *stringPTR << std::endl; 
	std::cout << "\033[36mValue of stringREF ‣ \033[0m" << stringREF << std::endl;
}
