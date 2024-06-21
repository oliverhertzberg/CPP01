/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:06:24 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/21 20:39:43 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){

    if (N <= 0)
        return (nullptr);

    Zombie* Horde = new Zombie[N];

    for (int i = 0; i < N; i++){
        Horde[i] = Zombie(name);
    }
    
    return(Horde);
}
