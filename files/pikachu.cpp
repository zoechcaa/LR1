#include <iostream>
#include <fstream>
#include "pokemon.hpp"

Pikachu::Pikachu(std::string l_PokemonName, int l_PokemonHp) : Pokemon(l_PokemonName, l_PokemonHp)
{}

Pikachu::Pikachu(std::string l_PokemonName, int l_PokemonHp, int l_PokemonAttack, int l_PokemonDefense, int l_PokemonSpeed, int l_specialattack) : Pokemon(l_PokemonName, l_PokemonHp, l_PokemonAttack, l_PokemonDefense, l_PokemonSpeed)
{
    m_specialattack = l_specialattack;
}

Pikachu::Pikachu(std::string l_PokemonName, int l_PokemonHp, int l_PokemonAttack, int l_PokemonDefense, int l_PokemonSpeed, int l_specialattack, int l_specialdefense) : Pokemon(l_PokemonName, l_PokemonHp, l_PokemonAttack, l_PokemonDefense, l_PokemonSpeed)
{
    m_specialattack = l_specialattack;
    m_specialdefense = l_specialdefense;
}

void Pikachu::setspecialattack (int l_specialattack){
    m_specialattack = l_specialattack;
}

void Pikachu::setspecialdefense (int l_specialdefense){
    m_specialdefense = l_specialdefense;
}
void Pikachu::print_xml(){
std::ofstream pikachu1;
    pikachu1.open("pokemons.txt", std::ios::app);
    if(!pikachu1.is_open()){
        std::cout<<"Error open file"<< std::endl;
    }
    else{
        pikachu1 <<"\t<pokemon name="<< getPokemonName()<<">\n";
        pikachu1 <<"\t\t<hp>"<< getPokemonHp()<<"</hp>\n";
        pikachu1 <<"\t\t<attack>"<< getPokemonAttack()<<"</attack>\n";
        pikachu1 <<"\t\t<defense>"<< getPokemonDefense()<<"</defense>\n";
        pikachu1 <<"\t\t<speed>"<< getPokemonSpeed()<<"</speed>\n";
        pikachu1 <<"\t\t<special attack>"<< getspecialattack()<<"</special attack>\n";
        pikachu1 <<"\t\t<special defense>"<< getspecialdefense()<<"</special defense>\n";
        pikachu1 <<"\t</pokemon>\n";
        pikachu1 <<"</pokemons>\n\n";
    }
    pikachu1.close();
}

void Pikachu::print(){
    std::string str = "";

    str += (m_PokemonName != "") ? ("PikachuName: " + getPokemonName() + "\n") : ("");
    str += (m_PokemonHp) ? ("HP: " + std::to_string(getPokemonHp()) + "\n") : ("");
    str += (m_PokemonAttack) ? ("Attack: " + std::to_string(getPokemonAttack()) + "\n") : ("");
    str += (m_PokemonDefense) ? ("Defense: " + std::to_string(getPokemonDefense()) + "\n") : ("");
    str += (m_PokemonSpeed) ? ("Speed: " + std::to_string(getPokemonSpeed()) + "\n") : ("");
    str += (m_specialattack) ? ("SpecialAttack: " + std::to_string(getspecialattack()) + "\n") : ("");
    str += (m_specialdefense) ? ("SpecialDefense: " + std::to_string(getspecialdefense())+ "\n") : ("");

    std::cout << str;
}
