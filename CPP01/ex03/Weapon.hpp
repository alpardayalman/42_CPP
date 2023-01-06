/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:56:33 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/06 23:42:38 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>


class Weapon 
{
    std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string getType(void) const;
        void setType(std::string);
};
