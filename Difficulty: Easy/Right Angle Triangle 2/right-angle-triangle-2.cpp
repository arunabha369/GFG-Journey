void triangle(int s) {

    for (int i = 1; i <= s; i++) {

        for (int j = 1; j <= i; j++) {

            // First column, diagonal, and last row
            if (j == 1 || j == i || i == s)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}