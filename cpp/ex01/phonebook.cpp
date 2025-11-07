/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:34:40 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/07 18:28:35 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
void PhoneBook::addContact(void) 
{
    Fields fields;
    int i;
    
    std::cout << "First name: ";
    std::string first_name;
    fields = FIRST_NAME;
    std::getline(std::cin, first_name);
    i = FIRST_NAME;

    std::cout << "Last name: ";
    std::string last_name;
    fields = LAST_NAME;
    std::getline(std::cin, last_name);
    i = LAST_NAME;
    
    std::cout << "Nickname: ";
    std::string nickname;
    fields = NICKNAME;
    std::getline(std::cin, nickname);
    i = NICKNAME;
    
    std::cout << "Phone number: ";
    std::string phone_number;
    fields = PHONE_NUMBER;
    std::getline(std::cin, phone_number);
    i = PHONE_NUMBER;
    
    std::cout << "Darkest secret: ";
    std::string darkest_secret;
    fields = DARKEST_SECRET;
    std::getline(std::cin, darkest_secret);
    i = DARKEST_SECRET;
    if(i ==  )
        processCmdEXIT(EXIT);
    
}

void PhoneBook::processCmdADD(Commands Cmd)
{
    std::cout << Cmd << std::endl;

    addContact();
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
