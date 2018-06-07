#ifndef DTPOSTERYSINOPSIS_H
#define DTPOSTERYSINOPSIS_H

using namespace std;

class DtPosterYSinopsis {
    private:
        string poster;
        string sinopsis;
    public:
        DtPosterYSinopsis(string, string);
        string getPoster();
        string getSinopsis();
};

#endif