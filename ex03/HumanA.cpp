/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:57:09 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/13 18:44:39 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): s_name(name), s_weapon(weapon)
{
}

void    HumanA::attack() const
{
    std::cout<<s_name<<"  attacks with their "<<s_weapon.getType()<<std::endl;
}

HumanA::~HumanA()
{
}