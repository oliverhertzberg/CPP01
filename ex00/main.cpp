/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:31:34 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/21 19:55:25 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main( void ){
    
    Zombie* Zombieptr;
    
    Zombieptr = newZombie("SilentZombie");

    // randomChump creates Zombie with name and calls announce member function
    randomChump("AnnouncerZombie");

    // newZombie function returns pointer to createad zombie that we then can access and call its member function
    Zombieptr->announce();

    free (Zombieptr);   
}
