#include <iostream>
using namespace std;
 main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

cout<<"Enter number of rows (between 1 and 100): ";
    cin>>r;
cout<<"Enter number of columns (between 1 and 100): ";
    cin>>c;

    cout<<"\nEnter elements of 1st matrix:\n";

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            cout<<"Enter element "<<i+1<<j+1;
            cin>>a[i][j];
        }

    cout<<"Enter elements of 2nd matrix:\n";
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            cout<<"Enter element: "<<i+1<< j+1;
             cout<<b[i][j];
        }

 

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    
    cout<<"\nSum of two matrix is: \n\n";

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            cout<< sum[i][j];

            if(j==c-1)
            {
                cout<<("\n\n");
            }
        }
    
    return 0;
}
