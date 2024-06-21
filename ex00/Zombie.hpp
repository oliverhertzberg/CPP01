/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:56:53 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/21 19:59:14 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    
    private:
        std::string name;
        
    public:
        Zombie( std::string name);
        Zombie();
        ~Zombie();
    
        void announce();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif