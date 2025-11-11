/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:34:40 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/10 11:34:09 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "phonebook.hpp"

PhoneBook::PhoneBook(): _contact_count(0)
{
    std::cout << "PB_Constructor" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PB_Destructor" << std::endl;
}


void PhoneBook::inputHandler(Fields field)
{
    if(field == EMPTY)
        std::cout << "Unknown command" << std::endl;       
}
void PhoneBook::contactHeader(void) const
{
    std::cout << std::right << std::setw(COL_WIDTH) << "index";
    std::cout << "|";
    std::cout << std::right << std::setw(COL_WIDTH) << "first name";
    std::cout << "|";
    std::cout << std::right << std::setw(COL_WIDTH) << "last name";
    std::cout << "|";
    std::cout << std::right << std::setw(COL_WIDTH) << "nickname";
    std::cout << "|";
    std::cout << std::endl;
}

void PhoneBook::addContact()
{

    std::string first_name, last_name, nickname, phone_number, darkest_secret;
    
    do {
        std::cout << "First name: ";
        std::getline(std::cin, first_name);
        if (!Contact::isAlpha(first_name) || Contact::isEmpty(first_name)) {
            std::cout << "First name must be alpha" << std::endl;
        }
    } while (!Contact::isAlpha(first_name) || Contact::isEmpty(first_name));
    
    do {
        std::cout << "Last name: ";
        std::getline(std::cin, last_name);
        if (!Contact::isAlpha(last_name) || Contact::isEmpty(last_name)) {
            std::cout << "Last name must be alpha" << std::endl;
        }
    } while (!Contact::isAlpha(last_name) || Contact::isEmpty(last_name));
    
    do {
        std::cout << "Nickname: ";
        std::getline(std::cin, nickname);
        if (!Contact::isAlphaNum(nickname) || Contact::isEmpty(nickname)) {
            std::cout << "Nickname could be only alphanumeric" << std::endl;
        }
    } while (!Contact::isAlphaNum(nickname) || Contact::isEmpty(nickname));
    
    do {
        std::cout << "Phone number: ";
        std::getline(std::cin, phone_number);
        if (!Contact::isNumber(phone_number) || Contact::isEmpty(phone_number)) {
            std::cout << "Phone number must be a number" << std::endl;
        }
    } while (!Contact::isNumber(phone_number) || Contact::isEmpty(phone_number));
    
    do {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, darkest_secret);
        if (!Contact::isAlphaNum(darkest_secret) || Contact::isEmpty(darkest_secret)) {
            std::cout << "Darkest secret could be alphanumeric" << std::endl;
        }
    } while (!Contact::isAlphaNum(darkest_secret) || Contact::isEmpty(darkest_secret));
    
    _contacts[_contact_count].setContact(first_name, last_name, nickname, phone_number, darkest_secret);
    _contact_count++;
    
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContact()
{
    for (size_t i = 0; i < _contact_count; i++) {
        std::cout << _contacts[i].getFirstName() << std::endl;
        std::cout << _contacts[i].getLastName() << std::endl;
        std::cout << _contacts[i].getNickName() << std::endl;
        std::cout << _contacts[i].getPhoneNumber() << std::endl;
        std::cout << _contacts[i].getDarkestSecret() << std::endl;
    }
}
void PhoneBook::processCmdADD(Commands Cmd)
{
    std::cout << Cmd << std::endl;
    addContact();
}
void PhoneBook::processCmdSEARCH(Commands Cmd)
{
    std::cout << Cmd << std::endl;
    std::cout << "SEARCH\n";
    contactHeader();
    searchContact();
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
        inputHandler(EMPTY);
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
            inputHandler(EMPTY);
            break;
    }
}
