/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:35:29 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/23 18:25:01 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    
    Harl Haaaaaaaarl;

    Haaaaaaaarl.complain("");
    std::cout << std::endl;
    
    Haaaaaaaarl.complain("DEBUG");
    std::cout << std::endl;

    Haaaaaaaarl.complain("INFO");
    std::cout << std::endl;

    Haaaaaaaarl.complain("WARNING");
    std::cout << std::endl;

    Haaaaaaaarl.complain("ERROR");
    std::cout << std::endl;
}