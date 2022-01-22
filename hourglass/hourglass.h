class Hourglass {

public:
    Hourglass(int, char='x', char='*');
    int GetSize() const;
    int Perimeter() const;
    int Area() const;

    void Grow();
    void Shrink();

    void SetBorder(char c);
    void SetFill(char c);

    void Draw() const;
    void Summary() const;

private:
    int SIZE;
    int BORDER_CHAR;
    int FILL_CHAR;
};