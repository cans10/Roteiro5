#include <iostream>
#include <string>
using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
        string telefone;

    public:
        Pessoa(string n){
            setNome(n);
        }

        Pessoa(string n, int i, string t){
            setNome(n);
            setIdade(i);
            setTelefone(t);
        }
        void setNome(string n){
            nome = n;
        }

        void setIdade(int i){
            idade = i;
        }

        void setTelefone(string t){
            telefone = t;
        }

        string getNome(){
            return nome;
        }

        int getIdade(){
            return idade;
        }

        string getTelefone(){
            return telefone;
        }

};

int main(){

    Pessoa p1("Carlos", 53, "98872-1234");
    Pessoa p2("Pedro", 20, "99954- 3423");
    Pessoa p3("Joao");
    p3.setIdade(23);
    p3.setTelefone("90989-1960");
    Pessoa p4("Rodolffo", 19, "99877-4562");
    Pessoa p5("Maria", 21, "98876-3471");
    Pessoa p6("Monica", 45, "99870-2376");
    Pessoa p7("Thiago", 32, "998712-4521");
    Pessoa p8("Socorro", 24, "98766-2567");
    Pessoa p9("Daguia", 70, "98878-0970");
    Pessoa p10("Cristiano", 29, "99087-6529");


    cout << p1.getNome() << " tem " << p1.getIdade() << " e seu telefone eh " << p1.getTelefone()<< endl;
    cout << p2.getNome() << " tem " << p2.getIdade() << " e seu telefone eh " << p2.getTelefone()<< endl;
    cout << p3.getNome() << " tem " << p3.getIdade() << " e seu telefone eh " << p3.getTelefone()<< endl;
    cout << p4.getNome() << " tem " << p4.getIdade() << " e seu telefone eh " << p4.getTelefone()<< endl;
    cout << p5.getNome() << " tem " << p5.getIdade() << " e seu telefone eh " << p5.getTelefone()<< endl;
    cout << p6.getNome() << " tem " << p6.getIdade() << " e seu telefone eh " << p6.getTelefone()<< endl;
    cout << p7.getNome() << " tem " << p7.getIdade() << " e seu telefone eh " << p7.getTelefone()<< endl;
    cout << p8.getNome() << " tem " << p8.getIdade() << " e seu telefone eh " << p8.getTelefone()<< endl;
    cout << p9.getNome() << " tem " << p9.getIdade() << " e seu telefone eh " << p9.getTelefone()<< endl;
    cout << p10.getNome() << " tem " << p10.getIdade() << " e seu telefone eh " << p10.getTelefone()<< endl;



    return 0;
}


