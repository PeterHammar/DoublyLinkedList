#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "doublyLinkedList.h"

#include <algorithm>
#include <numeric>

namespace std
{
std::ostream &operator<<(std::ostream &os, std::vector<int> v)
{
    for (auto i : v)
    {
        os << i << " ";
    }
    return os;
}
} // namespace std

TEST_CASE("testing the isEmpty function on empty list")
{
    
    DoublyLinkedList<int> dll;
    CHECK(dll.isEmpty());
}

TEST_CASE("testing the insert element and check current element")
{
    
    DoublyLinkedList<int> dll;
    int elementToInsert = 1;
    dll.insertAtCurrent(elementToInsert);
    CHECK(dll.getCurrentElement() == elementToInsert);
    CHECK(!dll.isEmpty());
}

TEST_CASE("testing two inserts and check current element the same")
{
    
    DoublyLinkedList<int> dll;
    int firstElementToInsert = 1;
    dll.insertAtCurrent(firstElementToInsert);
    int secondElmentToInsert = 2;
    dll.insertAtCurrent(secondElmentToInsert);
    CHECK(dll.getCurrentElement() == firstElementToInsert);
}

TEST_CASE("testing walk forwards")
{
    
    DoublyLinkedList<int> dll;
    int firstElementToInsert = 1;
    dll.insertAtCurrent(firstElementToInsert);
    int secondElementToInsert = 2;
    dll.insertAtCurrent(secondElementToInsert);
    dll.walkForwards();
    CHECK(dll.getCurrentElement() == secondElementToInsert);
}

TEST_CASE("testing walk backwards")
{
    
    DoublyLinkedList<int> dll;
    int firstElementToInsert = 1;
    dll.insertAtCurrent(firstElementToInsert);
    int secondElementToInsert = 2;
    dll.insertAtCurrent(secondElementToInsert);
    dll.walkForwards();
    dll.walkBackwards();
    CHECK(dll.getCurrentElement() == firstElementToInsert);
}

TEST_CASE("testing one insert and check size")
{
    
    DoublyLinkedList<int> dll;
    std::size_t count = 0;
    int firstElementToInsert = 1;
    count++;
    dll.insertAtCurrent(firstElementToInsert);
    CHECK(dll.size() == count);
}

TEST_CASE("testing two inserts and check size")
{
    
    DoublyLinkedList<int> dll;
    std::size_t count = 0;
    int firstElementToInsert = 1;
    count++;
    dll.insertAtCurrent(firstElementToInsert);
    int secondElmentToInsert = 2;
    count++;
    dll.insertAtCurrent(secondElmentToInsert);
    CHECK(dll.size() == count);
}

TEST_CASE("testing two inserts and get all elements")
{
    
    std::vector<int> elementsToInsert = {1, 2};
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertAtCurrent(element);
    }
    CHECK(dll.getAllElements() == elementsToInsert);
}

TEST_CASE("testing three inserts and get all elements")
{
    
    std::vector<int> elementsToInsert = {1, 2, 3};
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertAtCurrent(element);
    }
    CHECK(dll.getAllElements() == std::vector<int>{1, 3, 2});
}

TEST_CASE("testing insert with offset")
{
    
    std::vector<int> elementsToInsert = {1, 2, 3};
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertWithOffset(element, 1);
    }
    CHECK(dll.getAllElements() == elementsToInsert);
}

TEST_CASE("testing insert with negative offset")
{
    
    std::vector<int> elementsToInsert = {1, 2, 3};
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertWithOffset(element, -1);
    }
    CHECK(dll.getAllElements() == elementsToInsert);
}

TEST_CASE("testing walkBackwards with steps = size")
{
    
    std::vector<int> elementsToInsert(10);
    std::iota(elementsToInsert.begin(), elementsToInsert.end(), 0);
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertWithOffset(element, -1);
    }

    auto currentElement = dll.getCurrentElement();
    for(int i = 0; i < elementsToInsert.size(); i++)
    {
        dll.walkBackwards();
    }
    CHECK(dll.getCurrentElement() == currentElement); 
}

TEST_CASE("testing walkForwards with steps = size")
{
    
    std::vector<int> elementsToInsert(10);
    std::iota(elementsToInsert.begin(), elementsToInsert.end(), 0);
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertWithOffset(element, -1);
    }

    auto currentElement = dll.getCurrentElement();
    for(int i = 0; i < elementsToInsert.size(); i++)
    {
        dll.walkForwards();
    }
    CHECK(dll.getCurrentElement() == currentElement); 
}

TEST_CASE("checking if element exists success")
{
    
    std::vector<int> elementsToInsert(10);
    std::iota(elementsToInsert.begin(), elementsToInsert.end(), 0);
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertWithOffset(element, -1);
    }

    for (auto element : elementsToInsert)
    {
        CHECK(dll.exists(element)); 
    }
    
}

