/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:31:27 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/13 18:59:10 by mgavorni         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "inc.hpp"

void handle_error(int type) {
    if(type == 1)
        std::cout << "Error: not enough arguments" << std::endl;
    if(type == 2)
        std::cout << "Error: too many arguments" << std::endl;
    
}
void process_input(char **av1, char **av2, char **av3) {
    std::string s1 = *av1;
    std::string s2 = *av2;
    std::string s3 = *av3;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
}

int main (int ac, char **av)
{
    if(ac == 4)
        process_input(&av[1], &av[2], &av[3]);
    else if(ac > 4)
        handle_error(2);
    else if(ac < 4)
        handle_error(1);
    return 0;     
}