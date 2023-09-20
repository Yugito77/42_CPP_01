/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:24:34 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/13 17:24:48 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout<<"Zombie created!"<<std::endl;
}

void    Zombie::announce(void) const
{
    std::cout<<s_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::setName(std::string nameZombie)
{
    s_name = nameZombie;
}

Zombie::~Zombie()
{
    std::cout<<s_name<<" is dead!"<<std::endl;
}
