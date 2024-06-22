/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:27:19 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/22 19:28:10 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{

    private:
        std::string type;
    
    public:
        Weapon();
        Weapon::Weapon(std::string weapon);
        ~Weapon();
        
        const std::string& getType();
        void               setType(std::string type);
};

#endif