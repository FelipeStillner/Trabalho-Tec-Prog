#pragma once

#include "Afix.h"
#include "ClassesAuxiliares/ListaEntidades.h"
#include "Entidades/Obstaculo.h"
#include "Entidades/Projetil.h"
#include "Gerenciadores/GerenciadorGrafico.h"
#include "Entidades/Jogador.h"
#include "Entidades/Inimigo.h"
#include "Gerenciadores/GerenciadorEventos.h"
#include "Fase1.h"
#include "Menu.h"

class Principal
{
private:
  Fase* f;
  sf::Clock clock;
public:
  sf::RenderWindow w;
  GerenciadorEventos gEven;
  GerenciadorGrafico gGraf;
  Menu menu;
public:
  Principal();
  ~Principal();
  void executar();
  
};
