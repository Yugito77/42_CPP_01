/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:46:44 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/17 13:48:42 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <fstream>
#include <string>

void	fill_file(std::string *file, std::string str1, std::string str2);
void	change_occurence(std::string *str_file, std::string str1, std::string str2, std::string *file);
void	put_in_new_file(std::string *str_file, std::string *file);

#endif