/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:42:43 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/05 19:08:27 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "default constructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    Name = name;
    Hit = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout<< "constructor called !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &coming) {
    *this = coming;
    std::cout<<"Copy constructor called" <<std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &comming){
    Name = comming.Name;
    Hit= comming.Hit;
    Energy_points = comming.Energy_points;
    Attack_damage = comming.Attack_damage;
    std::cout<< "assigne called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout<< "destructor called !" << std::endl;
}

//seters && getrs


void ClapTrap::SetName(std::string name) {
    Name = name;
}

void ClapTrap::SetHit(int hit) {
    Hit = hit;
}

void ClapTrap::SetEnery_point(int energypoint) {
    Energy_points = energypoint;
}

void ClapTrap::SetAttack_damage(int attackdamage) {
    Attack_damage = attackdamage;
}

std::string ClapTrap::getName(void) {
    return (this->Name);
}

int ClapTrap::getHit(void) {
    return (this->Hit);
}

int ClapTrap::getEnergy_point(void) {
    return (this->Energy_points);
}

int ClapTrap::getAttck_damage(void) {
    return (this->Attack_damage);
}

//other memmber fonctions
void ClapTrap::attack(const std::string& target){
    std::cout<<"ClapTrap "<< this->Name << " attack " << target << ",";
    this->Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "causing " << amount<<" points of damage!";
    this->Attack_damage += amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (Hit)
    {
        Attack_damage -= amount;
        this->Energy_points--;
    }
    else
        std::cout<< this->Name << "cant be repaired" << std::endl;

}

// std::ostream &operator << (std::ostream &os, const ClapTrap &a);
