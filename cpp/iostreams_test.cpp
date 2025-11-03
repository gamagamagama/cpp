/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iostreams_test.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:15:12 by mgavornik         #+#    #+#             */
/*   Updated: 2025/09/02 14:17:10 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>

int main(void)
{
    char buffer[512];
    std::cout << "Hello, World!" << std::endl;
    std::cin >> buffer; 
    std::cout << buffer << std::endl;
    return 0;
}