#ifndef INTSTACK_H
#define INTSTACK_H
#define SIZE 999
class IntStack
{
    public:
        IntStack();
            void add(int a);
            void print();
            int pop();
        virtual ~IntStack();
    protected:
    private:
    int num[SIZE];
    int n=0;

};

#endif // INTSTACK_H
