 PowerShell 7.5.4 pilar chiquino  nobre de la rama :while (true)
PS C:\Windows\System32> while (true) {
>>         // Mostrar tablero visible
>>         for (int i = 0; i < TAM; i++) {
>>             for (int j = 0; j < TAM; j++)
>>                 cout << visible[i][j] << " ";
>>             cout << endl;
>>         }
>>
>>         int f, c;
>>         cout << "Fila (0-4): ";
>>         cin >> f;
>>         cout << "Columna (0-4): ";
>>         cin >> c;
