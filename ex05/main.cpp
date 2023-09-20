/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoo <hugoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:15:17 by hugoo             #+#    #+#             */
/*   Updated: 2022/10/18 15:56:28 by hugoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
    Harl	comment;
	
	comment.complain("DEBUG");
	std::cout<<std::endl;
	comment.complain("INFO");
	std::cout<<std::endl;
	comment.complain("WARNING");
	std::cout<<std::endl;
	comment.complain("ERROR");
}