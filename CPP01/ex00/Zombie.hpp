/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 04:45:58 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/06 05:05:16 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie
{
    std::string name;
    public:
        Zombie( std::string name );
        ~Zombie( void );
        void announce( void );
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );
