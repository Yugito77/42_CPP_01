/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:57:33 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/14 12:12:33 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{

	public :

	HumanB(std::string name);
	~HumanB();
	void	attack() const;
	void	setWeapon(Weapon &weapon);
	private :

	std::string	s_name;
	Weapon *s_weapon;

};


#endif