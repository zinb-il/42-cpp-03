/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:07:17 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/08 18:11:55 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/
FragTrap::FragTrap(): ClapTrap()
{
    this->_name = "none";
    this->_hit_p = 100;
    this->_energy_p = 100;
    this->_attack_p = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_name = name;
    this->_hit_p = 100;
    this->_energy_p = 100;
    this->_attack_p = 30;
    std::cout << "FragTrap Parameter constroctur called" << std::endl;
}
FragTrap::FragTrap(FragTrap const & ob)
{
     std::cout << "FragTrap Copy constroctur called" << std::endl;
     *this = ob;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called " << std::endl;
}

/********************************************************************/



/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

FragTrap & FragTrap::operator=(FragTrap const & ob)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
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

void    FragTrap::attack(const std::string& target)
{
    if (!_hit_p)
        std::cout << "FragTrap " << _name << " is already dead." << std::endl;
    else if (!_energy_p)
        std::cout << "FragTrap " << _name << " doesn't have energy." << std::endl;
    else
    {
       std::cout << "FragTrap " << _name << " attacks " << target;
       std::cout << ", causing " << _attack_p << " points of damage!" << std::endl;
        --_energy_p;
    }
}

void FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap Hi Fives !!!" << std::endl;
}

/********************************************************************/

std::ostream & operator<<(std::ostream & o, FragTrap const &ref)
{
    std::cout << GRN << "FragTrap a ClapTrap" << WHT << std::endl;
    std::cout << "Name : " << ref.getName() << std::endl; 
    std::cout << "HP : " << ref.getHP() << std::endl;
    std::cout << "EP : " << ref.getEP() << std::endl;
    std::cout << "AP : " << ref.getAP() << std::endl << std::endl;
    return o;
}