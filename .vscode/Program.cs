using System;
using System.Collections;
using System.Collections.Generic;

namespace _vscode
{
    class Program
    {
        static void Main(string[] args)
        {
           string[] can ={"Canh","Tân","Nhâm","Quý","Giáp","Ất","Bính","Đinh","Mậu","Kỷ"};
           string[] chi = {"Thân","Dậu","Tuất","Hợi","Tý","Sửu","Dần","Mẹo","Thìn","Tỵ","Ngọ","Mùi"};
           int nam = 0;
           while(true)
           {
               Console.WriteLine("Vui lòng nhập năm dương lịch");
               string chuoi = Console.ReadLine();
               try{
               nam = (int)Convert.ToInt32(chuoi);
               break;
               }
               catch(Exception ex){
                   Console.WriteLine("Vui lòng nhập lại");
               }
           }
           string namAmLich = can[nam%10]+" "+chi[nam%12];
           Console.WriteLine(namAmLich);

        }
    }
}
