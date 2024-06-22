/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:02:04 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/22 19:49:54 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// constructor with initializer list
HumanB::HumanB(std::string name) : name(name), type(nullptr){}

// deconstructor
HumanB::~HumanB(){}

void    HumanB::attack(){
    std::cout << this->name << " attacks with their ";
    if (this->type != nullptr)
        std::cout << this->type->getType() << std::endl;
    else
        std::cout << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon){
    this->type = &weapon;
}