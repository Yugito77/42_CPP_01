/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:45:40 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/13 18:09:25 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : s_type(type)
{
}

std::string	Weapon::getType() const
{
	return s_type;	
}

void	Weapon::setType(std::string newType)
{
		s_type = newType;
}

Weapon::~Weapon()
{
}