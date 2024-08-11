///ZM///
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"CGPA CALCULATOR\n"<<endl<<"Enter No. of Semesters: ";
    int t;
    cin>>t;
    float ovsum=0,ovcrdt=0;
    for(int k=1; k<=t; k++)
    {
        int n,flag=0,cnt=0;
        cout<<"\nSemester No. "<<k<<endl;
        cout<<"Enter No. of Courses: ";
        cin>>n;
        cout<<"Enter Course Name, Course Credit and Obtained Grade: "<<endl;
        float sum1=0,sum2=0;
        while(n--)
        {
            string sub,grd;
            float crdt;
            cin>>sub>>crdt>>grd;
            if(grd=="A+")
                sum1+=4*crdt;
            else if(grd=="A")
                sum1+=3.75*crdt;
            else if(grd=="A-")
                sum1+=3.50*crdt;
            else if(grd=="B+")
                sum1+=3.25*crdt;
            else if(grd=="B")
                sum1+=3*crdt;
            else if(grd=="B-")
                sum1+=2.75*crdt;
            else if(grd=="C+")
                sum1+=2.50*crdt;
            else if(grd=="C")
                sum1+=2.25*crdt;
            else if(grd=="C-")
                sum1+=2*crdt;
            else if(grd=="F")
            {
                sum1+=0*crdt;
                flag=1;
                cnt++;
            }
            sum2+=crdt;
        }
        if(flag==1&&cnt==1)
            printf("Sorry, you have failed in 1 course!\nObtained CGPA: %f\n",sum1/sum2);
        else if(flag==1&&cnt>1)
            printf("Sorry, you have failed in %d courses!\nObtained CGPA: %f\n",cnt,sum1/sum2);
        else
            printf("Obtained CGPA: %f\n",sum1/sum2);
        ovsum+=sum1,ovcrdt+=sum2,sum1=0,sum2=0;
    }
    printf("\nOverall CGPA: %f\n",ovsum/ovcrdt);
    return 0;
}
