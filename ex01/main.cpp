/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:06:08 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/21 20:41:56 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    
    Zombie* Horde;
    int N = 10;

    Horde = zombieHorde(N, "BOT");
    for (int i = 0; i < N; i++){
        Horde[i].announce();   
    }
    
    delete[] (Horde);
}
