    #include <iostream>  
    using namespace std;  
    class A  
    {  
        public:  
        void display()  
        {  
            cout << "Class A" << std::endl;  
        }  
    };  
    class B  
    {  
        public:  
        void display()  
        {  
            cout << "Class B" << std::endl;  
        }  
    };  
    class C : public A, public B  
    {  
        void view()  
        {  
            A :: display();         // Calling the display() function of class A.  
            B :: display();         // Calling the display() function of class B.  
      
        }  
    };    
    int main()  
    {  
        C c;
        c.display();
        return 0;  
    }  
