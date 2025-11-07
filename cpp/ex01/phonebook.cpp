/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:34:40 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/07 20:02:30 by mgavorni         ###   ########.fr       */
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

void PhoneBook::errorHandler(Fields field)
{
    if(field == FIRST_NAME)
    {
        std::cout << "First name must be alpha" << std::endl;
        return(addContact(FIRST_NAME));
    }   
    if(field == LAST_NAME)
    {
        std::cout << "Last name must be alpha" << std::endl;
        return(addContact(LAST_NAME));
    }
    if(field == NICKNAME)
    {
        std::cout << "Nickname could be only alphanumeric" << std::endl;
        return(addContact(NICKNAME));
    }
    if(field == PHONE_NUMBER)
    {
        std::cout << "Phone number must be a number" << std::endl;
        return(addContact(PHONE_NUMBER));
    }
    if(field == DARKEST_SECRET)
    {
        std::cout << "Darkest secret could be alphanumeric" << std::endl;
        return(addContact(DARKEST_SECRET));
    }
    else
        std::cout << "Unknown command" << std::endl;
}

int PhoneBook::addFN(int i, enum Fields field) 
{
    std::cout << "First name: ";
    std::string first_name;
    std::getline(std::cin, first_name);
    if(!Contact::isAlpha(first_name))
        errorHandler(field);
    else
        i++;
    return(i);
}
int PhoneBook::addLN(int i, enum Fields field) 
{
    std::cout << "Last name: ";
    std::string last_name;
    std::getline(std::cin, last_name);
    if(!Contact::isAlpha(last_name))
        errorHandler(field);
    else
        i++;
    return(i);
}
int PhoneBook::addNN(int i, enum Fields field) 
{
    std::cout << "Nickname: ";
    std::string nickname;
    std::getline(std::cin, nickname);
    if(!Contact::isAlphaNum(nickname))
        errorHandler(field);
    else
        i++;
    return(i);
}
int PhoneBook::addPN(int i, enum Fields field) 
{
    std::cout << "Phone number: ";
    std::string phone_number;
    std::getline(std::cin, phone_number);
    if(!Contact::isNumber(phone_number))
        errorHandler(field);
    else
        i++;
    return(i);
}
int PhoneBook::addDS(int i, enum Fields field) 
{ 
    std::cout << "Darkest secret: ";
    std::string darkest_secret;
    std::getline(std::cin, darkest_secret);
    if(!Contact::isAlphaNum(darkest_secret))
        errorHandler(field);
    else
        i++;
    return(i);
}

void PhoneBook::addContact(int identifier) 
{
    int i = identifier;

    if(i == 0)
        i = addFN(i,FIRST_NAME);
    if(i == 1)
        i = addLN(i, LAST_NAME);
    if(i == 2)
        i = addNN(i, NICKNAME);
    if(i == 3)
        i = addPN(i, PHONE_NUMBER);
    if(i == 4)
        i = addDS(i, DARKEST_SECRET);

    if(i == 5)
    {
        std::cout << "Contact added" << std::endl;
        return;
    }
}

void PhoneBook::processCmdADD(Commands Cmd)
{
    std::cout << Cmd << std::endl;
    addContact(0);
}
void PhoneBook::processCmdSEARCH(Commands Cmd)
{
    std::cout << Cmd << std::endl;
    std::cout << "SEARCH\n";
}
void PhoneBook::processCmdEXIT(Commands Cmd)
{
    std::cout << Cmd << std::endl;
    std::cout << "EXIT\n";
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
        errorHandler(EMPTY);
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
            errorHandler(EMPTY);
            break;
    }
}
