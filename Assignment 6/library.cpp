#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std ;

class Book 
{
    int bookId;
    string title;
    string Author;

    public :
        //  set function
          void setbook(int id)
          {
               bookId = id;
          }

          void setTitle(string t)
          {
               title = t;
          }

          void  setAuthor(string a)
          {
                Author = a;
          }

        //   get function
          int getBookId()
          {
            return bookId;
          }

          string getTitle()
          {
            return title;
          }

          string getAuthor()
          {
            return Author;
          }

};

            int main()
            {
                vector <Book> library;
                int choice;

                do
                {
                    cout<<"-----------Library Menu----------"<<endl;
                    cout<<"1. Add Book "<<endl;
                    cout<<"2. Display Books "<<endl;
                    cout<<"3. Search Book "<<endl;
                    cout<<"4. Save to File "<<endl;
                    cout<<"5. Exit "<<endl;
                    cout<<"Enter Choice: ";
                    cin>>choice;

                    if(choice==1)
                    {
                        Book b;
                        int id;
                        string title,author;

                        cout<<"Enter Book ID: "<<endl;
                        cin>>id;
                        b.setbook(id);

                        cout<<"Enter Title: "<<endl;
                        cin>>title;
                        b.setTitle(title);

                        cout<<"Enter Author: "<<endl;
                        cin>>author;
                        b.setAuthor(author);

                        library.push_back(b);
                    }
                    else if (choice==2)
                    {
                        for(int i=0; i<library.size(); i++)
                        {
                            cout<<"Book Id: "<<library[i].getBookId()<<endl;
                            cout<<"Title: "<<library[i].getTitle()<<endl;
                            cout<<"Author: "<<library[i].getAuthor()<<endl;
                        }
                    }
                    else if (choice==3)
                    {
                        int id ;
                        cout<<"Enter Book Id to Search: ";
                        cin>>id;

                        bool found=false;
                        for(int i=0; i<library.size(); i++)
                        {
                            if(library[i].getBookId()==id)
                            {
                            cout<<"Book Found "<<endl;
                            cout<<"Title: "<<library[i].getTitle()<<endl;
                            cout<<"Author: "<<library[i].getAuthor()<<endl;
                            found=true;
                            }

                        }
                    
                       if(!found)
                        cout<<"Book Not Found"<<endl;
                    }
                
                    else if(choice==4)
                    {
                    ofstream file("books.txt");

                    for(int i=0; i<library.size(); i++)
                    {
                        file<<library[i].getBookId()<<" "
                            <<library[i].getTitle()<<" "
                            <<library[i].getAuthor()<<endl;
                    }
                    file.close();
                    cout<<"Data saved to file "<<endl;
                     }
                 } while(choice!=5);
                     return 0;
            }