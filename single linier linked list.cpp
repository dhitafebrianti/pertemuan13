#include <iostream>
#include <string>

using namespace std;

struct biodata{
//membuattipe data struct yang berfunsimenyimpanbeberapatipe data yang berbeda.
int no_kk ;
int tanggal_lahir;
char nik_kk;

biodata*next;        //Nama_struct*next.
};

void printList(biodata*n)      //MembuatfungsiprintList
{
while (n!= NULL)       //syarat n tidaksamadengan NULL
    {

cout<<"no_kk        : "<<n->no_kk<<" "<<endl;;
cout<<"tanggal_lahir: "<<n->tanggal_lahir<<" "<<endl;
cout<<"nik_kk       : "<<n->nik_kk<<" "<<endl;
cout<< " "<<endl;

            //n-.data adalahsebuah variable yang akan di panggil
        n = n->next;
    }
}

int main () //fungsi utama dari program
{biodata*head = NULL;
biodata*second = NULL;
biodata*third = NULL;

head = new biodata();
second = new biodata();
third = new biodata();

head->no_kk = 1111;
head->tanggal_lahir = 18;
head->nik_kk = '1122';
head->next = second;

second->no_kk = 2222;
second->tanggal_lahir = 19;
second->nik_kk = '2233';
second->next = third;

third->no_kk = 3333;
third->tanggal_lahir = 20;
third->nik_kk = '3344';
third->next = NULL;

printList(head);

cin.get();
return 0;
}
