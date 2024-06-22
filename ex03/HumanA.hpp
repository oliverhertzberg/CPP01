/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:59:25 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/22 19:29:28 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{

    private:
        Weapon&     type;
        std::string name;
        
    public:
        HumanA(const std::string name, Weapon& weapon);
        ~HumanA();
        
        void    attack();
};

#endif