TEST_CASE("checking if element exists failure")
{
    
    std::vector<int> elementsToInsert(10);
    std::iota(elementsToInsert.begin(), elementsToInsert.end(), 0);
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertWithOffset(element, -1);
    }

    CHECK(!dll.exists(1111));
}

TEST_CASE("testing remove at current")
{
    
    std::vector<int> elementsToInsert(10);
    std::iota(elementsToInsert.begin(), elementsToInsert.end(), 0);
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertWithOffset(element, -1);
    }

    int elementToRemove = dll.getCurrentElement();
    dll.removeAtCurrent();
    CHECK(!dll.exists(elementToRemove));
}

TEST_CASE("testing remove element")
{
    
    std::vector<int> elementsToInsert(10);
    std::iota(elementsToInsert.begin(), elementsToInsert.end(), 0);
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertWithOffset(element, -1);
    }

    int elementToRemove = elementsToInsert[5];
    dll.removeElement(elementToRemove);
    CHECK(!dll.exists(elementToRemove));
}

TEST_CASE("testing remove element when dll is empty")
{
    
    DoublyLinkedList<int> dll;

    try
    {
        dll.removeElement(2);
    }
    catch(const std::exception& e)
    {
        CHECK(dll.isEmpty());
    }
}

TEST_CASE("testing size when dll is empty")
{
    
    DoublyLinkedList<int> dll;
    CHECK(dll.size() == 0);
}

TEST_CASE("testing walkBackwards when dll is empty")
{
    
    DoublyLinkedList<int> dll;
    
    try
    {
        dll.walkBackwards();
    }
    catch(const std::exception& e)
    {
        CHECK(dll.isEmpty());
    }
}

TEST_CASE("testing walkForwards when dll is empty")
{
    
    DoublyLinkedList<int> dll;
    
    try
    {
        dll.walkForwards();
    }
    catch(const std::exception& e)
    {
        CHECK(dll.isEmpty());
    }
}

TEST_CASE("testing remove at current when dll is empty")
{
    
    DoublyLinkedList<int> dll;

    try
    {
        dll.removeAtCurrent();
    }
    catch(const std::exception& e)
    {
        CHECK(dll.isEmpty());
    }
}

TEST_CASE("testing get current element when list is empty")
{
    
    DoublyLinkedList<int> dll;

    try
    {
        dll.getCurrentElement();
    }
    catch(const std::exception& e)
    {
        CHECK(dll.isEmpty());
    }
}

TEST_CASE("testing get all elements when dll is empty")
{
    
    DoublyLinkedList<int> dll;

    std::vector<int> vector = dll.getAllElements();
    CHECK(vector.size() == 0);
}

TEST_CASE("testing insert with offset when offset is size+1")
{
    
    std::vector<int> elementsToInsert(10);
    std::iota(elementsToInsert.begin(), elementsToInsert.end(), 0);
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertAtCurrent(element);
    }

    int element = 70;
    dll.insertWithOffset(element, 11);

    CHECK(dll.getAllElements()[2] == element); 
}

TEST_CASE("testing remove all at current")
{
    
    std::vector<int> elementsToInsert(10);
    std::iota(elementsToInsert.begin(), elementsToInsert.end(), 0);
    DoublyLinkedList<int> dll;
    for (auto element : elementsToInsert)
    {
        dll.insertWithOffset(element, -1);
    }

    for(int i = 0; i < elementsToInsert.size(); i++)
    {
        dll.removeAtCurrent();
    }

    CHECK(dll.isEmpty());
}

TEST_CASE("testing remove duplicates")
{
    
    DoublyLinkedList<int> dll;
    for(int i = 0; i < 5; i++)
    {
        dll.insertWithOffset(10, -1);
        dll.insertWithOffset(42, -1);
    }
    
    
    dll.removeElement(10);
    

    CHECK(!dll.exists(10));
    

    std::cout << dll.getAllElements() << '\n';
}

TEST_CASE("testing remove duplicates when list is all duplicates")
{
    
    DoublyLinkedList<int> dll;
    for(int i = 0; i < 10; i++)
    {
        dll.insertWithOffset(10, -1);
    }
    
    
    dll.removeElement(10);
    

    CHECK(!dll.exists(10));
    

    std::cout << dll.getAllElements() << '\n';
}

TEST_CASE("testing inserting 10 - 0 elements and removing all")
{
    
    DoublyLinkedList<int> dll;

    for(int j = 1; j < 10; j++)
    {
        for(int i = 0; i < j; i++) 
            {
                dll.insertWithOffset(j, -1);
            }

            
            dll.removeElement(j);

        
            CHECK(!dll.exists(j));

        
            std::cout << dll.getAllElements() << '\n';
    }
        
}