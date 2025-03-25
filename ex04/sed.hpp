/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:39:49 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/25 15:15:59 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#define RED "\033[31m"
#define RESET "\033[0m"

#include <iostream>
#include <string>
#include <fstream>

class Replace
{
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
		std::ifstream _inputFile;
		std::ofstream _outputFile;
	public:
		Replace(std::string const filename, std::string const s1, std::string const s2);
		void processing();
		~Replace();
	};

#endif