#include <iostream>
#include <string>

using namespace std;

// class Book
// with six private data fields: book title, author, copyright, publisher, price and ISBN
// six public methods to retrieve fields (called "getters")
// and one public non-default constructor

class Book {

  public:
     
      // member function prototypes
      void assign (string, string, int, string, float, string);   // this is your constructor
      string getTitle();
      string getAuthor();
      int    getCopyRightYear();
      string getPublisher();
      float  getPrice();
      string getISBN();
  
  private:

      // data members
      string title;
      string author;
      int    copyRightYear;
      string publisher;
      float  price;
      string ISBN;
};


// these are the actual member functions

// this member function is a "constructor" that will create a new book
void Book::assign (string bookTitle, string bookAuthor, int bookDate, string bookPublisher, float bookPrice, string bookISBN) {
            title = bookTitle;
            author = bookAuthor;
            copyRightYear = bookDate;
            publisher = bookPublisher;
            price = bookPrice;   
            ISBN = bookISBN;
}

// this member function is a "getter" that will retrieve that book title value
string Book::getTitle() {
            return title;
}

// this member function is a "getter" that will retrieve the primary book author value
string Book::getAuthor() {
            return author;
}

// this member function is a "getter" that will retrieve the year the book was copyrighted
int Book::getCopyRightYear() {
            return copyRightYear;
}

// this member function is a "getter" that will retrieve the list publisher of the book
string Book::getPublisher() {
              return publisher;
}

// this member function is a "getter" that will retrieve the list price of the book
float Book::getPrice() {
              return price;
}

// this member function is a "getter" that will retrieve the ISBN of the book
string Book::getISBN() {
              return ISBN;
}


int main()
{

      cout << "Best Young Adult Books of All Time\n" << endl;

     // Set up space to create 5 instances of the class Book to use with the constructor
      Book b1, b2, b3, b4, b5;

      // Use the constructor to create the first book
      b1.assign ("Peter Pan", "J.M. Barry", 2005, "Barnes and Noble", 7.95, "9781593082130");

      cout << b1.getTitle() << " by " << b1.getAuthor() << ", published " << b1.getCopyRightYear() << endl;
   	  cout << "Publisher: " << b1.getPublisher() << endl;
      cout << "Price: $" << b1.getPrice() << endl;
      cout << "ISBN: " << b1.getISBN() << endl;
      cout << "\n" << endl;

      // Use the constructor to create another book
      b2.assign ("The Hunchback of Notre Dame", "Victor Hugo", 2002, "Random House Publishing Group", 15.99, "9780679642572");

      cout << b2.getTitle() << " by " << b2.getAuthor() << ", published " << b2.getCopyRightYear() << endl;
   	  cout << "Publisher: " << b2.getPublisher() << endl;
	  cout << "Price: $" << b2.getPrice() << endl;
      cout << "ISBN: " << b2.getISBN() << endl;
      cout << "\n" << endl;

     // use the constructor (its called assign) again to create and then print information about book 3
      b3.assign ("Wicked", "Gregory Maguire", 2000, "HarperCollins Publishers", 14.95, "9780060987107");

      cout << b3.getTitle() << " by " << b3.getAuthor() << ", published " << b3.getCopyRightYear() << endl;
	  cout << "Publisher: " << b3.getPublisher() << endl;
	  cout << "Price: $" << b3.getPrice() << endl;
      cout << "ISBN: " << b3.getISBN() << endl;
      cout << "\n" << endl;
      
      // use the constructor again to create and then print information about book 4
      b4.assign ("The Time Traveler's Wife", "Audrey Niffenegger", 2014, "Scribner", 18.95, "9781476764832");

      cout << b4.getTitle() << " by " << b4.getAuthor() << ", published " << b4.getCopyRightYear() << endl;
      cout << "Publisher: " << b4.getPublisher() << endl;
      cout << "Price: $" << b4.getPrice() << endl;
      cout << "ISBN: " << b4.getISBN() << endl;
      cout << "\n" << endl;

      // use the constructor again to create and then print information about book 5
      b5.assign ("Alice in Wonderland", "Lewis Carroll", 2008, "Puffin Books", 6.99, "9780141321073");

      cout << b5.getTitle() << " by " << b5.getAuthor() << ", published " << b5.getCopyRightYear() << endl;
	  cout << "Publisher: " << b5.getPublisher() << endl;
      cout << "Price: $" << b5.getPrice() << endl;
      cout << "ISBN: " << b5.getISBN() << endl;
      cout << "\n" << endl;

      return (0);
}

