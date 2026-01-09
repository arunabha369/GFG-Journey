void square(int s) {
    for (int i = 1; i <= s; i++) {
        for (int j = 1; j <= s; j++) {
            if (i == 1 || i == s || j == 1 || j == s)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
