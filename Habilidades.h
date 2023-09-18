#ifndef HABILIDADES_H
#define HABILIDADES_H
#include"Elementos.h"
#include<string>

struct habilidad{
	struct elemento primario;
	struct elemento secundario;
	std::string nombre;
	int stamina;
	//Animacion animacion
	//Mesh mesh
};

const struct habilidad FIREBALL = {FUEGO, TIERRA,"Fireball",50};


#endif
