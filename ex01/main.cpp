/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:25:30 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/13 17:26:24 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	Zombie	*Zombie_2;

	Zombie_2 = zombieHorde(4, "Carl");
	for(int i = 0; i < 4; i++)
        Zombie_2[i].announce();
	delete [] Zombie_2;
    return (0);
}
