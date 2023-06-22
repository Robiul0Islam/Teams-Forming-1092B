/*
There are 𝑛
 students in a university. The number of students is even. The 𝑖
-th student has programming skill equal to 𝑎𝑖
.

The coach wants to form 𝑛2
 teams. Each team should consist of exactly two students, and each student should belong to exactly one team. Two students can form a team only if their skills are equal (otherwise they cannot understand each other and cannot form a team).

Students can solve problems to increase their skill. One solved problem increases the skill by one.

The coach wants to know the minimum total number of problems students should solve to form exactly 𝑛2
 teams (i.e. each pair of students should form a team). Your task is to find this number.

Input
The first line of the input contains one integer 𝑛
 (2≤𝑛≤100
) — the number of students. It is guaranteed that 𝑛
 is even.

The second line of the input contains 𝑛
 integers 𝑎1,𝑎2,…,𝑎𝑛
 (1≤𝑎𝑖≤100
), where 𝑎𝑖
 is the skill of the 𝑖
-th student.

Output
Print one number — the minimum total number of problems students should solve to form exactly 𝑛2
 teams.

Examples
input
6
5 10 2 3 14 5
output
5
input
2
1 100
output
99
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i=i+2){
        sum=sum+(arr[i+1]-arr[i]);
    }
    cout<<sum<<endl;


}