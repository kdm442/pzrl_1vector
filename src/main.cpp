#include "../include/Vector.h"

int main()
{
    //! Конструктор без параметров
      //! Конструктор без параметров
      Vector vec1;
      std::cout << "Конструктор без параметров \n";

    //! Конструктор с параметрами
    double arr[] = {1.1, 3.3};
    Vector vectmp(arr, 2);
    std::cout << "Конструктор с параметрами \nvec2 = ";
    vectmp.printVec();


    //PushBack
    vectmp.pushBack(5.5);
    std::cout << "PushBack '5.5' \nvec2 = ";
    vectmp.printVec();


    //PushFront
    vectmp.pushFront(1.1);
    std::cout << "PushFront '1.1' \nvec2 = ";
    vectmp.printVec();


    // Insert 
    //Вставка элемента value в позицию pos
    vectmp.insert(4.4, 1);
    std::cout << "Вставка элемента '4.4' в позицию 2 \nvec2 = ";

    vectmp.printVec();


    // Вставка массива элементов типа ValueType в позицию pos
    double arrtmp[] = {1.1, 2.2, 4.4};
    Vector vectmp2(arrtmp, 3);

    double arrtmp2[] = {3.3, 5.5};
    vectmp2.insert(arrtmp2, 2, 2);
    std::cout << "Вставка tmp_arr в позицию 3\nvec3 = ";
    vectmp2.printVec();

    // Вставка содержимого вектора в позицию pos
    
    Vector vectmp3(arrtmp, 3);

   
    Vector tmp_vec(arrtmp2,2); 
    vectmp3.insert(tmp_vec, 2);
    std::cout << "Вставка tmp_vec в позицию 3\nvec4 = ";
    vectmp3.printVec();


    // Удаление с конца
    vectmp3.popBack();
    std::cout << "Удаление с конца\nvec4 = ";
    vectmp3.printVec();


    // Удаление из начала
    vectmp3.popFront();
    std::cout << "Удаление из начала\nvec4 = ";
    vectmp3.printVec();


    // Удалить элемент(ы) из вектора
    vectmp2.erase(1, 3);
    std::cout << "Удалить  3 элемента из вектора\nvec3 = ";
    vectmp2.printVec();


    // Удалить элемент(ы) из вектора
    double arrtmp3[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    Vector vectmp4(arrtmp3, 5);
    vectmp4.eraseBetween(1, 3);
    std::cout << "Удалить с 2.2 до 4.4 элемент из вектора\nvec5 = ";
    vectmp4.printVec();

 // Поиск первого вхождения значения
 std::cout << "Поиск первого вхождения '4.4'\nEclips = " << vectmp4.find(4.4) << std::endl;


 std::cout << "size v5| " << vectmp4.size() << "\n";

 std::cout << "capacity v5| " << vectmp4.capacity() << "\n";

 std::cout << "loadFactor v5| " << vectmp4.loadFactor() << "\n";

 vectmp4.shrinkToFit();
 std::cout << "v5.shrinkToFit|" <<  " Capacity = " << vectmp4.capacity() << "\n";

 vectmp4.reserve(10);
 std::cout << "v5.reserve|" << " Capacity = " << vectmp4.capacity() << "\n";

 return 0;
}