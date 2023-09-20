/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoo <hugoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:15:31 by hugoo             #+#    #+#             */
/*   Updated: 2022/10/18 14:23:54 by hugoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{

    public:
   
    Harl();
    ~Harl();
	void complain(std::string level);
	
    private:
    void debug();
    void info();
    void warning();
    void error();

};

#endif