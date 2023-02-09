/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:28:03 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/09 12:23:36 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
    ClapTrap a;
    ClapTrap b("test2");
    ClapTrap c("test1");
    ClapTrap d(b);
    ClapTrap *e = new ClapTrap("Test4");

    a = c;

    std::cout << RED << "/----------------------------/" << WHT << std::endl;
    std::cout << GRN << "---------   Test1   ---------" << WHT << std::endl;
    a.attack("objet 1");
    a.beRepaired(10);
    a.attack("objet 2");
    a.beRepaired(10);
    a.attack("objet 3");
    a.beRepaired(10);
    a.attack("objet 4");
    a.beRepaired(100);
    a.attack("objet 5");
    a.beRepaired(100);
    a.attack("objet 6");
    std::cout << a;
    std::cout << GRN << "--------- End Test1 ---------" << WHT << std::endl;
    std::cout << RED << "/----------------------------/" << WHT << std::endl << std::endl;
    
    std::cout << RED << "/----------------------------/" << WHT << std::endl;
    std::cout << GRN << "---------   Test2   ---------" << WHT << std::endl;
    b.takeDamage(8);
    b.attack("objet 5");
    b.takeDamage(1);
    b.beRepaired(100);
    b.takeDamage(10);
    std::cout << b;
    std::cout << GRN << "--------- End Test2 ---------" << WHT << std::endl;
    std::cout << RED << "/----------------------------/" << WHT << std::endl << std::endl;
    std::cout << *e;
    delete(e);

    return(0);
}