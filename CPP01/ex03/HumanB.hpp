/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:56:28 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/07 00:11:13 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    Weapon *weapon;
    std::string name;
    public:
        HumanB(std::string name);
        void attack(void);
        void setWeapon(Weapon& weapon);
        ~HumanB() {}
};