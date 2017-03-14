#include <iostream>
using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;

    public:
        Data(int d, int m, int a){
            setDia(d);
            setMes(m);
            setAno(a);
        }

        void setDia(int d){
            dia = d;
        }

        void setMes(int m){
            mes = m;
        }
        void setAno(int a){
            ano = a;
        }

        int getDia(){
            return dia;
        }

        int getMes(){
            return mes;
        }

        int getAno(){
            return ano;
        }

        void avancarDia(){

            if((mes == 1)||(mes == 3)||(mes == 5)||(mes == 7)||(mes == 8)||(mes == 10)){
                if (dia < 31){
                    dia += 1;
                }
                else {
                    dia = 1;
                    mes += 1;
                }
            }
            if((mes == 4)||(mes == 6)||(mes == 9)||(mes == 11)){
                if (dia < 30){
                    dia += 1;
                }
                else {
                    dia = 1;
                    mes += 1;
                }
            }
            if (mes == 12){
                if (dia < 31){
                    dia += 1;
                }
                else {
                    dia = 1;
                    mes = 1;
                    ano += 1;
                }
            }
            if (mes == 2){
                if (((ano%4 == 0)&&(ano%100 != 0))||(ano%400 == 0)){
                    if (dia < 29){
                    dia += 1;
                    }
                    else {
                        dia = 1;
                        mes += 1;
                    }
                }
                else {
                    if (dia < 28){
                        dia += 1;
                        }
                    else {
                        dia = 1;
                        mes += 1;
                    }
                }
            }
        }

};

int main(){

    Data d1(31,12,2000);

    cout << "Data  antes: " << d1.getDia() << "/" <<d1.getMes() << "/" << d1.getAno() << endl;
    d1.avancarDia();
    cout << "Data depois: " << d1.getDia() << "/" <<d1.getMes() << "/" << d1.getAno() << endl;

        return 0;
}


