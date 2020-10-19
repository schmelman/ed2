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
			this->matriz[i][j] = 0;
	return true;
}

/**
 * @brief verifica se uma aresta existe
 * @param v1
 * @param v2
 * @return 
 */
int Grafo::checaAresta(int v1, int v2) {
	return this->matriz[v1][v2] || this->matriz[v2][v1];
}

/**
 * @brief insere uma aresta conectando os vértices v1 e v2
 * @param v1
 * @param v2
 * @return 
 */
int Grafo::inserirAresta(int v1, int v2) {
	if(v1 > this->vertices || v2 > this->vertices || v1 < 0 || v2 < 0) return false;
	if(checaAresta(v1, v2)) return false;

	this->matriz[v1][v2] = 1;
	this->matriz[v2][v1] = 1;
	
	this->arestas++;
	
	return true;
}

/**
 * @brief carrega um grafo (matriz de adjacências) de um arquivo grafo.txt
 * @return 
 */
int Grafo::carregaGrafo() {
	int vert = 0;
	char coluna, temAresta = '1';
	string linha;

	ifstream file("grafo.txt"); // abre arquivo

	if(!file.is_open()) return false; // verifica se foi possivel abrir o arquivo

	// usuario insere quantos vertices há na matriz
	cout << "numero de vertices: ";
	cin >> vert;
	this->vertices = vert;

	// inicia um grafo vazio na memoria
	if(!iniciaGrafo(this->vertices)) return false;

	int linhaAtual = 0, colunaAtual = 0;
	while(getline(file, linha)) { // recebe a proxima linha
		istringstream iss(linha); // deixa a linha "parseavel" (parse)
		while(iss >> coluna) { // passa o próximo caractere para a variavel coluna
			if(coluna == temAresta) // verifica se o caractere na variavel coluna é igual ao caractere na variavel temAresta
				inserirAresta(linhaAtual, colunaAtual); // se forem iguais, cria a aresta na matriz do programa
			colunaAtual++; // adiciona mais 1 no contador de coluna (j)
		}
		linhaAtual++; // adiciona mais 1 no contador de linhas (i)
		colunaAtual = 0; // reseta o contador de coluna para poder pegar a próxima linha do começo
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
	if(checaVazio()) cout << "Nao eh possivel exibir um grafo vazio." << endl;
	for(int i = 0; i < this->vertices; i++) {
		for(int j = 0; j < this->vertices; j++)
			std::cout << this->matriz[i][j] << "\t";
		std::cout << std::endl;
	}
	this_thread::sleep_for(chrono::seconds(SLEEP_SECONDS));
}

/**
 * @brief limpa a tela
 */
void clearScreen() {
	cout << string(100, '\n');
}