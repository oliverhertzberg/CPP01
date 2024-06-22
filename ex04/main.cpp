/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:19:56 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/22 21:58:09 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv){
    
    std::ifstream infile;
    std::ofstream outfile;
    std::string   buffer;
    
    if (argc != 4){
        std::cout 
            << "This Program takes 3 arguments" << std::endl
            << "<file> " << "<string1> " << "<string2>" << std::endl
            << "It will replace all occurences of string1 with string2 to in file" << std::endl;
        return (1); 
    }

    infile.open(argv[1], std::ios::out);
    if (!infile.is_open()){
        std::cout << "Error opening file\n" << std::endl;
        return (2);
    }
    
    outfile.open((argv[1] + (std::string)".replace"));
    if (!outfile.is_open()){
        std::cout << "Error creating replacement file\n" << std::endl;
        return (3);
    }
    
    while (getline(infile, buffer)){
        
    }

    
    outfile.close();
    infile.close();
}