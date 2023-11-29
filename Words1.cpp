#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    
 setlocale(LC_ALL, "Rus");
    
     std::string line;

     std::ifstream in("слова.txt");      //открытие файла для чтения
     if (!in)
     {
         cout << "Файл не найден\n";
         return 1;
     }

     std::vector<std::string> words;

     while (!in.eof())
     {
         std::string s;
         in >> s;  //Считываем строку из файла
         words.push_back(s);
     }

     //for(int i=0;i<n;i++)
     //   std::cout << words[i] << std::endl;

     std::vector<std::string> result;

     for (int i = 0; i < words.size(); i++)
     {
         int num[256] = { 0 };
         for (int j = 0; j < words[i].length(); j++)
             num[(unsigned char)words[i][j]]++;

         for (int j = 0; j < 256; j++)
         //    std::cout << (char)j << " " << num[j] << std::endl;
             if (num[j] >= 3)
             {
                 result.push_back(words[i]);
                 break;
             }
     }

     for (int i = 0; i < result.size(); i++)
         std::cout << result[i] << std::endl;

     sort(result.begin(), result.end(), [](const std::string& a, const std::string& b)
         { return a.length() < b.length(); });
   //  char words[1000][1];  //Алгоритм распаковки слов
   //  int n = 0;
     
     for (int i = 0; i < result.size(); i++)
         std::cout << result[i] << std::endl;



     std::ofstream out("output.txt"); //Запись слов в порядке возрастания в файл

     for (int i = 0; i < result.size(); i++)
         out << "<" << result[i] << ">" << endl;
     


    //Сортировка строки по возрастанию длины слов
 
     
}
