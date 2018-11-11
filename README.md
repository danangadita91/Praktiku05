# Praktiku05


# Latihan1 : "Mencari nilai terbesar dari banyak bilangan dengan DO-WHILE"

```
Algoritma :
1. Deklarasi X dengan type data integer sebagai variable input
	int x;
2. Deklarasi max dengan type data integer sebagai variable pembanding nilai inputan
	int max(0);
3. Tampilakan nilai terbesar dan menghentikan perulangan menggunakan DO-WHILE,
   dengan kode sebagai berikut :
	do {
	cout << "Masukan bilangan :";
 	cin >> x;
 	if (x>max)
    	max=x;
	}
	while (x!=0);
	cout << "Bilangan terbesar adalah : " << max << endl;
	}

   *Penjelasan: ketika nilai input X= 0 (x!=0), maka akan bilangan input akan dibandingkan
		if (x>max) (max=x), kemudian akan di tampilkan(paling besar)
		cout << "Bilangan terbesar adalah : " << max << endl;
```

Berikut Pseudo-Code :

```
1. X= ... X <--
2. while (x!=0) goto no 3, else no 1
3. Do.. if (x>max) (max=x), goto no 4
4. Tampilkan
```

Berikut kode lengkapnya :

```c++
int main() {
    int x;
    int max(0);

do {
 cout << "Masukan bilangan :";
 cin >> x;
 if (x>max)
    max=x;
}
while (x!=0);
cout << "Bilangan terbesar adalah : " << max << endl;
}
```

Berikut hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktiku05/master/Latihan1/Latihan1(1).png)

![img](https://raw.githubusercontent.com/danangadita91/Praktiku05/master/Latihan1/Latihan1(2).png)



# Latihan 2 : "Contoh Program Menggunakan Operator Logika OR ( || )"

```
Algoritma :
1. Deklarasikan variable A, B, C dengan type data integer
	int A, B, C;
2. Penggunaan Operator Logika OR (||) = TRUE
	if(a+b==c || a+c==b || b+c==a)
3. Tampilkan hasil (Benar-Salah)

   *Penjelasan : jika hasil nilai input A+B=C, maka akan tampil Benar
		 jika hasil nilai input A+B!=C, maka aka tampil Salah
```

Berikut Pseudo-Code :

```
1. A =.... A <--
2. B =.... B <--
3. C =.... C <--
4. if(a+b==c || a+c==b || b+c==a)=True, goto no 5, else no 6
5. Tampilkan Benar
6. Tampilkan Salah
```

Berikut kode lengkapnya :

```c++
int main()
{
    int a, b, c;
    cout<< "Masukan Nilai A= ";
    cin>> a;
    cout<< "Masukan Nilai B= ";
    cin>> b;
    cout<< "Masukan Nilai C= ";
    cin>> c;

    if(a+b==c || a+c==b || b+c==a)
        cout<< "Benar";
    else
        cout<< "Salah";
}
```

Berikut hasilnya :

![img](https://raw.githubusercontent.com/danangadita91/Praktiku05/master/Latihan2/Program%20OR%20(benar).png)

![img](https://raw.githubusercontent.com/danangadita91/Praktiku05/master/Latihan2/Program%20OR%20(salah).png)