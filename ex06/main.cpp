/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:35:29 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/23 18:52:36 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    
    Harl        harl;
    std::string input;

    if (argc != 2) {
        std::cout << "Enter log level as argument please!" << std::endl;
        return (1);
    }
    harl.complain(argv[1]);
}