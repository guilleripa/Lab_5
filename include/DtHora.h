#ifndef DTHORA_H
#define DTHORA_H

class DtHora {
  private:
    int minuto;
    int hora;

  public:
    DtHora();
    DtHora(int, int);
    int getMinuto();
    int getHora();
    string toText();
};

#endif
