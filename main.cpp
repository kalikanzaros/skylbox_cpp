#include <iostream>

using namespace std;

void module41(){
    int one = 0, two = 0;
    cout << "Проверка минимального значение из двух чисел.\nВведите первое число: ";
    cin >> one;
    cout << "\nВведите второе число: ";
    cin >> two;
    cout << "\n------Проверяем-----\n";
    if(one < two){
        cout << "Наименьшее число: " << one;
        cout << "\n--Проверка закончена--\n";
    }
    else if (two < one){
        // Не вижу смысла в использовании else if, но пусть будет
        cout <<  "Наименьшее число: " << two;
        cout << "\n--Проверка закончена--\n";
    }
    else if (two == one){
        cout << "Числа равны!";
        cout << "\n--Проверка закончена--\n";
    }
}

void module42(){
    /*  Напишите программу которая проверяет то, как вы умеете складывать два числа в уме.
     *  Программа должна выводить два разных сообщения на верный и неверный ответ пользователя.
     *  В последнем случае надо показывать правильный результат.
     */

    int one = 0, two = 0, summ = 0;
    cout << "Проверка минимального правильности суммы чисел.\nВведите первое число: ";
    cin >> one;
    cout << "\nВведите второе число: ";
    cin >> two;
    cout << "\nВведите их сумму: ";
    cin >> summ;
    cout << "\n-------Проверяем-------\n";
    if(one + two != summ){
        cout << "Ошибка! Верный результат:" << one + two;
        cout << "\n--Проверка закончена--\n";
    }
    else {
        cout <<  "Верно!";
        cout << "\n--Проверка закончена--\n";
    }
}

void module43(){
    /*  Напишите программу, которая проверяет, чётное ли число ввел пользователь.
     *  Пример: int remainder = x % 2 (вычисляет остаток от деления `x` на 2).
     */

    int one = 0;
    cout << "Проверка четности чиспа.\nВведите число: ";
    cin >> one;
    cout << "\n-------Проверяем-------\n";
    if(one %2 == 0 ){
        cout << "Число " <<  one << " чётное";
        cout << "\n--Проверка закончена--\n";
    }
    else {
        cout <<  "Число " <<  one << " не чётное";
        cout << "\n--Проверка закончена--\n";
    }
    return;
}

void module44(){
    /*    Напишите программу, которая определяет уровень персонажа в компьютерной игре.
     *    Пользователь вводит число «очков опыта», а программа вычисляет уровень.
     *    Новый уровень даётся при достижении 1000, 2500 и 5000 «очков опыта». Начальный уровень равен 1.
     */

  int lewel = 1, one = 0;
    cout << "Введите число очков опыта: ";
    cin >> one;
    cout << "\n-------Считаем-------\n";
    if (one >= 1000 && one < 2500) {
      cout << "Ваш уровень: " << lewel + 1;
      cout << "\n--Счет окончен--\n";
    } else if (one >= 2500 && one < 5000) {
      cout << "Ваш уровень: " << lewel + 2;
      cout << "\n--Счет окончен--\n";
    } else if (one >= 5000) {
      cout << "Ваш уровень: " << lewel + 3;
      cout << "\n--Счет окончен--\n";
    } else if (one < 0) {
      cout << "Ваш уровень понижен.";
      cout << "\n--Счет окончен--\n";
    } else if (one < 1000 && one >= 0) {
      cout << "Ваш уровень 1. Ничего не происходит.";
      cout << "\n--Счет окончен--\n";

}
    return;
}

void module45(){
    /*    Напишите программу, которая проверяет, делится ли одно число на другое без остатка.  */

  int one = 0, two = 0;
  cout << "Проверяем, делится ли одно число на другое без остатка\nВведите первое число(делимое): ";
  cin >> one;
  cout << "\nВведите второе число(делитель): ";
  cin >> two;
  cout << "\n-------Проверяем-------\n";
  if(one % two != 0){
      cout <<  "Нет, "<< one << " не делится на " << two << " без остатка!";
      cout << "\n--Проверка закончена--\n";
  }
  else if(one % two == 0){
      cout <<  "Да, "<< one << " делится на " << two << " без остатка!";
      cout << "\n--Проверка закончена--\n";
  }
}

