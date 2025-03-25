/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:49:36 by anschmit          #+#    #+#             */
/*   Updated: 2025/03/25 15:15:59 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void Replace::processing()
{
	std::string	line;
	int	flag = 1;
	
	while (std::getline(_inputFile, line))
	{
		size_t pos = 0;

		while ((pos = line.find(_s1, pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length());
			pos += _s2.length();
			flag = 0;
		}
		_outputFile << line << std::endl;
	}
	if (flag == 1)
	{
		std::cout << RED << "Error! File doesn't include: " << _s1 << std::endl;
	}
}

Replace::Replace(std::string const filename, std::string const s1, std::string const s2): _filename(filename), _s1(s1), _s2(s2), _inputFile(filename.c_str()), _outputFile((filename + ".replace").c_str())
{
	if (s1.empty() || s2.empty())
	{
		std::cerr << RED << "Error! s1 or s2 empty!" << std::endl;
		return ;
	}
	if (s1 == s2)
	{
		std::cerr << RED << "Error! s1 and s2 are the same!" << std::endl;
		return ;
	}
	if (!_inputFile.is_open())
	{
		std::cerr << RED << "Error! File is empty!" << std::endl;
		return ;
	}
	if (!_outputFile.is_open())
	{
		std::cerr << RED << "Error creating output file!" << std::endl;
		return ;
	}
}

Replace::~Replace()
{
	_inputFile.close();
	_outputFile.close();
}
