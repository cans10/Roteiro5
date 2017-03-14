#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pagamento {
    private:
        double valorPagamento;
        string nomeFuncionario;

    public:
        Pagamento(){
        }

        Pagamento (double v, string n){
            setValorPagamento(v);
            setNomeFuncionario(n);
        }

        void setValorPagamento(double v){
            if(v < 0.0){
                valorPagamento = 0.0;
            } else {
                valorPagamento = v;
            }
        }

        void setNomeFuncionario(string n){
            nomeFuncionario = n;
        }

        double getValorPagamento(){
            return valorPagamento;
        }

        string getNomeFuncionario(){
            return nomeFuncionario;
        }
};

class ControleDePagamentos{
    private:
        int quant = 0;
        vector <Pagamento> pagamentos;

    public:
        ControleDePagamentos(int q){
            quant = q;
        }

        void setPagamentos(){
            string nome;
            double valor = 0.0;

            for(int i = 0; i < quant; i++){
                cout << "Digite o nome do funcionario: ";
                cin >> nome;
                cout << "Digite o valor do pagamento: ";
                cin >> valor;
                Pagamento pagamento (valor, nome);
                pagamentos.push_back(pagamento);
                cout << "" << endl;

            }
        }

        double calculaTotalDePagamentos(){
            double total = 0.0;
            for(int i = 0; i < quant; i++){
                total += pagamentos[i].getValorPagamento();
            }
            return total;
        }

        string existePagamentoParaFuncionario(string n){
            string retorno = "false";
            for(int i = 0; i < quant; i++){
                 if(pagamentos[i].getNomeFuncionario() == n){
                    retorno = "true";
                    break;
                }
            }
            return retorno;
        }
};

int main(){

    int quant = 0;
    string nome = "", funcionario = "";
    double total = 0.0;

    cout << "Digite a Quantidade de pagamentos: ";
    cin >> quant;

    ControleDePagamentos p1(quant);
    p1.setPagamentos();

    cout.precision(2);
    total = p1.calculaTotalDePagamentos();
    cout << fixed << "O valor total dos pagamentos eh: R$ " << total << endl;
    cout << "\nConsulta sobre existencia de pagamento para o funcionario: ";
    cin >> nome;
    funcionario = p1.existePagamentoParaFuncionario(nome);
    cout << "\nExiste pagamento para o funcionario " << nome << ": " << funcionario << endl;
    cout << "\nMuito Obrigado" << endl;

    return 0;
}


