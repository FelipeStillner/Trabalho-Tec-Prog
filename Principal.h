#pragma once

#include "Afix.h"
#include "Entidades/Entidade.h"
#include "ClassesAuxiliares/ListaEntes.h"
#include "Entidades/Obstaculo.h"
#include "Entidades/Personagem.h"
#include "Entidades/Projetil.h"
#include "ClassesAuxiliares/GerenciadorGrafico.h"
#include "Entidades/Jogador.h"
#include "Entidades/Inimigo.h"

class Principal
{
private:
  ListaEntes entes;
  GerenciadorGrafico gText;
  sf::RenderWindow w;
  sf::Clock clock;
public:
  Principal();
  ~Principal();
  void executar();
};
