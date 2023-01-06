/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 05:28:10 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/06 05:59:04 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombiz = zombieHorde(5, "room room");

    for (size_t i = 0; i < 5; i++) {
        std::cout << i << " ";
        zombiz[i].announce();
    }

    delete [] zombiz;// interesting
    return (0);
}