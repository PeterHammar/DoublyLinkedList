#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <vector>
#include <cstdlib>
#include <exception>
#include <stdexcept>

template <typename T>
class DoublyLinkedList
{
private:
    struct Node
    {
        Node *previous = nullptr;
        Node *next = nullptr;
        T element;
    };
    Node *currentNode = nullptr;

    void walkBackwards(Node *&, unsigned int);
    void walkForwards(Node *&, unsigned int);
    void walk(Node *&, int);
    void removeAtNode(Node *&);

public:
    ~DoublyLinkedList();
    void insertAtCurrent(T element);
    void insertWithOffset(T element, int offset);
    void removeAtCurrent();
    void removeElement(T element);
    T getCurrentElement();
    void walkBackwards();
    void walkForwards();
    bool exists(T element);
    std::vector<T> getAllElements();
    bool isEmpty();
    std::size_t size();
};

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList()
{
    while (!isEmpty())
    {
        removeAtCurrent();
    }
}

template <typename T>
T DoublyLinkedList<T>::getCurrentElement()
{
    if (isEmpty())
    {
        throw std::logic_error("List is empty!");
    }
    return currentNode->element;
}

template <typename T>
bool DoublyLinkedList<T>::isEmpty()
{
    return currentNode == nullptr;
}

template <typename T>
void DoublyLinkedList<T>::insertAtCurrent(T element)
{
    insertWithOffset(element, 0);
}

template <typename T>
std::size_t DoublyLinkedList<T>::size()
{
    if (isEmpty())
    {
        return 0;
    }

    Node *nodePtr = currentNode;
    std::size_t count = 0;

    do
    {
        nodePtr = nodePtr->next;
        count++;
    } while (nodePtr != currentNode);

    return count;
}

template <typename T>
void DoublyLinkedList<T>::walkForwards()
{
    if (isEmpty())
    {
        return;
        //throw std::logic_error("List is empty!");
    }
    walkForwards(currentNode, 1);
}

template <typename T>
void DoublyLinkedList<T>::walkBackwards()
{
    if (isEmpty())
    {
        return;
        //throw std::logic_error("List is empty!");
    }
    walkBackwards(currentNode, 1);
}

template <typename T>
std::vector<T> DoublyLinkedList<T>::getAllElements()
{
    std::vector<T> elements;

    if (isEmpty())
    {
        return elements;
    }
    Node *nodePtr = currentNode;

    do
    {
        elements.push_back(nodePtr->element);
        nodePtr = nodePtr->next;
    } while (nodePtr != currentNode);

    return elements;
}

template <typename T>
void DoublyLinkedList<T>::insertWithOffset(T element, int offset)
{
    Node *newNode = new Node;
    newNode->element = element;

    if (currentNode == nullptr)
    {
        currentNode = newNode;
        currentNode->previous = currentNode;
        currentNode->next = currentNode;
    }
    else
    {
        Node *nodePtr = currentNode;
        walk(nodePtr, offset);

        newNode->next = nodePtr->next;
        nodePtr->next = newNode;
        newNode->previous = nodePtr;
        newNode->next->previous = newNode;
    }
}

template <typename T>
void DoublyLinkedList<T>::walkBackwards(Node *&nodePtr, unsigned int steps)
{
    unsigned int count = 0;
    while (count != steps)
    {
        nodePtr = nodePtr->previous;
        count++;
    }
}

template <typename T>
void DoublyLinkedList<T>::walkForwards(Node *&nodePtr, unsigned int steps)
{
    unsigned int count = 0;
    while (count != steps)
    {
        nodePtr = nodePtr->next;
        count++;
    }
}

template <typename T>
void DoublyLinkedList<T>::walk(Node *&nodePtr, int steps)
{
    if (steps < 0)
    {
        walkBackwards(nodePtr, -steps);
    }
    else
    {
        walkForwards(nodePtr, steps);
    }
}

template <typename T>
bool DoublyLinkedList<T>::exists(T element)
{
    if(isEmpty())
    {
        return false;
    }
    Node *nodePtr = currentNode;
    bool found = false;
    do
    {
        nodePtr = nodePtr->next;
        if (nodePtr->element == element)
        {
            found = true;
            break;
        }
    } while (nodePtr != currentNode);
    return found;
}

template <typename T>
void DoublyLinkedList<T>::removeAtCurrent()
{
    if (isEmpty())
    {
        return;
        //throw std::logic_error("Trying to remove object from empty list.");
    }
    // Tar bort elementet p˚a current position i
    // listan. current position skall flyttas fram˚at.
    // previous f;r n'sta ska vara previous f;r current
    // next f;r previous ska vara next f;r current
    // deleta current node och flytta current till next
    removeAtNode(currentNode);
}

template <typename T>
void DoublyLinkedList<T>::removeAtNode(Node *&nodePtr)
{
    if (nodePtr->previous == nodePtr)
    {
        delete currentNode;
        currentNode = nullptr;
    }
    else
    {
        nodePtr->next->previous = nodePtr->previous;
        nodePtr->previous->next = nodePtr->next;

        Node *nodePtrCopy = nodePtr;
        nodePtr = nodePtr->next;
        delete nodePtrCopy;
    }
}

template <typename T>
void DoublyLinkedList<T>::removeElement(T element)
{
    //Tar bort alla instanser av det specificerade elementet fr˚an listan. Om nuvarande position sammanfaller med
    //ett element som tas bort skall nuvarande position flyttas fram˚at.
    Node *nodePtr = currentNode;

    if (isEmpty())
    {
        return;
        //throw std::logic_error("Trying to remove object from empty list.");
    }

    do
    {
        if (nodePtr->element == element)
        {
            if(nodePtr == currentNode)
            {
                removeAtCurrent();

                if(currentNode != nullptr)
                {
                    nodePtr = currentNode->next;
                }
                if (nodePtr == currentNode && nodePtr->element == element)
                {
                    removeAtCurrent();
                    break;
                }
            }
            else
            {
                removeAtNode(nodePtr);
                if (nodePtr == currentNode && nodePtr->element == element)
                {

                    removeAtCurrent();
                    break;
                }
            }
        }
        else
        {
            nodePtr = nodePtr->next;
        }

    } while ((nodePtr != currentNode || nodePtr->element == element) && !isEmpty());


}

#endif