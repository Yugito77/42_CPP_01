/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:58:26 by hcherpre          #+#    #+#             */
/*   Updated: 2022/11/09 15:34:16 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
    public :
	
	Zombie(std::string name);
	~Zombie();
	void announce(void) const;
	
	private :

	std::string	name;
    
};

void randomChump( std::string name );
Zombie*	newZombie(std::string name);

#endif