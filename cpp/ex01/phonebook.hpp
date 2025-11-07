/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:26:55 by mgavornik         #+#    #+#             */
/*   Updated: 2025/11/07 18:22:59 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"


class PhoneBook
{
    public:
        PhoneBook(); //constructor
        ~PhoneBook(); //destructor
            
        enum Fields {
            INDEX = 0,
            FIRST_NAME,
            LAST_NAME,
            NICKNAME,
            PHONE_NUMBER,
            DARKEST_SECRET,
            COUNT
        };
        
        enum Commands {
            ADD = 0,
            SEARCH,
            EXIT
        };
        void errorHandler(void);
        void addContact();
        void searchContact();
        void processCmd(std::string& cmd);
        void processCmdADD(Commands cmd);
        void processCmdSEARCH(Commands cmd);
        void processCmdEXIT(Commands cmd);
        
    private:
        enum {COL_WIDTH = 10};
        Contact _contacts[8];
        size_t  _contact_count;

        /**  
            list of 4 columns: index, first name, last name and nickname.
            Each column must be 10 characters wide. A pipe character (’|’) separates
            them. The text must be right-aligned. If the text is longer than the column,
            it must be truncated and the last displayable character must be replaced by a
            dot (’.’).
            ◦ Then, prompt the user again for the index of the entry to display. If the index
            is out of range or wrong, define a relevant behavior. Otherwise, display the
            contact information, one field per line.
        */
        void contactHeader() const; 
        void displayContact(int index) const;
};

#endif