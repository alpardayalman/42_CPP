/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 04:17:59 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/06 04:18:03 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int PhoneBook::getNumInput()
{
    int a;
    std::cin >> a;
    if (std::cin.fail())
    {
        std::cout << "Wrong Choice. Enter again " << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return (-1);
    }
    return (a);
}