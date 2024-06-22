/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:04:18 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/22 19:00:19 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// constructor
HumanA::HumanA(std::string name, Weapon& weapon) : name(name), type(weapon){}

// deconstructor
HumanA::~HumanA(){}


// method
void    HumanA::attack(){
    std::cout << this->name << " attacks with their " <<  this->type.getType()
              << std::endl;
}

