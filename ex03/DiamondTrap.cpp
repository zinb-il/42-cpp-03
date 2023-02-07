/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:42:50 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/07 21:46:11 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

DiamondTrap::DiamondTrap()
{
    this->_name = "none";
    this->_hit_p = 100;
    this->_energy_p = 100;
    this->_attack_p = 30;
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->_name = name;
    this->_hit_p = 100;
    this->_energy_p = 100;
    this->_attack_p = 30;
    std::cout << "DiamondTrap Parameter constroctur called" << std::endl;
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

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap !!" << std::endl;
}

/********************************************************************/


std::ostream & operator<<(std::ostream & o, ClapTrap const &ref)
{
    std::cout << GRN << "Display a ClapTrap" << WHT << std::endl;
    std::cout << "Name : " << ref.getName() << std::endl; 
    std::cout << "HP : " << ref.getHP() << std::endl;
    std::cout << "EP : " << ref.getEP() << std::endl;
    std::cout << "AP : " << ref.getAP() << std::endl << std::endl;
    return o;
}

