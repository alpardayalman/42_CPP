/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:28:07 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/07 01:43:10 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout <<  "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;  
}
void Harl::info(void)
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::switchy(std::string str)
{
    std::string	stru[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for(i = 0 ; i < 4 ; i++)
        if (str == stru[i])
            break;
    switch(i)
    {
        case(0):
            this->debug();
        case(1):
            this->info();
        case(2):
            this->warning();
        case(3):
            this->error();
            break;
        default:
         std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}