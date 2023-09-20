/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:59:00 by hcherpre          #+#    #+#             */
/*   Updated: 2022/11/09 15:32:58 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*Zombie_2;

	Zombie_2 = newZombie("Carl");
	Zombie_2->announce();
	randomChump("Johnny");
	delete Zombie_2;
    return (0);
}
