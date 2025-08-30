class Solution {
public:
    int maxScore(string s) {
    int countzero = 0;
    int countone = 0;
    int maxsum = 0;
    for (int i = 0;i < s.size()-1;i++)
    {
        countone = 0;
        countzero ;

        if (s[i] == '0')
        {
            countzero++;
        }
        for (int j = i + 1;j < s.size();j++)
        {
            if (s[j] == '1')
            {
                countone++;
            }
        }
        maxsum = max(maxsum, countone + countzero);

    }
    return maxsum;
}
    
};
