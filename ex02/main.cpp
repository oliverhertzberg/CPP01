/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:22:35 by ohertzbe          #+#    #+#             */
/*   Updated: 2024/06/21 23:38:54 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(){

    std::string brain_string = "HI THIS IS BRAIN";
    
    // pointers can be initialized to NULL
    // a pointer stores the memory address of another variable
    std::string* stringPTR = &brain_string;

    // references must be initialized at declaration and cannot be reassigned
    // a reference is an alias for another variable
    // doesn't hold memory address, but directly refers to the memory location of the variable
    // it aliases
    // no need for dereferencing, can be used directly to access or modify the value of the aliased
    // variable
    std::string& stringREF = brain_string;

    std::cout << "Memory address of brain_string = " << &brain_string << std::endl;
    std::cout << "Memory address held by stringPTR = " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF = " << &stringREF << std::endl;

    std::cout << "Value of brain_string = " << brain_string << std::endl;
    std::cout << "Value pointed to by stringPTR = " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF = " << stringREF << std::endl;
}
