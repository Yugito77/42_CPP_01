/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:08:33 by hcherpre          #+#    #+#             */
/*   Updated: 2022/11/09 18:05:37 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	put_in_new_file(std::string *str_file, std::string *file)
{
	std::string replaceFile(".replace");
	std::size_t found = file->rfind(".");

	if (found != std::string::npos)
	{
		file->erase(found, file->size() - found);
		*file = *file + replaceFile;
	}
	else
		*file = *file + replaceFile;
		
	std::ofstream write_file(file->c_str());

	write_file <<*str_file;
}
	
void	change_occurence(std::string *str_file, std::string str1, std::string str2, std::string *file)
{
	std::size_t found = str_file->find(str1);
	
	while (found != std::string::npos)
	{
		str_file->erase(found, str1.size());
		str_file->insert(found, str2);
		found = str_file->find(str1);
	}
	put_in_new_file(str_file, file);
}

void	fill_file(std::string *file, std::string str1, std::string str2)
{
	std::ifstream read_file(file->c_str());
	std::string line;
	int	i = 0;
	
	if (read_file)
	{
		if (!getline(read_file, line))
			std::cout<<"Error, empty file !"<<std::endl;
		read_file.seekg(0, std::ios_base::beg);
		while (getline(read_file, line))
			i++;
		std::string	str_file;
		read_file.close();
		read_file.open(file->c_str());
		i = 0;
		while (getline(read_file, line))
		{
			str_file = str_file + line + "\n";
			i++;
		}
		if (line[0])
			str_file.erase((str_file.size() - 1), 1);
		change_occurence(&str_file, str1, str2, file);
	}
	else
		std::cout<<"Error, inexistant file !"<<std::endl;
	
}

int	main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout<<"Error, incorrect number of arguments!"<<std::endl;
		return(0);
	}
	std::string file(argv[1]);
	std::string str1(argv[2]);
	std::string str2(argv[3]);
	if (str1.empty())
	{
		std::cout<<"Error, the string cannot be empty !"<<std::endl;
		return(0);
	}
	fill_file(&file, str1, str2);
}
