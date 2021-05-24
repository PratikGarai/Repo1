#include<bits/stdc++.h>
using namespace std;

int pages[1000];
int n=0;
int capacity=0;

void input() 
{
    cout<<"Enter the number of pages : ";
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        cout<<"Enter the "<<i+1<<"th page : ";
        cin>>pages[i];
    }
    cout<<"Enter the number of frames : ";
    cin>>capacity;
}

void getFrames() 
{
    cout<<"Enter the number of frames : ";
    cin>>capacity;
}

void report() 
{
    cout<<"\n============================================\n";
    cout<<"Page sequence length : "<<n<<endl;
    cout<<"Page sequence : "<<endl;
    for(int i=0;i<n;i++)
        cout<<pages[i]<<" ";
    cout<<endl;
    cout<<"Frames : "<<capacity<<endl;
    cout<<"\n============================================\n\n";
}
  
void pageFaultsLRU()
{
    report();
    unordered_set<int> s;
    unordered_map<int, int> indexes;
    int page_faults = 0;
    for (int i=0; i<n; i++)
    {
        if (s.size() < capacity)
        {
            if (s.find(pages[i])==s.end())
            {
                s.insert(pages[i]);
                page_faults++;
            }
            indexes[pages[i]] = i;
        }
        else
        {
            if (s.find(pages[i]) == s.end())
            {
                int lru = INT_MAX, val;
                for (auto it=s.begin(); it!=s.end(); it++)
                {
                    if (indexes[*it] < lru)
                    {
                        lru = indexes[*it];
                        val = *it;
                    }
                }
                s.erase(val);
                s.insert(pages[i]);
                page_faults++;
            }
            indexes[pages[i]] = i;
        }
    }
    cout << "Number of Page faults : "<< page_faults;
    cout<<"\n-----------------------------------------------\n\n";
}

void pageFaultsFIFO()
{
    report();
    unordered_set<int> s;
    queue<int> indexes;
    int page_faults = 0;
    for (int i=0; i<n; i++)
    {
        if (s.size() < capacity)
        {
            if (s.find(pages[i])==s.end())
            {
                s.insert(pages[i]);
                page_faults++;
                indexes.push(pages[i]);
            }
        }
        else
        {
            if (s.find(pages[i]) == s.end())
            {
                int val = indexes.front();
                indexes.pop();
                s.erase(val);
                s.insert(pages[i]);
                indexes.push(pages[i]);
                page_faults++;
            }
        }
    }
    cout << "Number of Page faults : "<< page_faults;
    cout<<"\n-----------------------------------------------\n\n";
}


bool search(int key, vector<int>& fr)
{
    for (int i = 0; i < fr.size(); i++)
        if (fr[i] == key)
            return true;
    return false;
}
  
int predict(int pg[], vector<int>& fr, int pn, int index)
{
    int res = -1, farthest = index;
    for (int i = 0; i < fr.size(); i++) {
        int j;
        for (j = index; j < pn; j++) {
            if (fr[i] == pg[j]) {
                if (j > farthest) {
                    farthest = j;
                    res = i;
                }
                break;
            }
        }
        if (j == pn)
            return i;
    }
    return (res == -1) ? 0 : res;
}
  
void pageFaultsOptimal()
{
    report();
    vector<int> fr;
    int hit = 0;
    for (int i = 0; i < n; i++) {
        if (search(pages[i], fr)) {
            hit++;
            continue;
        }
        if (fr.size() < capacity)
            fr.push_back(pages[i]);
        else {
            int j = predict(pages, fr, n, i + 1);
            fr[j] = pages[i];
        }
    }
    cout << "No. of hits = " << hit << endl;
    cout << "No. of misses = " << n - hit << endl;
    cout<<"\n-----------------------------------------------\n\n";
}

  
int main()
{
	int ch;
	while(1)
	{
		cout<<endl<<endl<<"***\t\tMENU\t\t***"<<endl;
		cout<<"Enter 1 to enter data"<<endl;
		cout<<"Enter 2 to use LRU"<<endl;
		cout<<"Enter 3 to use FIFO"<<endl;
		cout<<"Enter 4 to use Optimal Replacement"<<endl;
		cout<<"Enter 5 to change number of frames"<<endl;
		cout<<"Enter 6 to exit"<<endl;
		cout<<endl<<"Enter your choice : ";
		cin>>ch;
		if(ch==1)
    			input();
		else if(ch==2)
    			pageFaultsLRU();
		else if(ch==3)
   			pageFaultsFIFO();
		else if(ch==4)
    			pageFaultsOptimal();
		else if(ch==5)
			getFrames();
		else 
			break;
	}
	cout<<"\n\nBye!\n";
    return 0;
}
