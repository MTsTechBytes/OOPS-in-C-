int main()
{
    try
    {
            int a = 10, b = 0;
            if (b == 0)
            {
                throw "Division by zero is not allowed";
            }
            cout << "Result: " << a / b << endl;

    }
    
    catch(string e)
    {
        cout << "Exception: " << e << endl;
    }
    
}