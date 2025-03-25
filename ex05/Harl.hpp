/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:09:05 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/25 15:16:22 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
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
};

#endif