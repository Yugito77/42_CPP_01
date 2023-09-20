/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:15:17 by hugoo             #+#    #+#             */
/*   Updated: 2022/10/19 12:02:07 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int main(int argc, char **argv)
{
	Harl	comment;

	if (argc != 2)
	{
		std::cout<<"Wrong number of arguments !"<<std::endl;
		return (0);
	}
	comment.complain(argv[1]);
}