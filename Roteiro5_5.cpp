#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Despesa {
    private:
        double valor;
        int tipoGasto;

    public:
        Despesa(){
        }

        Despesa (double v, int t){
            setValor(v);
            setTipoGasto(t);
        }

        void setValor(double v){
            if(valor < 0.0){
                valor = 0.0;
            } else {
                valor = v;
            }
        }

        void setTipoGasto(int t){
            tipoGasto = t;
        }

        double getValor(){
            return valor;
        }

        int getTipoGasto(){
            return tipoGasto;
        }
};

class ControleDeGastos{
    private:
        int quant = 0;
        vector <Despesa> despesas;

    public:
        ControleDeGastos(int q){
            quant = q;
        }

        void setDespesa(){
            int tipo = 0;
            double valor = 0.0;

            for(int i = 0; i < quant; i++){
                cout << "Digite o tipo de despesa: ";
                cin >> tipo;
                cout << "Digite o valor da despesa: ";
                cin >> valor;
                cout << "" << endl;
                Despesa despesa (valor, tipo);
                despesas.push_back(despesa);
            }
        }

        double calculaTotalDeDespesa(){
            double total = 0.0;
            for(int i = 0; i < quant; i++){
                total += despesas[i].getValor();
            }
            return total;
        }

        string existeDespesaTipo (int t){
            string retorno = "false";
            for(int i = 0; i < quant; i++){
                 if(despesas[i].getTipoGasto()== t){
                    retorno = "true";
                    break;
                }
            }
            return retorno;
        }
};

int main(){

    int quant = 0, tipo = 0;

    cout << "Digite a Quantidade de despesas: ";
    cin >> quant;

    ControleDeGastos g1(quant);
    g1.setDespesa();

    cout.precision(2);
    cout << fixed << "O valor total das despesas eh: R$ " << g1.calculaTotalDeDespesa() << endl;
    cout << "\nConsulta sobre existencia do tipo: ";
    cin >> tipo;
    cout << "\nExiste em despesa tipo " << tipo << ": " << g1.existeDespesaTipo(tipo) << endl;
    cout << "\nMuito Obrigado" << endl;

    return 0;
}


