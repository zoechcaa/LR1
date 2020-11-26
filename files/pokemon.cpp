#include <iostream>
#include "Pokemon.hpp"

Pokemon::Pokemon(){

}

Pokemon::Pokemon(std::string l_PokemonName){
    m_PokemonName = l_PokemonName;
}

Pokemon::Pokemon(std::string l_PokemonName, int l_PokemonHp){
    m_PokemonName = l_PokemonName;
    m_PokemonHp = l_PokemonHp;
}

Pokemon::Pokemon(std::string l_PokemonName, int l_PokemonHp, int l_PokemonAttack){
    m_PokemonName = l_PokemonName;
    m_PokemonHp = l_PokemonHp;
    m_PokemonAttack = l_PokemonAttack;
}

Pokemon::Pokemon(std::string l_PokemonName, int l_PokemonHp, int l_PokemonAttack, int l_PokemonDefense){
    m_PokemonName = l_PokemonName;
    m_PokemonHp = l_PokemonHp;
    m_PokemonAttack = l_PokemonAttack;
    m_PokemonDefense = l_PokemonDefense;
}

Pokemon::Pokemon(std::string l_PokemonName, int l_PokemonHp, int l_PokemonAttack, int l_PokemonDefense, int l_PokemonSpeed){
    m_PokemonName = l_PokemonName;
    m_PokemonHp = l_PokemonHp;
    m_PokemonAttack = l_PokemonAttack;
    m_PokemonDefense = l_PokemonDefense;
    m_PokemonSpeed = l_PokemonSpeed;
}
Pokemon::~Pokemon(){
}

void Pokemon::setPokemonName(std::string l_PokemonName){
    m_PokemonName = l_PokemonName;
}
void Pokemon::setPokemonHp(int l_PokemonHp){
    m_PokemonHp = l_PokemonHp;
}
void Pokemon::setPokemonAttack(int l_PokemonAttack){
    m_PokemonAttack = l_PokemonAttack;
}
void Pokemon::setPokemonDefense(int l_PokemonDefense){
    m_PokemonDefense = l_PokemonDefense;
}
void Pokemon::setPokemonSpeed(int l_PokemonSpeed){
    m_PokemonSpeed = l_PokemonSpeed;
}

void Pokemon:: print(){
    std::string str = "";

    str += (m_PokemonName != "") ? ("PokemonName: " + getPokemonName() + "\n") : ("");
    str += (m_PokemonHp) ? ("PokemonHP: " + std::to_string(getPokemonHp()) + "\n") : ("");
    str += (m_PokemonAttack) ? ("PokemonAttack: " + std::to_string(getPokemonAttack()) + "\n") : ("");
    str += (m_PokemonDefense) ? ("PokemonDefense: " + std::to_string(getPokemonDefense()) + "\n") : ("");
    str += (m_PokemonSpeed) ? ("PokemonSpeed: " + std::to_string(getPokemonSpeed()) + "\n") : ("");

    std::cout << str;
}


