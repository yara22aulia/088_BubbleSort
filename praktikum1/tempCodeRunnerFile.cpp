{ // procedur untuk input
    int d;
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
        break;
        else
        {
            cout << "\nArray dapat maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i]
    }
}