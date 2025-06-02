class Animal{
    public:
        string species; //data member
        int age; //data member
        string name; //data member

        void eat(){ //member function
            //eat something
        }
        void sleep(){ //member function
            //sleep for few hrs
        }
};

int main(){
    Animal dog;
    dog.species = "Dog";
}