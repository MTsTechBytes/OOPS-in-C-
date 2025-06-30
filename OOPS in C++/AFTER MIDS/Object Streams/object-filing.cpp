#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class book 
{
	int bookid;
	string bookname;
	string author;

public:
	void getdata()
	{
		cout << "Enter book id\n";
		cin >> bookid;
        cout << "Enter book names \n";
		cin >> bookname;
		cout << "Enter book'author \n";
		cin >> author;
	}
	void show () const
	{
        cout << "book id is :" << bookid;
		cout << endl;
		cout << " book name is: " << bookname;
		cout << endl;
		cout << "book's author is " << author;
		cout << endl;
	}
	void writedata()
	{
		fstream file("file.txt", ios::binary | ios::app);
	
		if (!file)
		{
			cout << "File not opened \n";
		}
		else
		{
			getdata();
			file.write((char*)this, sizeof(*this));
			cout << "Record added into file successfully ";
			show();
		}
		file.close();
	}
	void readdata()
	{
		fstream file1("file.txt", ios::binary | ios::in);
		int count;
		if (!file1)
		{
			cout << "file not opened \n";
		}
		else
		{
			file1.read((char*)this, sizeof(*this));
			{
				count++;
				show();
			}

		}
		file1.close();

	}
    void searchdata()
    {
        fstream file2("file.txt", ios::binary | ios::in);
        if (!file2)
        {
            cout << "File not opened \n";
        }
        else
        {
            int search_id;
            cout << "Enter book id to search: ";
            cin >> search_id;
            bool found = false;
            while (file2.read((char*)this, sizeof(*this)))
            {
                if (bookid == search_id)
                {
                    found = true;
                    cout << "Book found:\n";
                    show();
                    break;
                }
            }
            if (!found)
            {
                cout << "Book with ID " << search_id << " not found.\n";
            }
        }
        file2.close();
    }
    void updatedata()
    {           
        ifstream file3("file.txt", ios::binary);
        ofstream tempfile("temp.txt", ios::binary | ios::out);
        if (!file3 || !tempfile)
        {
            cout << "File not opened \n";
        }
        else
        {   
            int update_id;
            cout << "Enter book id to update: ";
            cin >> update_id;
            bool found = false;
            while (file3.read((char*)this, sizeof(*this)))
            {
                if (bookid == update_id)
                {
                    found = true;
                    cout << "Book found. Enter new details:\n";
                    getdata();
                    tempfile.write((char*)this, sizeof(*this)); //write the new record
                }
                else
                {
                    tempfile.write((char*)this, sizeof(*this));
                }
            }
            if (!found)
            {
                cout << "Book with ID " << update_id << " not found.\n";
            }
        }
        
        remove("file.txt"); // Remove the old file
        rename("tempfile.txt", "file.txt");

        file3.close();
        tempfile.close();
    }

    void deletedata()
    {
        ifstream file4("file.txt", ios::binary);
        ofstream temfile2("temp2.txt", ios::binary | ios::out);

        if (!file4 || !temfile2)
        {
            cout << "File not opened \n";
        }
        else
        {
            int delete_id;
            cout << "Enter book id to delete: ";
            cin >> delete_id;
            bool found = false;
            while (file4.read((char*)this, sizeof(*this)))
            {
                if (bookid == delete_id)
                {
                    found = true;
                    cout << "Book with ID " << delete_id << " deleted.\n";
                }
                else
                {
                    temfile2.write((char*)this, sizeof(*this)); //write the record to temp file
                }
            }
            if (!found)
            {
                cout << "Book with ID " << delete_id << " not found.\n";
            }
        }

        remove("file.txt"); // Remove the old file
        rename("temp2.txt", "file.txt"); // Rename temp file to original file name
        file4.close();
        temfile2.close();

    }
};

int main()
{
    book b;
    int choice;
    do
    {
        cout << "Menu:\n";
        cout << "1. Add Book\n";
        cout << "2. Read Book\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1: b.writedata();
                    break;
            case 2: b.readdata();
                    break;
            case 3: b.searchdata();
                    break;
            case 4: b.updatedata();
                    break;
            case 5: b.deletedata();
                    break;
            case 6: cout << "Exiting...\n";
                    break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);
    return 0;
}