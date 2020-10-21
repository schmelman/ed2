#include "grafo.hpp"

/**
 * @brief inicia um grafo vazio com nvert vértices
 * @param nvert
 * @return 
 */
int Grafo::iniciaGrafo(int nvert) {
	this->vertices = nvert;
	this->matriz = (int**)malloc(this->vertices * sizeof(int*));
	if(this->matriz == NULL) return false;

	for(int i = 0; i < this->vertices; i++) {
		this->matriz[i] = (int*)malloc(this->vertices * sizeof(int));
		if(this->matriz[i] == NULL) return false;
	}

	for(int i = 0; i < this->vertices; i++)
		for(int j = 0; j < this->vertices; j++)
			this->matriz[i][j] = PESO_DEF;
	return true;
}

/**
 * @brief verifica se uma aresta existe
 * @param v1
 * @param v2
 * @return 
 */
int Grafo::checaAresta(int v1, int v2, bool peso = false) {
	int i = 0;
	while(i != this->arestas.size()) {
		if((peso && (this->arestas[i].v1 == v1 && this->arestas[i].v2 == v2)) || 
				((this->arestas[i].v1 == v1 && this->arestas[i].v2 == v2) || (this->arestas[i].v1 == v2 && this->arestas[i].v2 == v2)))
			return true;
		i++;
	}
	return false;
}

/**
 * @brief insere uma aresta conectando os vértices v1 e v2
 * @param v1
 * @param v2
 * @return 
 */
int Grafo::inserirAresta(int v1, int v2, int peso = -1) {
	if(v1 > this->vertices || v2 > this->vertices || v1 < 0 || v2 < 0) return false;
	if(checaAresta(v1, v2)) return false;

	Aresta a, b;
	a.v1 = v1, a.v2 = v2;
	b.v1 = v2, b.v1 = v1;
	if(peso == -1) { 
		this->matriz[v1][v2] = 1;
		this->matriz[v2][v1] = 1;
		this->arestas.push_back(a);
		this->arestas.push_back(b);
	} else {
		this->matriz[v1][v2] = peso;
		this->arestas.push_back(a);
	}
	return true;
}

/**
 * @brief carrega um grafo (matriz de adjacências) de um arquivo grafo.txt
 * @return 
 */
int Grafo::carregaGrafo() {
	int destino, origem, peso;
	string linha;

	ifstream file("grafo.txt"); // abre arquivo

	if(!file.is_open()) return false; // verifica se foi possivel abrir o arquivo

	// descobre magicamente quantas linhas (vertices) tem no arquivo
	getline(file, linha);
	istringstream iss(linha);
	iss >> this->vertices;

	// inicia um grafo vazio na memoria
	if(!iniciaGrafo(this->vertices)) return false;

	while(getline(file, linha)) { // recebe a proxima linha
		istringstream iss(linha); // deixa a linha "parseavel" (parse)
		iss >> origem >> destino >> peso;
		if(!checaAresta(origem - 1, destino - 1) && peso != PESO_DEF) // verifica se o caractere na variavel coluna é igual ao caractere na variavel temAresta
			inserirAresta(origem - 1, destino - 1, peso); // se forem iguais, cria a aresta na matriz do programa
		else if(!checaAresta(origem - 1, destino - 1))
			inserirAresta(origem - 1, destino - 1);
	}
	file.close(); // fecha arquivo
	return true;
}

/**
 * @brief verifica se um grafo está vazio
 * @return 
 */
int Grafo::checaVazio() {
	if(this->vertices == 0) return true;
	return false;
}

/**
 * @brief exibe uma matriz de adjacências
 */
void Grafo::exibe() {
	if(checaVazio()) cout << "nao eh possivel exibir um grafo vazio." << endl;
	for(int i = 0; i < this->vertices; i++) {
		for(int j = 0; j < this->vertices; j++)
			cout << this->matriz[i][j] << " ";
		cout << std::endl;
	}
	pause();
}

/**
 * @brief limpa a tela
 */
void clearScreen() {
	cout << string(100, '\n');
}

/**
 * @brief limpa o input
 * @param in
 */
void flush(istream& in) {
	in.ignore(numeric_limits<streamsize>::max(), '\n');
	in.clear();
}

/**
 * @brief "pausa" o programa
 */
void pause() {
	flush(cin);
	cout << "Pressione [Enter] para continuar...";
	cin.get();
}