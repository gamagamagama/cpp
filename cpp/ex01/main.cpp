/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:34:56 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/07 18:11:44 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    PhoneBook PB;
    std::string input;
    while(true){
        std::getline(std::cin, input);
        if(input.compare("EXIT") == 0)
            break;
        
        PB.processCmd(input);
    }
    return(0);
}