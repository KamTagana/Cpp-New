

#include <iostream>
#include <cstdint>
#include <cassert>

using namespace std;

//----------------------------Task#1----------------------------// 

class Power {
private:
    double p_number1;
    double p_number2;

public:
    void setNumber(double number1, double number2) {
        p_number1 = number1;
        p_number2 = number2;

        std::cout << p_number1 << "  " << p_number2 << std::endl;
    }

    void calculateNumber(double number1, double number2) {
        double p_x = pow(p_number1, p_number2);
        std::cout << p_x << std::endl;
    }
};

//----------------------------Task#2----------------------------// 

class RGBA {
private:
    std::uint8_t m_red = 0, m_green = 0, m_blue = 0, m_alpha = 255;

public:
    RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
    {

    }

    void print()
    {
        std::cout << "Red: " << m_red << "  Green: " << m_green << "  Blue: " << m_blue << "  Alpha: "  << m_alpha << "\n";
    }
};

//----------------------------Task#3----------------------------// 

class Stack {
private:
    int m_array[10];
    int m_next;
public: 
    void reset() {
        m_next = 0;
        for (int i = 0; i < 10; i++)
            m_array[i] = 0;
    }
    bool push(int value)
    {
        if (m_next == 10)
            return false;

        m_array[m_next++] = value;
        return true;
    }

    int pop() {
        assert(m_next > 0);
        return m_array[--m_next];
    }

    void print() {
        std::cout << "( ";
        for (int i = 0; i < m_next; ++i)
            std::cout << m_array[i] << ' ';
        std::cout << ")\n";
    }
};

int main()
{
    Power number;
    number.setNumber(5.15, 4.18);
    number.calculateNumber(5.15, 4.18);
    RGBA color(1, 2, 3, 4);
    color.print();

    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();


    return 0;
}

