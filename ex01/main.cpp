/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:28:03 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/09 12:37:32 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
    // ScavTrap a;
    // ScavTrap b("test2");
    // ScavTrap c("test1");
    // ScavTrap d(b);

    // a = c;

    // std::cout << RED << "/----------------------------/" << WHT << std::endl;
    // std::cout << GRN << "---------   Test1   ---------" << WHT << std::endl;
    // a.attack("objet 1");
    // a.beRepaired(10);
    // a.attack("objet 2");
    // a.beRepaired(10);
    // a.attack("objet 3");
    // a.beRepaired(10);
    // a.attack("objet 4");
    // a.beRepaired(100);
    // a.attack("objet 5");
    // a.beRepaired(100);
    // a.attack("objet 6");
    // std::cout << a;
    // std::cout << GRN << "--------- End Test1 ---------" << WHT << std::endl;
    // std::cout << RED << "/----------------------------/" << WHT << std::endl << std::endl;
    
    // std::cout << RED << "/----------------------------/" << WHT << std::endl;
    // std::cout << GRN << "---------   Test2   ---------" << WHT << std::endl;
    // b.takeDamage(8);
    // b.attack("objet 5");
    // b.takeDamage(1);
    // b.takeDamage(10);
    // std::cout << b;
    // std::cout << GRN << "--------- End Test2 ---------" << WHT << std::endl;
    // std::cout << RED << "/----------------------------/" << WHT << std::endl << std::endl;

    // std::cout << RED << "/----------------------------/" << WHT << std::endl;
    // std::cout << GRN << "---------   Test3   ---------" << WHT << std::endl;
    // c.takeDamage(1);
    // c.guardGate();
    // std::cout << GRN << "--------- End Test3 ---------" << WHT << std::endl;
    // std::cout << RED << "/----------------------------/" << WHT << std::endl << std::endl;

    // std::cout << RED << "/----------------------------/" << WHT << std::endl;
    // std::cout << GRN << "---------   Test4   ---------" << WHT << std::endl;
    ClapTrap *a = new ScavTrap("test1");
    ScavTrap b("test2");
    ScavTrap c;
    //ScavTrap a("test1");
    //ClapTrap &c = a;

    //c.attack("a");
    std::cout << *a << b << std::endl;
    b.attack("b");
    a->attack("a");
    b.guardGate();
    std::cout << std::endl << *a << b << std::endl;
    delete(a);
    // std::cout << GRN << "--------- End Test4 ---------" << WHT << std::endl;
    // std::cout << RED << "/----------------------------/" << WHT << std::endl << std::endl;
    
    return(0);
}