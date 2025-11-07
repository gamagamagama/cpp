/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:34:04 by mgavornik         #+#    #+#             */
/*   Updated: 2025/11/07 18:01:26 by mgavorni         ###   ########.fr       */
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