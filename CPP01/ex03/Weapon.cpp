/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:56:31 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/06 23:32:43 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType(void) const
{
	return (this->type);
}

void Weapon::setType(std::string new_weapon)
{
	this->type = new_weapon;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::~Weapon(void)
{
	
}
