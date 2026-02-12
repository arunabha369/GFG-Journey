int findPattern(string &s, string &p) {
    int pos = s.find(p);
    
    if (pos != string::npos)
        return pos;
    else
        return -1;
}
