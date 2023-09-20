/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:57:16 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/13 18:44:54 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{

	public :

	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack() const;
	
	private :

	std::string	s_name;
	Weapon& s_weapon;

};

#endif