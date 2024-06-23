/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:35:31 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/23 18:35:05 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
    private:
        void    debug( void );
        void    info ( void );
        void    warning ( void );
        void    error ( void );
    
    enum {DEBUG, INFO, WARNING, ERROR};
    
    public:
        Harl();
        ~Harl();
        
        void    complain( std::string level );
};


#endif