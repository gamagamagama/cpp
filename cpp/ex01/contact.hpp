/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:41:52 by mgavornik         #+#    #+#             */
/*   Updated: 2025/11/04 14:18:20 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

typedef std::string st_str;

/**
    first name, last name, nickname, phone number, and
    darkest secret. A saved contact can’t have empty fields
*/
class Contact
{
    public:
        Contact();
        ~Contact();
        
        void setContact(st_str first_name,
                        st_str last_name, 
                        st_str nickname, 
                        st_str phone_number, 
                        st_str darkest_secret);
    
        st_str getFirstName() const;
        st_str getLastName() const;
        st_str getNickName() const;
        st_str getPhoneNumber() const;
        st_str getDarkestSecret() const;
    private:
        st_str  _first_name, 
                _last_name, 
                _nickname, 
                _phone_number, 
                _darkest_secret;
};