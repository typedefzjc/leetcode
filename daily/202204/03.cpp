char nextGreatestLetter(vector<char>& letters, char target) {

    return target >= letters.back() ? letters[0] : *upper_bound(letters.begin(), letters.end()-1, target);
    
}