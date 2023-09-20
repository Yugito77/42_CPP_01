/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:15:24 by hugoo             #+#    #+#             */
/*   Updated: 2022/11/09 15:28:17 by hcherpre         ###   ########.fr       */
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
	std::cout<<"[ DEBUG ]"<<std::endl;
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout<<"I really do !"<<std::endl<<std::endl;
}

void Harl::info()
{
	std::cout<<"[ INFO ]"<<std::endl;
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put "<<std::endl;
	std::cout<<"enough bacon in my burger ! If you did, I wouldn’t be asking for more !"<<std::endl<<std::endl;
}
void Harl::warning()
{
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout<<"I think I deserve to have some extra bacon for free. "<<std::endl;
	std::cout<<"I’ve been coming for years whereas you started working here since last month."<<std::endl<<std::endl;
}

void Harl::error()
{
	std::cout<<"[ ERROR ]"<<std::endl;
	std::cout<<"This is unacceptable ! I want to speak to the manager now."<<std::endl<<std::endl;
}

void Harl::complain(std::string level)
{
	void		(Harl::*ptr_fct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	fct_name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4)
	{
		if(!level.compare(fct_name[i]))
		{
			while(i < 4)
			{
				switch(i)
				{
					case 0 : (this->*ptr_fct[0])();
					break;
					case 1 : (this->*ptr_fct[1])();
					break;
					case 2 : (this->*ptr_fct[2])();
					break;
					case 3 : (this->*ptr_fct[3])();
					break;
				}
				i++;
			}
			return ;
		}
		i++;
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
