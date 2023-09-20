/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoo <hugoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:15:24 by hugoo             #+#    #+#             */
/*   Updated: 2022/10/18 15:58:06 by hugoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout<<"I really do !"<<std::endl;
}

void Harl::info()
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put ";
	std::cout<<"enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<<std::endl;
}
void Harl::warning()
{
	std::cout<<"I think I deserve to have some extra bacon for free. ";
	std::cout<<"I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error()
{
	std::cout<<"This is unacceptable ! I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level)
{
	void		(Harl::*ptr_fct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	fct_name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for(i = 0; i < 4; i++)
	{
		if (level == fct_name[i])
			(this->*ptr_fct[i])();
	}
}