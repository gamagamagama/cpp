/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:34:56 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/07 16:21:58 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void errorHandler(void)
{
    ;
}

void processCmdADD(Commands Cmd)
{
    std::cout << "ADD";
}
void processCmdSEARCH(Commands Cmd)
{
    std::cout << "SEARCH";
}
void processCmdEXIT(Commands Cmd)
{
    std::cout << "EXIT";
}
void processCmd(std::string& cmd)
{
    
    switch(Commands)
    {
        case ADD:
            if(string.compare("ADD"))
            {
                processCmdADD(ADD);
                break;
            }
        case SEARCH:
            if(string.compare("SEARCH"))
            {
                processCmdSEARCH(SEARCH);
                break;
            }
        case EXIT:
            if(string.compare("EXIT"))
            {
                processCmdEXIT(EXIT);
                break;
            }
        default:
            errorHandler();
            break;
    }
}


int main(void)
{
    string input;
    std::cin >> input;
    validateCmd(input);
}