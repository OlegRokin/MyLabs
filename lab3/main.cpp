#include <iostream>
#include "heap.h"
#include "heap.cpp"
#include "set.h"
#include "set.cpp"
#include "complex.h"
#include "person.h"
#include "extra.h"
#include <string>
#include <ctime>
using namespace std;

void dialog (string vars[], int vars_size, string request, int* choice) {
    cout << request;
    for(int i = 1; i < vars_size; ++i) cout << i << ". " << vars[i] << endl;

    int error;

    do {
        enterInt(choice);

        if (*choice < vars_size && *choice > 0) {
            cout << "Choice: " << vars[*choice] << endl << endl;
            error = 0;
        }
        else {
            cout << "Something's wrong. Try again." << endl << endl;
            error = 1;
        }
    } while (error);
}


int main()
{
    srand(time(NULL));

    string vars1[] = {"", "Ineteger numbers", "Float numbers", "Complex numbers", "Strings", "Students", "Teachers"};
    const int vars1_size = sizeof(vars1) / sizeof(vars1[0]);
    string request1 = "Choose a type of elements:\n";
    int* choice1 = new int;

    string vars2[] = {"", "Heap", "Set"};
    const int vars2_size = sizeof(vars2) / sizeof(vars2[0]);
    string request2 = "Choose a container:\n";
    int* choice2 = new int;

    string vars3[] = {"", "Generate randomly", "Fill by hand"};
    const int vars3_size = sizeof(vars3) / sizeof(vars3[0]);
    string request3 = "Choose an action:\n";
    int* choice3 = new int;

    string vars4[] = {"", "Add an element", "Delete an element", "Search for an element", "Make a subheap", "Save pairs in a string", "Done"};
    const int vars4_size = sizeof(vars4) / sizeof(vars4[0]);
    string request4 = "Choose an action:\n";
    int* choice4 = new int;

    string vars5[] = {"", "Add an element", "Delete an element", "Search for an element", "Save in a string", "Make a second set", "Union (+)", "Complement (-)", "Intersection (*)", "Check equality (=)", "Check as a subset", "Done"};
    const int vars5_size = sizeof(vars5) / sizeof(vars5[0]);
    string request5 = "Choose an action:\n";
    int* choice5 = new int;

    string vars6[] = {"", "Yes", "No"};
    const int vars6_size = sizeof(vars6) / sizeof(vars6[0]);
    string request6 = "Do you want to continue?\n";
    int* choice6 = new int;

    int* length = new int;
    do {
        dialog(vars1, vars1_size, request1, choice1);
        dialog(vars2, vars2_size, request2, choice2);

        if (*choice2 == 1) {    //Heap
            Heap<int>* heap_int = new Heap<int>;
            Heap<double>* heap_double = new Heap<double>;
            Heap<Complex>* heap_complex = new Heap<Complex>;
            Heap<string>* heap_string = new Heap<string>;
            Heap<Student>* heap_student = new Heap<Student>;
            Heap<Teacher>* heap_teacher = new Heap<Teacher>;
            dialog(vars3, vars3_size, request3, choice3);

            if (*choice3 == 1) {    //Generate
                cout << "Enter a length of a heap: ";
                enterLength(length);

                if (*choice1 == 1) {    //Integers
                    generateHeap(heap_int, length);
                    cout << *heap_int << endl << endl;
                }
                if (*choice1 == 2) {    //Doubles
                    generateHeap(heap_double, length);
                    cout << *heap_double << endl << endl;
                }
                if (*choice1 == 3) {    //Complex
                    generateHeap(heap_complex, length);
                    cout << *heap_complex << endl << endl;
                }
                if (*choice1 == 4) {    //Strings
                    generateHeap(heap_string, length);
                    cout << *heap_string << endl << endl;
                }
                if (*choice1 == 5) {    //Students
                    generateHeap(heap_student, length);
                    cout << *heap_student << endl << endl;
                }
                if (*choice1 == 6) {    //Teachers
                    generateHeap(heap_teacher, length);
                    cout << *heap_teacher << endl << endl;
                }

                *choice3 = 2;
            }

            if (*choice3 == 2) {    //Fill
                do {
                    dialog(vars4, vars4_size, request4, choice4);

                    switch(*choice4) {
                        case 1: //Enter an element
                            if (*choice1 == 1) {    //Integers
                                int a;
                                cout << "Enter an element: ";
                                enterInt(&a);
                                heap_int->insert(a);
                                cout << *heap_int << endl << endl;
                            }
                            if (*choice1 == 2) {    //Doubles
                                double a;
                                cout << "Enter an element: ";
                                enterDouble(&a);
                                heap_double->insert(a);
                                cout << *heap_double << endl << endl;
                            }
                            if (*choice1 == 3) {    //Complex
                                Complex a;
                                cout << "Enter an element:" << endl;
                                enterComplex(&a);
                                heap_complex->insert(a);
                                cout << *heap_complex << endl << endl;
                            }
                            if (*choice1 == 4) {    //Strings
                                string a;
                                cout << "Enter an element: ";
                                enterString(&a);
                                heap_string->insert(a);
                                cout << *heap_string << endl << endl;
                            }
                            if (*choice1 == 5) {    //Students
                                Student a;
                                cout << "Enter an element:" << endl;
                                enterStudent(&a);
                                heap_student->insert(a);
                                cout << *heap_student << endl << endl;
                            }
                            if (*choice1 == 6) {    //Teachers
                                Student a;
                                cout << "Enter an element:" << endl;
                                enterStudent(&a);
                                heap_student->insert(a);
                                cout << *heap_student << endl << endl;
                            }

                            break;

                        case 2: //Delete an element
                            if (*choice1 == 1) {
                                if (!heap_int->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index;
                                cout << "Enter an index of an element to delete: ";
                                enterIndex(&index);
                                heap_int->delByValue(heap_int->getByIndex(index));
                                cout << *heap_int << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!heap_double->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index;
                                cout << "Enter an index of an element to delete: ";
                                enterIndex(&index);
                                heap_double->delByValue(heap_double->getByIndex(index));
                                cout << *heap_double << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!heap_complex->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index;
                                cout << "Enter an index of an element to delete: ";
                                enterIndex(&index);
                                heap_complex->delByValue(heap_complex->getByIndex(index));
                                cout << *heap_complex << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!heap_string->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index;
                                cout << "Enter an index of an element to delete: ";
                                enterIndex(&index);
                                heap_string->delByValue(heap_string->getByIndex(index));
                                cout << *heap_string << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!heap_student->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index;
                                cout << "Enter an index of an element to delete: ";
                                enterIndex(&index);
                                heap_student->delByValue(heap_student->getByIndex(index));
                                cout << *heap_student << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!heap_teacher->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index;
                                cout << "Enter an index of an element to delete: ";
                                enterIndex(&index);
                                heap_teacher->delByValue(heap_teacher->getByIndex(index));
                                cout << *heap_teacher << endl << endl;
                            }
                            break;

                        case 3: //Search for an element
                            if (*choice1 == 1) {    //Integers
                                if (!heap_int->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int element;
                                cout << "Enter an element to find an index: ";
                                enterInt(&element);
                                int index_search = heap_int->getElementIndex(element);
                                if (index_search != -1) cout << "Element's index: " << heap_int->getElementIndex(element) << endl << endl;
                                if (index_search == -1) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!heap_double->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                double element;
                                cout << "Enter an element to find an index: ";
                                enterDouble(&element);
                                int index_search = heap_double->getElementIndex(element);
                                if (index_search != -1) cout << "Element's index: " << heap_double->getElementIndex(element) << endl << endl;
                                if (index_search == -1) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!heap_complex->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                Complex element;
                                cout << "Enter an element to find an index: ";
                                enterComplex(&element);
                                int index_search = heap_complex->getElementIndex(element);
                                if (index_search != -1) cout << "Element's index: " << heap_complex->getElementIndex(element) << endl << endl;
                                if (index_search == -1) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!heap_string->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                string element;
                                cout << "Enter an element to find an index: ";
                                enterString(&element);
                                int index_search = heap_string->getElementIndex(element);
                                if (index_search != -1) cout << "Element's index: " << heap_string->getElementIndex(element) << endl << endl;
                                if (index_search == -1) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!heap_student->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                Student element;
                                cout << "Enter an element to find an index:" << endl;
                                enterStudent(&element);
                                int index_search = heap_student->getElementIndex(element);
                                if (index_search != -1) cout << "Element's index: " << heap_student->getElementIndex(element) << endl << endl;
                                if (index_search == -1) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!heap_teacher->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                Teacher element;
                                cout << "Enter an element to find an index:" << endl;
                                enterTeacher(&element);
                                int index_search = heap_teacher->getElementIndex(element);
                                if (index_search != -1) cout << "Element's index: " << heap_teacher->getElementIndex(element) << endl << endl;
                                if (index_search == -1) cout << "Element is not found" << endl << endl;
                            }

                            break;

                        case 4: //Make a subheap
                            if (*choice1 == 1) {
                                if (!heap_int->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index_sub;
                                cout << "Enter an index of an element to become a root of a subheap: ";
                                enterIndex(&index_sub);
                                Heap<int>* sub_heap_int = heap_int->extractSubHeap(index_sub);
                                cout << *sub_heap_int << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!heap_double->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index_sub;
                                cout << "Enter an index of an element to become a root of a subheap: ";
                                enterIndex(&index_sub);
                                Heap<double>* sub_heap_double = heap_double->extractSubHeap(index_sub);
                                cout << *sub_heap_double << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!heap_complex->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index_sub;
                                cout << "Enter an index of an element to become a root of a subheap: ";
                                enterIndex(&index_sub);
                                Heap<Complex>* sub_heap_complex = heap_complex->extractSubHeap(index_sub);
                                cout << *sub_heap_complex << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!heap_string->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index_sub;
                                cout << "Enter an index of an element to become a root of a subheap: ";
                                enterIndex(&index_sub);
                                Heap<string>* sub_heap_string = heap_string->extractSubHeap(index_sub);
                                cout << *sub_heap_string << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!heap_student->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index_sub;
                                cout << "Enter an index of an element to become a root of a subheap: ";
                                enterIndex(&index_sub);
                                Heap<Student>* sub_heap_student = heap_student->extractSubHeap(index_sub);
                                cout << *sub_heap_student << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!heap_teacher->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int index_sub;
                                cout << "Enter an index of an element to become a root of a subheap: ";
                                enterIndex(&index_sub);
                                Heap<Teacher>* sub_heap_teacher = heap_teacher->extractSubHeap(index_sub);
                                cout << *sub_heap_teacher << endl << endl;
                            }
                            break;

                        case 5: //Save pairs in a string
                            string str;
                            if (*choice1 == 1) str = heap_int->SavePairsInString();
                            if (*choice1 == 2) str = heap_double->SavePairsInString();
                            if (*choice1 == 3) str = heap_complex->SavePairsInString();
                            if (*choice1 == 4) str = heap_string->SavePairsInString();
                            if (*choice1 == 5) str = heap_student->SavePairsInString();
                            if (*choice1 == 6) str = heap_teacher->SavePairsInString();

                            cout << str << endl << endl;
                            break;

                    }
                } while (*choice4 != 6);

            }

        }

        if (*choice2 == 2) {    //Set
            Set<int>* set_int = new Set<int>;
            Set<double>* set_double = new Set<double>;
            Set<Complex>* set_complex = new Set<Complex>;
            Set<string>* set_string = new Set<string>;
            Set<Student>* set_student = new Set<Student>;
            Set<Teacher>* set_teacher = new Set<Teacher>;

            Set<int>* set_int2 = new Set<int>;
            Set<double>* set_double2 = new Set<double>;
            Set<Complex>* set_complex2 = new Set<Complex>;
            Set<string>* set_string2 = new Set<string>;
            Set<Student>* set_student2 = new Set<Student>;
            Set<Teacher>* set_teacher2 = new Set<Teacher>;

            dialog(vars3, vars3_size, request3, choice3);

            if (*choice3 == 1) {    //Generate
                cout << "Enter a length of a set: ";
                enterLength(length);

                if (*choice1 == 1) {    //Integers
                    generateSet(set_int, length);
                    cout << *set_int << endl << endl;
                }
                if (*choice1 == 2) {    //Integers
                    generateSet(set_double, length);
                    cout << *set_double << endl << endl;
                }
                if (*choice1 == 3) {    //Complex
                    generateSet(set_complex, length);
                    cout << *set_complex << endl << endl;
                }
                if (*choice1 == 4) {    //Strings
                    generateSet(set_string, length);
                    cout << *set_string << endl << endl;
                }
                if (*choice1 == 5) {    //Students
                    generateSet(set_student, length);
                    cout << *set_student << endl << endl;
                }
                if (*choice1 == 6) {    //Teachers
                    generateSet(set_teacher, length);
                    cout << *set_teacher << endl << endl;
                }

                *choice3 = 2;
            }

            if (*choice3 == 2) {    //Fill
                do {
                    dialog(vars5, vars5_size, request5, choice5);

                    switch(*choice5) {
                        case 1: //Enter an element
                            if (*choice1 == 1) {    //Integers
                                int a;
                                cout << "Enter an element: ";
                                enterInt(&a);
                                set_int->insert(a);
                                cout << *set_int << endl << endl;
                            }
                            if (*choice1 == 2) {    //Doubles
                                double a;
                                cout << "Enter an element: ";
                                enterDouble(&a);
                                set_double->insert(a);
                                cout << *set_double << endl << endl;
                            }
                            if (*choice1 == 3) {    //Complex
                                Complex a;
                                cout << "Enter an element:" << endl;
                                enterComplex(&a);
                                set_complex->insert(a);
                                cout << *set_complex << endl << endl;
                            }
                            if (*choice1 == 4) {    //Strings
                                string a;
                                cout << "Enter an element: ";
                                enterString(&a);
                                set_string->insert(a);
                                cout << *set_string << endl << endl;
                            }
                            if (*choice1 == 5) {    //Students
                                Student a;
                                cout << "Enter an element:" << endl;
                                enterStudent(&a);
                                set_student->insert(a);
                                cout << *set_student << endl << endl;
                            }
                            if (*choice1 == 6) {    //Teachers
                                Teacher a;
                                cout << "Enter an element:" << endl;
                                enterTeacher(&a);
                                set_teacher->insert(a);
                                cout << *set_teacher << endl << endl;
                            }

                            break;

                        case 2: //Delete an element
                            if (*choice1 == 1) {
                                if (!set_int->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                int a;
                                cout << "Enter an element to delete: ";
                                enterInt(&a);
                                set_int->delByValue(a);
                                cout << *set_int << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!set_double->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                double a;
                                cout << "Enter an element to delete: ";
                                enterDouble(&a);
                                set_double->delByValue(a);
                                cout << *set_double << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!set_complex->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                Complex a;
                                cout << "Enter an element to delete:" << endl;
                                enterComplex(&a);
                                set_complex->delByValue(a);
                                cout << *set_complex << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!set_string->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                string a;
                                cout << "Enter an element to delete: ";
                                enterString(&a);
                                set_string->delByValue(a);
                                cout << *set_string << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!set_student->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                Student a;
                                cout << "Enter an element to delete:" << endl;
                                enterStudent(&a);
                                set_student->delByValue(a);
                                cout << *set_student << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!set_teacher->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                Teacher a;
                                cout << "Enter an element:" << endl;
                                enterTeacher(&a);
                                set_teacher->delByValue(a);
                                cout << *set_teacher << endl << endl;
                            }
                            break;

                        case 3: //Search for an element
                            if (*choice1 == 1) {    //Integers
                                if (!set_int->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                int element;
                                cout << "Enter an element to find an index: ";
                                enterInt(&element);
                                if (set_int->checkEntry(element)) cout << "Element is found" << endl << endl;
                                if (!set_int->checkEntry(element)) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!set_double->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                double element;
                                cout << "Enter an element to find an index: ";
                                enterDouble(&element);
                                if (set_double->checkEntry(element)) cout << "Element is found" << endl << endl;
                                if (!set_double->checkEntry(element)) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!set_complex->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                Complex element;
                                cout << "Enter an element to find an index: ";
                                enterComplex(&element);
                                if (set_complex->checkEntry(element)) cout << "Element is found" << endl << endl;
                                if (!set_complex->checkEntry(element)) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!set_string->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                string element;
                                cout << "Enter an element to find an index: ";
                                enterString(&element);
                                if (set_string->checkEntry(element)) cout << "Element is found" << endl << endl;
                                if (!set_string->checkEntry(element)) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!set_student->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                Student element;
                                cout << "Enter an element to find an index:" << endl;
                                enterStudent(&element);
                                if (set_student->checkEntry(element)) cout << "Element is found" << endl << endl;
                                if (!set_student->checkEntry(element)) cout << "Element is not found" << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!set_teacher->GetLength()) {
                                    cout << "The heap is empty" << endl << endl;
                                    break;
                                }
                                Teacher element;
                                cout << "Enter an element to find an index:" << endl;
                                enterTeacher(&element);
                                if (set_teacher->checkEntry(element)) cout << "Element is found" << endl << endl;
                                if (!set_teacher->checkEntry(element)) cout << "Element is not found" << endl << endl;
                            }
                            break;

                        case 4: {   //Save in a string
                            string str;
                            if (*choice1 == 1) str = set_int->SaveInString();
                            if (*choice1 == 2) str = set_double->SaveInString();
                            if (*choice1 == 3) str = set_complex->SaveInString();
                            if (*choice1 == 4) str = set_string->SaveInString();
                            if (*choice1 == 5) str = set_student->SaveInString();
                            if (*choice1 == 6) str = set_teacher->SaveInString();

                            cout << str << endl << endl;
                            }
                            break;

                        case 5: { //Make a second set

                            dialog(vars3, vars3_size, request3, choice3);

                            if (*choice3 == 1) {    //Generate
                                cout << "Enter a length of a set: ";
                                enterLength(length);

                                if (*choice1 == 1) {    //Integers
                                    generateSet(set_int2, length);
                                    cout << *set_int2 << endl << endl;
                                }
                                if (*choice1 == 2) {    //Integers
                                    generateSet(set_double2, length);
                                    cout << *set_double2 << endl << endl;
                                }
                                if (*choice1 == 3) {    //Complex
                                    generateSet(set_complex2, length);
                                    cout << *set_complex2 << endl << endl;
                                }
                                if (*choice1 == 4) {    //Strings
                                    generateSet(set_string2, length);
                                    cout << *set_string2 << endl << endl;
                                }
                                if (*choice1 == 5) {    //Students
                                    generateSet(set_student2, length);
                                    cout << *set_student2 << endl << endl;
                                }
                                if (*choice1 == 6) {    //Teachers
                                    generateSet(set_teacher2, length);
                                    cout << *set_teacher2 << endl << endl;
                                }
                            }

                            if (*choice3 == 2) {    //Fill
                                cout << "Enter a length of a set: ";
                                enterLength(length);

                                if (*choice1 == 1) {    //Integers
                                    fillSet(set_int2, length);
                                    cout << *set_int2 << endl << endl;
                                }
                                if (*choice1 == 2) {    //Integers
                                    fillSet(set_double2, length);
                                    cout << *set_double2 << endl << endl;
                                }
                                if (*choice1 == 3) {    //Complex
                                    fillSet(set_complex2, length);
                                    cout << *set_complex2 << endl << endl;
                                }
                                if (*choice1 == 4) {    //Strings
                                    fillSet(set_string2, length);
                                    cout << *set_string2 << endl << endl;
                                }
                                if (*choice1 == 5) {    //Students
                                    fillSet(set_student2, length);
                                    cout << *set_student2 << endl << endl;
                                }
                                if (*choice1 == 6) {    //Teachers
                                    fillSet(set_teacher2, length);
                                    cout << *set_teacher2 << endl << endl;
                                }
                            }
                            }
                            break;

                        case 6: { //Union
                            if (*choice1 == 1) {
                                if (!set_int->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_int2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_int << endl << endl;
                                cout << "B = " << *set_int2 << endl << endl;
                                cout << "A + B = " << *set_int + *set_int2 << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!set_double->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_double2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_double << endl << endl;
                                cout << "B = " << *set_double2 << endl << endl;
                                cout << "A + B = " << *set_double + *set_double2 << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!set_complex->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_complex2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_complex << endl << endl;
                                cout << "B = " << *set_complex2 << endl << endl;
                                cout << "A + B = " << *set_complex + *set_complex2 << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!set_string->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_string2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_string << endl << endl;
                                cout << "B = " << *set_string2 << endl << endl;
                                cout << "A + B = " << *set_string + *set_string2 << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!set_student->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_student2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_student << endl << endl;
                                cout << "B = " << *set_student2 << endl << endl;
                                cout << "A + B = " << *set_student + *set_student2 << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!set_teacher->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_teacher2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_teacher << endl << endl;
                                cout << "B = " << *set_teacher2 << endl << endl;
                                cout << "A + B = " << *set_teacher + *set_teacher2 << endl << endl;
                            }
                        }
                            break;

                        case 7: { //Complement
                            if (*choice1 == 1) {
                                if (!set_int->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_int2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_int << endl << endl;
                                cout << "B = " << *set_int2 << endl << endl;
                                cout << "A - B = " << *set_int - *set_int2 << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!set_double->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_double2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_double << endl << endl;
                                cout << "B = " << *set_double2 << endl << endl;
                                cout << "A - B = " << *set_double - *set_double2 << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!set_complex->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_complex2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_complex << endl << endl;
                                cout << "B = " << *set_complex2 << endl << endl;
                                cout << "A - B = " << *set_complex - *set_complex2 << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!set_string->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_string2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_string << endl << endl;
                                cout << "B = " << *set_string2 << endl << endl;
                                cout << "A - B = " << *set_string - *set_string2 << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!set_student->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_student2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_student << endl << endl;
                                cout << "B = " << *set_student2 << endl << endl;
                                cout << "A - B = " << *set_student - *set_student2 << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!set_teacher->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_teacher2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_teacher << endl << endl;
                                cout << "B = " << *set_teacher2 << endl << endl;
                                cout << "A - B = " << *set_teacher - *set_teacher2 << endl << endl;
                            }
                        }
                            break;

                        case 8: { //Intersection
                            if (*choice1 == 1) {
                                if (!set_int->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_int2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_int << endl << endl;
                                cout << "B = " << *set_int2 << endl << endl;
                                cout << "A * B = " << *set_int * *set_int2 << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!set_double->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_double2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_double << endl << endl;
                                cout << "B = " << *set_double2 << endl << endl;
                                cout << "A * B = " << *set_double * *set_double2 << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!set_complex->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_complex2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_complex << endl << endl;
                                cout << "B = " << *set_complex2 << endl << endl;
                                cout << "A * B = " << *set_complex * *set_complex2 << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!set_string->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_string2->GetLength()) {
                                cout << "The second set is empty" << endl << endl;
                                break;
                                }
                                cout << "A = " << *set_string << endl << endl;
                                cout << "B = " << *set_string2 << endl << endl;
                                cout << "A * B = " << *set_string * *set_string2 << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!set_student->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_student2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_student << endl << endl;
                                cout << "B = " << *set_student2 << endl << endl;
                                cout << "A * B = " << *set_student * *set_student2 << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!set_teacher->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_teacher2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_teacher << endl << endl;
                                cout << "B = " << *set_teacher2 << endl << endl;
                                cout << "A * B = " << *set_teacher * *set_teacher2 << endl << endl;
                            }
                            }
                            break;

                        case 10: { //Check as a subset
                            if (*choice1 == 1) {
                                if (!set_int->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_int2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_int << endl << endl;
                                cout << "B = " << *set_int2 << endl << endl;
                                if (set_int->checkSubSet(set_int2)) cout << "B is a subset of A" << endl << endl;
                                if (!set_int->checkSubSet(set_int2)) cout << "B is not a subset of A" << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!set_double->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_double2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_double << endl << endl;
                                cout << "B = " << *set_double2 << endl << endl;
                                if (set_double->checkSubSet(set_double2)) cout << "B is a subset of A" << endl << endl;
                                if (!set_double->checkSubSet(set_double2)) cout << "B is not a subset of A" << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!set_complex->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_complex2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_complex << endl << endl;
                                cout << "B = " << *set_complex2 << endl << endl;
                                if (set_complex->checkSubSet(set_complex2)) cout << "B is a subset of A" << endl << endl;
                                if (!set_complex->checkSubSet(set_complex2)) cout << "B is not a subset of A" << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!set_string->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_string2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_string << endl << endl;
                                cout << "B = " << *set_string2 << endl << endl;
                                if (set_string->checkSubSet(set_string2)) cout << "B is a subset of A" << endl << endl;
                                if (!set_string->checkSubSet(set_string2)) cout << "B is not a subset of A" << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!set_student->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_student2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_student << endl << endl;
                                cout << "B = " << *set_student2 << endl << endl;
                                if (set_student->checkSubSet(set_student2)) cout << "B is a subset of A" << endl << endl;
                                if (!set_student->checkSubSet(set_student2)) cout << "B is not a subset of A" << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!set_teacher->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_teacher2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_teacher << endl << endl;
                                cout << "B = " << *set_teacher2 << endl << endl;
                                if (set_teacher->checkSubSet(set_teacher2)) cout << "B is a subset of A" << endl << endl;
                                if (!set_teacher->checkSubSet(set_teacher2)) cout << "B is not a subset of A" << endl << endl;
                            }
                            }
                            break;

                        case 9: { //Check equality
                            if (*choice1 == 1) {
                                if (!set_int->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_int2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_int << endl << endl;
                                cout << "B = " << *set_int2 << endl << endl;
                                if (set_int == set_int2) cout << "B is equal to A" << endl << endl;
                                else cout << "B is not equal to A" << endl << endl;
                            }
                            if (*choice1 == 2) {
                                if (!set_double->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_double2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_double << endl << endl;
                                cout << "B = " << *set_double2 << endl << endl;
                                if (set_double == set_double2) cout << "B is equal to A" << endl << endl;
                                else cout << "B is not equal to A" << endl << endl;
                            }
                            if (*choice1 == 3) {
                                if (!set_complex->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_complex2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_complex << endl << endl;
                                cout << "B = " << *set_complex2 << endl << endl;
                                if (set_complex == set_complex2) cout << "B is equal to A" << endl << endl;
                                else cout << "B is not equal to A" << endl << endl;
                            }
                            if (*choice1 == 4) {
                                if (!set_string->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_string2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_string << endl << endl;
                                cout << "B = " << *set_string2 << endl << endl;
                                if (set_string == set_string2) cout << "B is equal to A" << endl << endl;
                                else cout << "B is not equal to A" << endl << endl;
                            }
                            if (*choice1 == 5) {
                                if (!set_student->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_student2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_student << endl << endl;
                                cout << "B = " << *set_student2 << endl << endl;
                                if (set_student == set_student2) cout << "B is equal to A" << endl << endl;
                                else cout << "B is not equal to A" << endl << endl;
                            }
                            if (*choice1 == 6) {
                                if (!set_teacher->GetLength()) {
                                    cout << "The set is empty" << endl << endl;
                                    break;
                                }
                                if (!set_teacher2->GetLength()) {
                                    cout << "The second set is empty" << endl << endl;
                                    break;
                                }
                                cout << "A = " << *set_teacher << endl << endl;
                                cout << "B = " << *set_teacher2 << endl << endl;
                                if (set_teacher == set_teacher2) cout << "B is equal to A" << endl << endl;
                                else cout << "B is not equal to A" << endl << endl;
                            }
                            }
                            break;

                    }
                } while (*choice5 != 11);

            }

        }

        dialog(vars6, vars6_size, request6, choice6);

        if (*choice6 == 2) printf("Goodbye!");

    } while (*choice6 == 1);

    delete length;
    delete choice1;
    delete choice2;
    delete choice3;
    delete choice4;
    delete choice5;
    delete choice6;

    return 0;
}
