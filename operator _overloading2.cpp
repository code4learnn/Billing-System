class fraction{
    private :
    int numerator;
    int denominator;
    
    public:
  fraction(int numerator,int denominator){
        this->numerator =numerator;
        this -> denominator =denominator;
    }
    void print() const {
        cout << numerator << " / "<<denominator<< endl;
    }
    void simplify(){
        int gcd = 1;
        int j = min (this-> numerator,this->denominator);
        for (int i =1;i<=j ;i++){
            if (this -> numerator%i ==0 && this-> denominator%i==0 ){
                gcd=i;
            }
        }
        this ->numerator = this -> numerator/gcd ;
        this -> denominator = this -> denominator/gcd ;
    
    }
   fraction add (fraction f2){
        int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm / f2.denominator;
        int num = x*numerator + (y*f2.numerator);

       /* this-> numerator = num;
        this-> denominator = lcm;*/
        fraction fnew(num,lcm);

        fnew.simplify();
        return fnew;
    }
    // const iss liya ki koi illegal changes na kar paye; 
    // by refrence iss liya pass kar rahe koi copy na bane;
// bahar wala const iss liya kyu ki ye this ki property ma koi change na kar paye;
    fraction operator+ (fraction const  &f2) const{
        int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm / f2.denominator;
        int num = x*numerator + (y*f2.numerator);

       /* this-> numerator = num;
        this-> denominator = lcm;*/
        fraction fnew(num,lcm);

        fnew.simplify();
        return fnew;
    }
     fraction operator*(fraction const & f2)const{
        int n = this -> numerator* f2.numerator;
         int d = this -> denominator * f2.denominator;
      fraction fnew (n,d);
      fnew.simplify(); 
      return fnew;
     }

     bool operator== (fraction const & f2)const{
        return (numerator==f2.numerator && denominator == f2.denominator);
     }

    void multiply(fraction f2){
     this-> numerator = this -> numerator* f2.numerator;
     this -> denominator = this -> denominator * f2.denominator;
      simplify(); 
    }
 // pre - increment ;
  fraction & operator++() {
    numerator = numerator + denominator;
    simplify();
    return *this;
   }

// post- increment ;
fraction operator++(int ){
    fraction fnew (numerator ,denominator);
    numerator = numerator + denominator;
    fnew.simplify();
    simplify();
    return fnew;
}

    // += operator;
  fraction operator+= (fraction const & f2) {
       int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm / f2.denominator;
        int num = x*numerator + (y*f2.numerator);

        numerator = num;
         denominator = lcm;
         simplify();
         return *this ;
       
    }











};