/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:50:07 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/21 23:58:42 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType(){
    return ((const std::string&)(this->type));
}

void Weapon::setType(std::string type){
    this->type = type;
}
