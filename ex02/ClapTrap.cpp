/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:44:12 by ziloughm          #+#    #+#             */
/*   Updated: 2023/02/08 12:21:53 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"


/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

ClapTrap::ClapTrap():_name("none"), _hit_p(10), _energy_p(10), _attack_p(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hit_p(10), _energy_p(10), _attack_p(0)
{
    std::cout << "ClapTrap Parameter constroctur called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ob)
{
    std::cout << "ClapTrap Copy constroctur called" << std::endl;
    *this = ob;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called " << std::endl;
}
/********************************************************************/



/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

ClapTrap & ClapTrap::operator=(ClapTrap const &ob)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
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
void    ClapTrap::attack(const std::string& target)
{
    if (!_hit_p)
        std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
    else if (!_energy_p)
        std::cout << "ClapTrap " << _name << " doesn't have energy." << std::endl;
    else
    {
       std::cout << "ClapTrap " << _name << " attacks " << target;
       std::cout << ", causing " << _attack_p << " points of damage!" << std::endl;
        --_energy_p;
    }
}


void    ClapTrap::takeDamage(unsigned int amount)
{
    if (!_hit_p)
        std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
    else if (_hit_p <= amount)
    {
        std::cout << "ClapTrap " << _name << " is dead." << std::endl;
        _hit_p = 0;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " takes damage of ";
        std::cout  << amount << " points!" << std::endl;
        _hit_p -= amount;
    }
}


void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!_hit_p)
        std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
    else if (!_energy_p)
        std::cout << "ClapTrap " << _name << " doesn't have energy." << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name << " is repaired by ";
        std::cout  << amount << " points!" << std::endl;
        --_energy_p;
        _hit_p += amount;
        if (_hit_p > 10)
            _hit_p = 10;
    }
}
/********************************************************************/



/********************************************************************/
/*                          Getters functions                       */
/********************************************************************/


std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

unsigned int ClapTrap::getHP(void) const
{
    return (this->_hit_p);
}

unsigned int ClapTrap::getEP(void) const
{
    return (this->_energy_p);
}

unsigned int ClapTrap::getAP(void) const
{
    return (this->_attack_p);
}

/********************************************************************/


/********************************************************************/
/*                          Setters functions                       */
/********************************************************************/


void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHP(unsigned int hp)
{
    this->_hit_p = hp;
}

void ClapTrap::setEP(unsigned int ep)
{
    this->_energy_p = ep;
}

void ClapTrap::setAP(unsigned int ap)
{
    this->_attack_p = ap;
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

