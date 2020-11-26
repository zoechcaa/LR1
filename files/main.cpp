#include <iostream>
#include "pokemon.hpp"


int main (){

    //cout « "Initialising" « std::endl;
    Pokemon pokemon1("Fearow", 1000, 2100, 5000, 300);
    pokemon1.print();

    Cat cat("Meowth", 2000);
    cat.setspecialdefense(300);
    cat.setPokemonHp(4000);
    cat.setspecialattack(12345);
    cat.print();
    cat.print_xml();

    Bird bird ("Pidgeotto",5060);
    bird.setPokemonDefense(970);
    bird.setPokemonAttack(5000);
    bird.setPokemonSpeed(100);
    bird.setspecialdefense(700);
    bird.setspecialattack(3800);
    bird.print();
    bird.print_xml();

    Pikachu pikachu ("Pikachu",400);
    pikachu.setPokemonAttack(9200);
    pikachu.setspecialattack(50000);
    pikachu.setspecialdefense(4500);
    pikachu.print();
    pikachu.print_xml();

}


