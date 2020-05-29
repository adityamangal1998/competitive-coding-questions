string isValid(string s) {

    int count[26] = {0};

    for(int i=0;i<s.length();i++) {
        count[s[i]-'a']++;
    }
    int first = -1;
    int first_count = 0;
    int second = -1;
    int second_count = 0;

    for(int i=0;i<26;i++) {
        if(count[i]!=0) {
            if(first==-1||first==count[i]) {
                first = count[i];
                first_count++;
            } else if(second==-1||second==count[i]) {
                second = count[i];
                second_count++;
            } else {
                return "NO";
            }
        }
    }
    if(second==-1) {
        return "YES";
    } else if(first>second) {
        if(first_count==1&&first-second==1) {
            return "YES";
        } else if(second_count==1) {
            return "YES";
        } else {
            return "NO";
        }
    } else {
        if(second_count==1&&second-first==1) {
            return "YES";
        } else if(first_count==1) {
            return "YES";
        } else {
            return "NO";
        }
    }


}