void module46(){
  int mansCount;
  int barbersCount;

  cout << "************** арбершоп-калькул€тор **************\n";
  cout << "Сколько волостатых мужчин в городе: ";
  cin >> mansCount;

  cout << "Сколько барберов удалось нанять?: ";
  cin >> barbersCount;

  int barberOneManSession = 1;
  int barberWorkTime = 8;
  int barberWorkDays = 30;
  int barberMenSessionInMont = barberWorkTime * barberWorkDays / barberOneManSession ;

  if(mansCount <= 0){
      cout << "В городе нет волосатых мужчин!!!\n";
    }
  else if(mansCount <= 0){
      cout << "В городе нет барберов!!!\n";
    }
  else if(mansCount <= 0 && barbersCount <= 0){
      cout << "В городе одни женщины и дети!!!\n";
    }
  else if((barberMenSessionInMont * barbersCount) % mansCount == 0){
      cout << "Барберов, работающих каждый день, без перерыва хватает\n";
   }
  else if((barberMenSessionInMont * barbersCount) % mansCount != 0){
     cout << "Барберов, работающих каждый день, без перерыва не хватает\n";
   }
  return;
}

void module47(){

  string sharedComponentOne = "\n1.Суп дошик\n2.Картошкэ ужарене\n3.Хлеп серый\n4.Яшменне кофей + булещке";
  string sharedComponentTwo = "\n1.Лагман трикотэ\n2.Cамса двасабак\n3.Cалатэ мухоморкЭ\n4.Лепёшке ЭНЛО + чай из веник";
  string sharedComponentUniqOne = "\tШаурме с хлебний катлет\n";
  string sharedComponentUniqTwo = "\tШаверме с водке\n";
  string sharedComponentUniqTree = "\tРыбе элитне: стощне води виитнамана\n";
  string sharedComponentUniqFree = "\tАнанасе-Бананасе в тарелька\n";

  cout << "*****Меню какой-то забегаловки... с непередаваемым азиатским колоритом"
          "\nЕсле Вы знаете русский язык и арабске цифре\n"
          "напишите какой сегодня день неделяма(от 1 до 7)\n:";
  int day = 0;
  cin >> day;
  if(day >= 1 && day <= 7){
      cout << "Меню сегодня ";
      if(day == 1){
        cout << " (понедельник)" << sharedComponentOne <<  "\n" ;
      } else if(day == 2){
          cout << " (вторник)" << sharedComponentTwo << "\n" ;
        }else if(day == 3){
          cout << " (среда)" << sharedComponentTwo << "\n" ;
        }else if(day == 4){
          cout << " (четверг)" << sharedComponentOne << "\n++++++++++++++++++\nвзамен вторых блюдов можно\n" << sharedComponentUniqTree << "\n" ;
        }else if(day == 5){
          cout << " (пятница)" << sharedComponentOne << "\n++++++++++++++++++\nпразднещне дабафке: " << sharedComponentUniqTwo <<"\n" ;
        }else if(day == 6){
          cout << " (суббота)" << sharedComponentTwo << "\n" ;
        }else if(day == 7){
          cout << " (воскресенье) прадаём всё што остался в полцена!!!"  << sharedComponentOne <<"\n"<< sharedComponentTwo << "\n" ;
        }
      cout << "\nдополнительно можно заказать:\n" << sharedComponentUniqFree <<
              sharedComponentUniqOne << sharedComponentUniqTree <<  sharedComponentUniqTwo << "\n";

    }else{
      cout << "Нет такого дня!!! Заходи как нибудь в другой раз, мы работаем только в семь дней недели,"
              "в восьмой и больше или меньше не работаем!!!";
    }

  return;
}

void module51()
{

}

int main()
{
    module51();
    return 0;
}
