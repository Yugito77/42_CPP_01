/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:57:25 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/14 12:17:03 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : s_name(name)
{
}

void    HumanB::attack() const
{
    std::cout<<s_name<<"  attacks with their "<<s_weapon->getType()<<std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
    s_weapon = &weapon;
}

HumanB::~HumanB()
{
}