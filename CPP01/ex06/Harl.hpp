/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 01:28:09 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/07 01:42:12 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string.h>

class Harl
{
    public:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        void switchy(std::string str);
};