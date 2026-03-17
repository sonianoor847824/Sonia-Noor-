    #include<iostream>
    using namespace std;
    main()
    {
        int n;
        int j=1;
        while( j <= 1)
         {
            if( j == 1)
             n = 9;
            cout << " table of " << n  << endl;;
            int i = 1;
           while( i <= 10)
          {
             cout <<n<<" x "<<i<<" = "<<n*i<<endl;
             i=i+1;
          }
          cout<<endl;
          j=j+1;
        }
    }