/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:56:24 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/06 23:25:25 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    Weapon *weapon;
    std::string name;
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack(void);
        ~HumanA() {}
};