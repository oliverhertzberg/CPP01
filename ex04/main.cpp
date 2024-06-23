/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:19:56 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/23 15:23:49 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
    
    std::ifstream infile;
    std::ofstream outfile;
    std::string   buffer;
    size_t        found;
    
    // Number of arguments must be 3
    if (argc != 4) {
        std::cout 
            << "This Program takes 3 arguments" << std::endl
            << "<file> " << "<string1> " << "<string2>" << std::endl
            << "It will replace all occurences of string1 with string2 to in file" 
            << " and write result to file.replace" << std::endl;
        return (1); 
    }
    
    if (std::string(argv[2]).empty()) {
        std::cout << "The string we want to replace cannot be empty!" << std::endl;
        return (1);
    }
    // argv[2] and argv[3] cannot be the same
    if (((std::string)argv[2]).compare(((std::string)argv[3])) == 0) {
        std::cout << "The replacement and the string to be replaced cannot be the same!" << std::endl;
        return (1);
     }

    // opening file to read
    infile.open(argv[1], std::ios::out);
    if (!infile.is_open()) {
        std::cout << "Error opening file\n" << std::endl;
        return (2);
    }
    
    // opening file to write
    outfile.open((argv[1] + (std::string)".replace"));
    if (!outfile.is_open()) {
        std::cout << "Error creating replacement file\n" << std::endl;
        return (3);
    }
    
    // read one line at a time until EOF
    while (getline(infile, buffer)) {
        // if find returns npos, the word we want to replace wasn't found
        if ((found = buffer.find(argv[2])) == std::string::npos)
            outfile << buffer << std::endl;
        else {
            // word found: we read line until first char of word to replace and add the replacement word
            // update buffer to be after the word we replaced
            do {
                outfile << buffer.substr(0, found) + (std::string)argv[3];
                buffer = buffer.substr(found + ((std::string)argv[2]).length());
            }
            while ((found = buffer.find(argv[2])) != std::string::npos);
            // need to read what remains after line contains no more words to replace
            outfile << buffer << std::endl;
        }
    }
    // closing files
    outfile.close();
    infile.close();
}
