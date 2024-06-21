/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:31:44 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/21 19:55:35 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// default constructor
Zombie::Zombie(){
}

// constructor with name parameter
Zombie::Zombie(std::string name){
    this->name = name;
}

// deconstructor
Zombie::~Zombie(){
}

// announce method
void    Zombie::announce(){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
