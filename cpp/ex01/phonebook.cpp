/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:34:40 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/07 17:39:00 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "PB_Constructor" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PB_Destructor" << std::endl;
}

void PhoneBook::errorHandler(void)
{
    std::cout << "Unknown command" << std::endl;
}

void PhoneBook::processCmdADD(Commands Cmd)
{
    std::cout << Cmd << std::endl;
    std::cout << "ADD";
}
void PhoneBook::processCmdSEARCH(Commands Cmd)
{
    std::cout << Cmd << std::endl;
    std::cout << "SEARCH";
}
void PhoneBook::processCmdEXIT(Commands Cmd)
{
    std::cout << Cmd << std::endl;
    std::cout << "EXIT";
}
void PhoneBook::processCmd(std::string& cmd)
{
    Commands selectedCmd;
    
    if (cmd.compare("ADD") == 0) {
        selectedCmd = ADD;
    } else if (cmd.compare("SEARCH") == 0) {
        selectedCmd = SEARCH;
    } else if (cmd.compare("EXIT") == 0) {
        selectedCmd = EXIT;
    } else {
        errorHandler();
        return;
    }
    
    switch(selectedCmd)
    {
        case ADD:
            processCmdADD(ADD);
            break;
        case SEARCH:
            processCmdSEARCH(SEARCH);
            break;
        case EXIT:
            processCmdEXIT(EXIT);
            break;
        default:
            errorHandler();
            break;
    }
}
