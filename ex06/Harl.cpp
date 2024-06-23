/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:35:33 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/23 18:53:36 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::debug( void ) {
    std::cout 
    << "[ DEBUG ]"
    << "I love having extra bacon for my "
    << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n"
    << std::endl;
}

void    Harl::info( void ) {
    std::cout 
    << "[ INFO ]"
    << "I cannot believe adding extra bacon costs more money. You didn't put "
    << "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
    << std::endl;
}

void    Harl::warning( void ) {
    std::cout
    << "[ WARNING ]"
    << "I think I deserve to have some extra bacon for free. I’ve been coming for "
    << "years whereas you started working here since last month.\n"
    << std::endl;
}

void    Harl::error( void ) {
    std::cout
    << "[ ERROR ]"
    << "This is unacceptable! I want to speak to the manager now.\n"
    << std::endl;
}


void    Harl::complain( std::string level ) {
    
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*actions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    for (int i = 0; i < 4; i++) {
        
        if (level == levels[i]) {
            
            switch (i) {
                case DEBUG:
                (this->*(actions[DEBUG]))();    
                
                case INFO:
                (this->*(actions[INFO]))();

                case WARNING:
                (this->*(actions[WARNING]))();

                case ERROR:
                (this->*(actions[ERROR]))();
                break ;
            }
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}