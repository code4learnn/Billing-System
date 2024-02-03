class student (){
    public:
    int age ;
    int rollnumber;
    static int totalstudent ;
    /*student (int age,int rollnumber){
        this-> age = age;
        this -> rollnumber = rollnumber;
    }*/
     student (){
        totalstudent++;
     }

};      

int student :: totalstudent = 0;