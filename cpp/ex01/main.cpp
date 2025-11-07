/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:34:56 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/07 17:43:57 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "phonebook.hpp"

int main(void)
{
    PhoneBook PB;
    std::string input;
    while(true){
        std::cin >> input;
        if(input.compare("EXIT") == 0)
            break;
        
        PB.processCmd(input);
    }
    return(0);
}