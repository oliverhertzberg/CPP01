/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:45:47 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/21 23:59:08 by ohertzbe         ###   ########.fr       */
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
        ~Weapon();
        
        const std::string& getType();
        void               setType(std::string type);
};

#endif