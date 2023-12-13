// NOTE: For the sake of practice, STL/stdlib helpers are not used, just std::string for memory management.
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;
#include <string>
using std::string;

// Convert arbitrary base to base 10
// - Input must be valid number in the given base
// - Base must be between 2 and 36
// - If input or base are invalid, returns 0
long ConvertTo10(const string& input, int base)
{
    if(base < 2 || base > 36)
        return 0;

    bool isNegative = (input[0] == '-');

    int startIndex = input.length()-1;
    int endIndex   = isNegative ? 1 : 0;

    long value = 0;
    int digitValue = 1;

    for(int i = startIndex; i >= endIndex; --i)
    {
        char c = input[i];

        // Uppercase it - NOTE: could be done with std::toupper
        if(c >= 'a' && c <= 'z')
            c -= ('a' - 'A');

        // Convert char to int value - NOTE: could be done with std::atoi
        // 0-9
        if(c >= '0' && c <= '9')
            c -= '0';
        // A-Z
        else
            c = c - 'A' + 10;

        if(c >= base)
            return 0;

        // Get the base 10 value of this digit
        value += c * digitValue;

        // Each digit has value base^digit position - NOTE: this avoids pow
        digitValue *= base;
    }

    if(isNegative)
        value *= -1;

    return value;
}

// Convert base 10 to arbitrary base
// - Base must be between 2 and 36
// - If base is invalid, returns "0"
// - NOTE: this whole function could be done with itoa
string ConvertFrom10(long value, int base)
{
    if(base < 2 || base > 36)
        return "0";

    bool isNegative = (value < 0);
    if(isNegative)
        value *= -1;

    // NOTE: it's probably possible to reserve string based on value
    string output;

    do
    {
        char digit = value % base;

        // Convert to appropriate base character
        // 0-9
        if(digit < 10)
            digit += '0';
        // A-Z
        else
            digit = digit + 'A' - 10;

        // Append digit to string (in reverse order)
        output += digit;

        value /= base;

    } while (value > 0);

    if(isNegative)
        output += '-';

    // Reverse the string - NOTE: could be done with std::reverse
    int len = output.size() - 1;
    for(int i = 0; i < len; ++i)
    {
        // Swap characters - NOTE: Could be done with std::swap
        char temp = output[i];
        output[i] = output[len-i];
        output[len-i] = temp;
    }

    return output;
}

// Convert from one base to another
string ConvertBase(const string& input, int baseFrom, int baseTo)
{
    // NOTE: There is probably a more efficient way to convert between two bases.
    //       This however is easy to understand and debug.
    return ConvertFrom10(ConvertTo10(input, baseFrom), baseTo);
}
int main()
{
    // Bases 10 and 2 (positive)
    cout << "===== 1 =====" << endl;
    cout << ConvertBase("101",  2,  10) << endl; // 100(2)   = 5(10)
    cout << ConvertBase("5",   10,   2) << endl; // 5(10)    = 101(2)

    // Bases 10 and 16 (negative)
    cout << "===== 2 =====" << endl;
    cout << ConvertBase("-1A",  16, 10) << endl; // -1A(16)  = -26(10)
    cout << ConvertBase("-26",  10, 16) << endl; // -26(10)  = -1A(16)

    // Bases 5 and 7
    cout << "===== 3.1 =====" << endl;
    cout << ConvertBase("100",   5, 10) << endl; // 100(5)   = 25(10)
    cout << ConvertBase("25",   10,  7) << endl; // 25(10)   = 34(7)
    // So therefore...
    cout << "===== 3.2 =====" << endl;
    cout << ConvertBase("100",   5,  7) << endl; // 100(5)   = 34(7)
    cout << ConvertBase("34",    7,  5) << endl; // 34(7)    = 100(5)

    // Larger Bases (26, 13)
    cout << "===== 4 =====" << endl;
    cout << ConvertBase("1234", 26, 13) << endl; // 1234(26) = 8864(13)
    cout << ConvertBase("8864", 13, 26) << endl; // 8864(13) = 1234(26)

    return 0;
}






/*#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    long long t,x,temp=0;
    string nn,s;
    // string arr={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string arr="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin>>t>>nn>>x;
    stringstream conv;
    conv << nn;
    long long n;
    conv >> n;
    //int n=stoi(nn);
    if(t==2)
    {
        if(x<=10)
        {
            while(n>0)
            {
                if(n%x==0)
                {
                    s+="0";
                }
                else
                    s+=to_string(n%x);
                n=n/x;
            } //1100110110101
        }
        else
        {
            while(n>0)
            {
                if(n%x==0)
                    s+="0";
                else if(n%x>=10)
                {
                    s+=arr[n%x-10];
                }
                else
                    s+=to_string(n%x);
                n/=x;
            }

        }
        for(int i=0; i<s.size()/2;)
        {
            for(int ii=s.size()-1; ii>=s.size()/2; ii--){
                swap(s[i],s[ii]);
            i++;}
        }
        cout<<s;
    }
    else
    {  int l=0;
        int m=nn.size();
        if(x<=10)
        {

            for(int i=m-1; i>=0; i--)
            {
                int t=(int)nn[i]-48;
                temp+=t*pow(x,l);
                l++;
            }

        }
        else
        {
            int l=0;
            for(int i=m-1; i>=0; i--)
            {
                if(nn[i]>='A'&&nn[i]<='Z')
                {
                    for(int ii=0; ii<arr.size(); ii++)
                    {
                        if(nn[i]==nn[ii])
                        {
                            cout<<temp<<endl;
                            temp+=(ii+10)*pow(x,l);
                            l++;
                            break;
                        }
                    }
                }
                else
                {
                    temp+=((int)nn[i]-48)*pow(x,l);
                    l++;
                }
            }
        }
        cout<<temp;
    }

    return 0;
}
*/
