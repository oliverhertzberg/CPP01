/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:01:06 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/22 19:29:06 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{

    private:
        Weapon*     type;
        std::string name;
        
    public:
        HumanB(const std::string name);
        ~HumanB();
        
        void    setWeapon(Weapon& weapon);
        void    attack();
};

#endif