#include "../include/DtPosterYSinopsis.h"

DtPosterYSinopsis::DtPosterYSinopsis(string poster, string sinopsis){
    this->poster = poster;
    this->sinopsis = sinopsis;
};

DtFecha DtPosterYSinopsis::getPoster(){
    return poster;
};

string DtPosterYSinopsis::getSinopsis(){
    return sinopsis;
};
