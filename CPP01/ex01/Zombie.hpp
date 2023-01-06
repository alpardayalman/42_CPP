/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 05:28:16 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/06 05:55:56 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie
{
    std::string name;
    public:
        Zombie( void );
        ~Zombie( void );
        void announce( void );
        void setName( std::string name);
};

Zombie* zombieHorde( int N, std::string name );
