#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pessoa
{
private:
    int codigo;
    string nome;
    int telefone;

public:
    Pessoa(int codigo, string nome, int telefone)
    {
        this->codigo = codigo;
        this->nome = nome;
        this->telefone = telefone;
    }
};

class Passageiro : public Pessoa
{   
    private: 

    string endereco;
    int fidelidade;
    int pontos_fidelidade;

public:
    Passageiro(int codigo, string nome, int telefone, string endereco, int fidelidade, int pontos_fidelidade) : 
    Pessoa(codigo, nome, telefone)
    {
        this->endereco = endereco;
        this->fidelidade = fidelidade;
        this->pontos_fidelidade = pontos_fidelidade;
    }
};

class Tripulante : Pessoa
{
private:
    string cargo;

public:
    Tripulante(int cargo, int codigo, string nome, int telefone) : 
    Pessoa(codigo, nome, telefone)
    {
        this->cargo = cargo;
    }
};

class Assento
{
private:
    int numero_assento;
    string status; // ocupado ou livre

public:
    Assento(int numero_assento, string status)
    {
        this->numero_assento = numero_assento;
        this->status = status;
    }
};

class Voo
{
private:
    int codigo_voo;
    int data;
    int hora;
    string origem;
    string destino;
    int codigo_aviao;
    string status; // ativo ou inativo
    double tarifa;
    vector<Tripulante *> tripulacao;
    vector<Assento> assentos;

public:
    Voo(int codigo_voo, int data, int hora, string origem, string destino, int codigo_aviao, string status, double tarifa, vector<Tripulante *> tripulacao, vector<Assento> assentos)
    {
        this->codigo_voo = codigo_voo; // tenho que fazer para todos
        this->data = data;
        this->hora = hora;
        this->origem = origem;
        this->destino = destino;
        this->codigo_aviao = codigo_aviao;
        this->status = status;
        this->tarifa = tarifa;
    }
};

class Reserva
{
    Voo *voo;
    Assento *assento;
    Passageiro *passageiro;
};

int main()
{
    vector<Tripulante> tripulantes;
    vector<Passageiro> passageiros;
    vector<Voo> voo;

    return 0;
}