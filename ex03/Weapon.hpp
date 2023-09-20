/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:45:48 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/13 18:09:34 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class   Weapon
{

	public :
	
	Weapon(std::string type);
	~Weapon();
	std::string getType() const;
	void		setType(std::string newType);

	private :

	std::string	s_type;
	
};

#endif