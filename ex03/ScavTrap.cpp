/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:15:47 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/08 18:09:31 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

ScavTrap::ScavTrap(): ClapTrap()
{
    this->_name = "none";
    this->_hit_p = 100;
    this->_energy_p = 50;
    this->_attack_p = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_name = name;
    this->_hit_p = 100;
    this->_energy_p = 50;
    this->_attack_p = 20;
   std::cout << "ScavTrap Parameter constroctur called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & ob)
{
   std::cout << "ScavTrap Copy constroctur called" << std::endl;
    *this = ob;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called " << std::endl;
}

/********************************************************************/


/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

ScavTrap & ScavTrap::operator=(ScavTrap const & ob)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
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
void    ScavTrap::attack(const std::string& target)
{
    if (!_hit_p)
        std::cout << "ScavTrap " << _name << " is already dead." << std::endl;
    else if (!_energy_p)
        std::cout << "ScavTrap " << _name << " doesn't have energy." << std::endl;
    else
    {
       std::cout << "ScavTrap " << _name << " attacks " << target;
       std::cout << ", causing " << _attack_p << " points of damage!" << std::endl;
        --_energy_p;
    }
}

void ScavTrap::guardGate(void) const
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
/**********************************************************************/

std::ostream & operator<<(std::ostream & o, ScavTrap const &ref)
{
    std::cout << GRN << "Display a ScavTrap" << WHT << std::endl;
    std::cout << "Name : " << ref.getName() << std::endl; 
    std::cout << "HP : " << ref.getHP() << std::endl;
    std::cout << "EP : " << ref.getEP() << std::endl;
    std::cout << "AP : " << ref.getAP() << std::endl << std::endl;
    return o;
}