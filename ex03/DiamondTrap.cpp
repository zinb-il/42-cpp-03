/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:42:50 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/09 11:34:31 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

DiamondTrap::DiamondTrap():ClapTrap(), FragTrap(), ScavTrap()
{
    _name = "none";
    _hit_p = FragTrap::HP;
    _energy_p = FragTrap::EP;
    _attack_p = FragTrap::AP;
    std::cout << "DiamondTrap Default constructor called "<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "__clap_name"), 
FragTrap(name + "__clap_name"), ScavTrap(name + "__clap_name")
{
    _name = name;
    _hit_p = FragTrap::HP;
    _energy_p = FragTrap::EP;
    _attack_p = FragTrap::AP;
    std::cout << "DiamondTrap Parameter constroctur called " << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &ob)
{
    std::cout << "DiamondTrap Copy constroctur called" << std::endl;
    *this = ob;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called " << std::endl;
}
/********************************************************************/



/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &ob)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    this->_name = ob.getName();
    this->_hit_p = ob.getHP();
    this->_energy_p = ob.getEP();
    this->_attack_p = ob.getAP();
    return (*this);
}

/********************************************************************/


/********************************************************************/
/*                          Public functions                        */
/********************************************************************/

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap !!" << std::endl;
}

/********************************************************************/


std::ostream & operator<<(std::ostream & o, DiamondTrap const &ref)
{
    std::cout << GRN << "Display a DiamondTrap" << WHT << std::endl;
    std::cout << "Name : " << ref.getName() << std::endl;
    std::cout << "HP : " << ref.getHP() << std::endl;
    std::cout << "EP : " << ref.getEP() << std::endl;
    std::cout << "AP : " << ref.getAP() << std::endl << std::endl;
    return o;
}

