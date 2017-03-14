#include <iostream>
#include <string>

using namespace std;

class Invoice {
    private:
        int num;
        string descricao;
        int quant;
        float preco;

    public:
        Invoice(int n, string d, int q, float p){
            setNum(n);
            setDescricao(d);
            setQuant(q);
            setPreco(p);
        }

        void setNum(int n){
            num = n;
        }

        void setDescricao(string d){
            descricao = d;
        }
        void setQuant(int q){
            if(q <= 0){
                q = 0;
            } else {
                quant = q;
            }
        }

        void setPreco(float p){
            if(p <= 0){
                preco = 0;
            } else{
                preco = p;
            }
        }

        int getNum(){
            return num;
        }

        string getDescricao(){
            return descricao;
        }

        int getQuant(){
            return quant;
        }

        float getPreco(){
            return preco;
        }

        float getInvoiceAmount(){
            float valor = 0.0;
            valor = getPreco()*getQuant();
            return valor;
        }

};

int main(){

   Invoice inv1 (1, "Pirulito", 99, 0.51);

    cout << "Fatura" << endl;
    cout << "Numero\tDescricao\tValUnit\tQuant\tValFatura" << endl;
    cout << inv1.getNum() << "\t" << inv1.getDescricao() << "\t" << inv1.getPreco()
         << "\t" << inv1.getQuant() << "\t"<< inv1.getInvoiceAmount() <<  endl;

    return 0;
}
