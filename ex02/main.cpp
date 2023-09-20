/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:28:19 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/13 17:40:50 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string brain("HI THIS IS BRAIN");
    
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;
    
    std::cout<<"adresse brain :     "<<&brain<<std::endl;
    std::cout<<"adresse stringPTR : "<<stringPTR<<std::endl;
    std::cout<<"adresse stringREF : "<<&stringREF<<std::endl;
    std::cout<<std::endl;
    std::cout<<"valeur brain :     "<<brain<<std::endl;
    std::cout<<"valeur stringPTR : "<<*stringPTR<<std::endl;
    std::cout<<"valeur stringREF : "<<stringREF<<std::endl;
}