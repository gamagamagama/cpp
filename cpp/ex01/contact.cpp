/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:34:04 by mgavornik         #+#    #+#             */
/*   Updated: 2025/11/07 19:55:49 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
    std::cout << "Contact Constructor" << std::endl;
}

Contact::~Contact()
{
    std::cout << "Contact Destructor" << std::endl;
}
bool Contact::isNumber(const st_str& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]) && str[i] != '+')
            return false;
    }
    return true;
}
bool Contact::isAlpha(const st_str& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isalpha(str[i]) && !isspace(str[i]))
            return false;
    }
    return true;
}
bool Contact::isAlphaNum(const st_str& str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isalnum(str[i]) && !isspace(str[i]))
            return false;
    }
    return true;
}
void Contact::setContact(st_str first_name,
                st_str last_name, 
                st_str nickname, 
                st_str phone_number, 
                st_str darkest_secret)
                {
                    _first_name = first_name;
                    _last_name = last_name;
                    _nickname = nickname;
                    _phone_number = phone_number;
                    _darkest_secret = darkest_secret;
                }