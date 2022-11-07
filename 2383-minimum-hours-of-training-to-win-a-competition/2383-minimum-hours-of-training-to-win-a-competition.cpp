class Solution {
public:
int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
    int need_exp = 0, cur_exp = initialExperience;
    for (int i = 0; i < experience.size();  cur_exp += experience[i++])
        need_exp += max(experience[i] - need_exp - cur_exp + 1, 0);
    return max(accumulate(begin(energy), end(energy), 1) - initialEnergy, 0) + need_exp;
}
};