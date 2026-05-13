#include <iostream>
#include <cstring>
using namespace std;

class Book
{
protected:
    char ISBN[20];
    char title[50];
    char author[30];
    float price; // Сменето во float за прецизност при пресметки

public:
    Book() { price = 0; }
    Book(const char *isbn, const char *title, const char *author, float price)
    {
        strncpy(this->ISBN, isbn, 19);
        this->ISBN[19] = '\0';
        strncpy(this->title, title, 49);
        this->title[49] = '\0';
        strncpy(this->author, author, 29);
        this->author[29] = '\0';
        this->price = price;
    }

    bool operator>(const Book &b) const
    {
        return this->bookPrice() > b.bookPrice();
    }

    void setISBN(const char *isbn)
    {
        strncpy(ISBN, isbn, 19);
        ISBN[19] = '\0';
    }

    virtual void print(ostream &os) const
    {
        os << ISBN << ": " << title << ", " << author << " " << bookPrice() << endl;
    }

    friend ostream &operator<<(ostream &os, const Book &b)
    {
        b.print(os);
        return os;
    }

    virtual double bookPrice() const = 0;
    virtual ~Book();
};

// Тело на деструкторот (задолжително за апстрактна класа)
Book::~Book() {}

class OnlineBook : public Book
{
    char *url;
    int size;

public:
    OnlineBook() : Book()
    {
        url = new char[1];
        url[0] = '\0';
        size = 0;
    }

    OnlineBook(const char *isbn, const char *title, const char *author, float price, const char *url, int size)
        : Book(isbn, title, author, price)
    {
        this->url = new char[strlen(url) + 1];
        strcpy(this->url, url);
        this->size = size;
    }

    OnlineBook(const OnlineBook &o) : Book(o)
    {
        url = new char[strlen(o.url) + 1];
        strcpy(url, o.url);
        size = o.size;
    }

    OnlineBook &operator=(const OnlineBook &o)
    {
        if (this != &o)
        {
            strncpy(ISBN, o.ISBN, 19);
            strncpy(title, o.title, 49);
            strncpy(author, o.author, 29);
            price = o.price;
            delete[] url;
            url = new char[strlen(o.url) + 1];
            strcpy(url, o.url);
            size = o.size;
        }
        return *this;
    }

    double bookPrice() const override
    {
        if (size > 20)
            return price * 1.20;
        return price;
    }

    ~OnlineBook() { delete[] url; }
};

class PrintBook : public Book
{
    double weight;
    bool inventory;

public:
    PrintBook() : Book()
    {
        weight = 0;
        inventory = false;
    }

    // Поправен конструктор (додаден float price параметар)
    PrintBook(const char *isbn, const char *title, const char *author, float price, double weight, bool instock)
        : Book(isbn, title, author, price)
    {
        this->weight = weight;
        this->inventory = instock;
    }

    double bookPrice() const override
    {
        // Поправено од 0,7 во 0.7
        if (weight > 0.7)
            return price * 1.15;
        return price;
    }
};

void mostExpensiveBook(Book **books, int n)
{
    int onlineBooks = 0, printBooks = 0;
    Book *mb = books[0];

    for (int i = 0; i < n; i++)
    {
        if (dynamic_cast<OnlineBook *>(books[i]) != nullptr)
            onlineBooks++;
        else
            printBooks++;

        if (books[i]->bookPrice() > mb->bookPrice())
        {
            mb = books[i];
        }
    }

    cout << "FINKI-Education" << endl;
    cout << "Total number of online books: " << onlineBooks << endl;
    cout << "Total number of print books: " << printBooks << endl;
    cout << "The most expensive book is: " << endl;
    cout << *mb << endl;
}

int main()
{

    char isbn[20], title[50], author[30], url[100];
    int size, tip;
    float price, weight;
    bool inStock;
    Book **books;
    int n;

    int testCase;
    cin >> testCase;

    if (testCase == 1)
    {
        cout << "====== Testing OnlineBook class ======" << endl;
        cin >> n;
        books = new Book *[n];

        for (int i = 0; i < n; i++)
        {
            cin >> isbn;
            cin.get();
            cin.getline(title, 50);
            cin.getline(author, 30);
            cin >> price;
            cin >> url;
            cin >> size;
            cout << "CONSTRUCTOR" << endl;
            books[i] = new OnlineBook(isbn, title, author, price, url, size);
            cout << "OPERATOR <<" << endl;
            cout << *books[i];
        }
        cout << "OPERATOR >" << endl;
        cout << "Rezultat od sporedbata e: " << endl;
        if (*books[0] > *books[1])
            cout << *books[0];
        else
            cout << *books[1];
    }
    if (testCase == 2)
    {
        cout << "====== Testing OnlineBook CONSTRUCTORS ======" << endl;
        cin >> isbn;
        cin.get();
        cin.getline(title, 50);
        cin.getline(author, 30);
        cin >> price;
        cin >> url;
        cin >> size;
        cout << "CONSTRUCTOR" << endl;
        OnlineBook ob1(isbn, title, author, price, url, size);
        cout << ob1 << endl;
        cout << "COPY CONSTRUCTOR" << endl;
        OnlineBook ob2(ob1);
        cin >> isbn;
        ob2.setISBN(isbn);
        cout << ob1 << endl;
        cout << ob2 << endl;
        cout << "OPERATOR =" << endl;
        ob1 = ob2;
        cin >> isbn;
        ob2.setISBN(isbn);
        cout << ob1 << endl;
        cout << ob2 << endl;
    }
    if (testCase == 3)
    {
        cout << "====== Testing PrintBook class ======" << endl;
        cin >> n;
        books = new Book *[n];

        for (int i = 0; i < n; i++)
        {
            cin >> isbn;
            cin.get();
            cin.getline(title, 50);
            cin.getline(author, 30);
            cin >> price;
            cin >> weight;
            cin >> inStock;
            cout << "CONSTRUCTOR" << endl;
            books[i] = new PrintBook(isbn, title, author, price, weight, inStock);
            cout << "OPERATOR <<" << endl;
            cout << *books[i];
        }
        cout << "OPERATOR >" << endl;
        cout << "Rezultat od sporedbata e: " << endl;
        if (*books[0] > *books[1])
            cout << *books[0];
        else
            cout << *books[1];
    }
    if (testCase == 4)
    {
        cout << "====== Testing method mostExpensiveBook() ======" << endl;
        cin >> n;
        books = new Book *[n];

        for (int i = 0; i < n; i++)
        {

            cin >> tip >> isbn;
            cin.get();
            cin.getline(title, 50);
            cin.getline(author, 30);
            cin >> price;
            if (tip == 1)
            {

                cin >> url;
                cin >> size;

                books[i] = new OnlineBook(isbn, title, author, price, url, size);
            }
            else
            {
                cin >> weight;
                cin >> inStock;

                books[i] = new PrintBook(isbn, title, author, price, weight, inStock);
            }
        }

        mostExpensiveBook(books, n);
    }

    for (int i = 0; i < n; i++)
        delete books[i];
    delete[] books;
    return 0;
}
