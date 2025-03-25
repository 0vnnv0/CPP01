/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:21:08 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/25 15:49:24 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#define RED "\033[31m"
#define PINK "\033[35m"
#define RESET "\033[0m"

#include <iostream>

class Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
	int enumlevel(const std::string &level);
};


#endif