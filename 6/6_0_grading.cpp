#include <iostream>
#include <vector>

#include "compare_schemes.h"
#include "Student_info.h"

using std::cin;
using std::cout;
using std::endl;

using std::vector;

int main()
{
    vector<Student_info> did, didnt;
    Student_info student;
    while (read(cin, student))
    {
        if (did_all_hw(student)) {
            did.push_back(student);
        }
        else {
            didnt.push_back(student);
        }
    }

    if (did.empty()) {
        cout << "No students did all the homework!" << "\n";
        return 1;
    }

    if (didnt.empty()) {
        cout << "Every student did all the homework!" << "\n";
        return 2;
    }

    write_analysis(cout, "median", median_analysis, did, didnt);
    write_analysis(cout, "average", average_analysis, did, didnt);
    write_analysis(cout, "median of homework turned in", optimistic_median_analysis, did, didnt);


    return 0;
}

