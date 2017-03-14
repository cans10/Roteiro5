#include <iostream>
#include <string>
using namespace std;

class Empregado {
    private:
        string nome;
        string sobrenome;
        float salario;

    public:
        Empregado(string n, string sn, float s){
            setNome(n);
            setSobrenome(sn);
            setSalario(s);
        }

        void setNome(string n){
            nome = n;
        }

        void setSobrenome(string sn){
            sobrenome = sn;
        }

        void setSalario(float s){
            if(s <= 0.0){
                salario = 0.0;
            } else{
                salario = s;
            }
        }

        string getNome(){
            return nome;
        }

        string getSobrenome(){
            return sobrenome;
        }

        float getSalario(){
            return salario;
        }

};

int main(){

    float aum;

    Empregado e1 ("Carlos", "Alberto", 1000.80);
    Empregado e2 ("Rodolffo", "Teles", 4030.00);

    cout << e1.getNome() << " " << e1.getSobrenome() << " ganha R$ " << e1.getSalario() << endl;
    cout << e2.getNome() << " " << e2.getSobrenome() << " ganha R$ " << e2.getSalario() << endl;

    cout << "\nDigite o percentual de aumento: ";
    cin >> aum;

    aum = (aum/100)+1;

    e1.setSalario(e1.getSalario()*aum);
    e2.setSalario(e2.getSalario()*aum);

    cout <<  endl;
    cout << e1.getNome() << " " << e1.getSobrenome() << " ganhara R$ " << e1.getSalario() << endl;
    cout << e2.getNome() << " " << e2.getSobrenome() << " ganhara R$ " << e2.getSalario() << endl;

    return 0;
}


