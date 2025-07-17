#include <iostream>
#include <type_traits>

template<typename type>
class Vector2D
{
    static_assert(
        std::is_same_v<type, int> ||
            std::is_same_v<type, float> ||
            std::is_same_v<type, double>, 
        "Vector2D: Only int, float, double are allowed"
    );
public:
    explicit Vector2D(type x, type y) : x{x}, y{y} 
    {
        std::cout << "Vector2D\n";
    }
    ~Vector2D() 
    {
        std::cout << "~Vector2D\n";
    }

    Vector2D operator+(const Vector2D& other) const noexcept
    {
        return Vector2D(x + other.x, y + other.y);
    }

    Vector2D& operator=(const Vector2D& other) noexcept
    {
        x = other.x;
        y = other.y;
        return *this;
    }

    bool operator==(const Vector2D& other) const noexcept
    {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Vector2D& other) const noexcept
    {
        return !(*this == other);
    }

    virtual void println() const noexcept
    {
        std::cout << "{" << x << ", " << y << "}\n";
    }
    void print() const noexcept
    {
        std::cout << "{" << x << ", " << y << "}";
    }

protected:
    type x, y;
};

template<typename type>
class ColoredVector2D : public Vector2D<type>
{
public:
    ColoredVector2D(type x, type y, std::string color) 
        : Vector2D<type>(x, y), color(std::move(color)) 
    {
        std::cout << "ColoredVector2D\n"; 
    }
    ~ColoredVector2D() 
    {
        std::cout << "~ColoredVector2D\n"; 
    }

    void println() const noexcept override
    {
        std::cout << "{" << x << ", " << y << ", color: " << color << "}\n";
    }

private:
    std::string color;
};

void render(const Vector2D<int> *vec)
{
    vec->println();
}   

int main() 
{
    render(new Vector2D<int>(3, 4));
    render(new ColoredVector2D<int>(3, 4, "RED"));
    return 0;
}
