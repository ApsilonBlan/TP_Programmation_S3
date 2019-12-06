#ifndef VARIABLE
#define VARIABLE

    typedef struct Parametres Parametres; 
    struct Parametres
    {
        float sigma;
        float rho;
        float beta;
        float dt;
        float tmax;
    };
    
    
    typedef struct Coordonnees Coordonnees;
    struct Coordonnees
    {
        float temps;
        float x;
        float y;
        float z;
    };
    
#endif