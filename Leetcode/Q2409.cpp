class Solution {
public:
    int getDays(string date) {
        int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));

        for(int i = 0; i < month - 1; i++) {
            day += monthDays[i];
        }

        return day;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        
        int start = max(getDays(arriveAlice), getDays(arriveBob));
        int end = min(getDays(leaveAlice), getDays(leaveBob));

        if(start > end)
            return 0;

        return end - start + 1;
    }
};
