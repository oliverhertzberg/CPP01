/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:50:07 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/22 19:24:56 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string weapon){
    this->type = weapon;
}

Weapon::~Weapon(){}

const std::string& Weapon::getType(){
    return ((const std::string&)(this->type));
}

void Weapon::setType(std::string type){
    this->type = type;
}
