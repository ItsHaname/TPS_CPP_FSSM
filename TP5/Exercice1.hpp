    #ifndef EXERCICE1_H
    #define EXERCICE1_H
    class point {
    

        private:
           int x;
           int y;
       public:
          void deplace(float dx, float dy);
          void affiche();
          double homothetie(double k) ;
          void  rotation(double angle);
          void rhotation();
         void theta(); 
         void affichepol();
        }

        #endif