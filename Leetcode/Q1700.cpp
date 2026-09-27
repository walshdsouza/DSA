class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int failed = 0;

        while (!students.empty() && failed < students.size()) {

            if (students.front() == sandwiches.front()) {

                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());

                failed = 0;
            }
            else {

                students.push_back(students.front());
                students.erase(students.begin());

                failed++;
            }
        }

        return students.size();
    }
};