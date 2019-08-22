#ifndef TEST_VECTOR_HPP
#define TEST_VECTOR_HPP

/*******************************************************************
*						Here be Dragons
********************************************************************/

#include "TestingBase.hpp"
#include <cstdint>
#include <iostream>

#if __has_include("DoublyLinkedList.h")
#include "DoublyLinkedList.h"
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <random>
#include <iomanip>
#include <chrono>
#include <array>
namespace UnitTests::DOUBLYLINKEDLIST
{
/**
 * 
 * Defaultconstructor
 * 
**/
static constexpr bool DoublyLinkedList_has_default_constructor = std::is_default_constructible<DoublyLinkedList<int>>::value &&
																 std::is_default_constructible<DoublyLinkedList<std::string>>::value;
/**
 * 
 * Functions
 * 
**/
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(insertAtCurrent)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(insertWithOffset)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getAllElements)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(removeAtCurrent)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(removeElement)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(getCurrentElement)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(getCurrentElement)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(walkBackwards)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(walkForwards)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(exists)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(exists)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(isEmpty)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(isEmpty)
GENERATE_SAME_NAME_HAS_CONST_MEMBER_FUNCTION(size)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(size)
GENERATE_SAME_NAME_HAS_MEMBER_FUNCTION(getAllElements)

static constexpr bool DoublyLinkedList_has_insertAtCurrent = (
														(
															has_insertAtCurrent<DoublyLinkedList<int>, void, int>::value ||
															has_insertAtCurrent<DoublyLinkedList<int>, void, const int&>::value ||
															has_insertAtCurrent<DoublyLinkedList<int>, void, const int>::value ||
															has_insertAtCurrent<DoublyLinkedList<int>, void, int&>::value
														) 
															&&
														(
															has_insertAtCurrent<DoublyLinkedList<std::string>, void, std::string>::value ||
															has_insertAtCurrent<DoublyLinkedList<std::string>, void, const std::string&>::value ||
															has_insertAtCurrent<DoublyLinkedList<std::string>, void, const std::string>::value ||
															has_insertAtCurrent<DoublyLinkedList<std::string>, void, std::string&>::value
														)
													);


static constexpr bool DoublyLinkedList_has_insertWithOffset = (
														(
															has_insertWithOffset<DoublyLinkedList<int>, void, int, int>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, const int&, int>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, const int, int>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, int&, int>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, int, int&>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, const int&, int&>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, const int, int&>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, int&, int&>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, int, const int>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, const int&, const int>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, const int, const int>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, int&, const int>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, int, const int&>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, const int&, const int&>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, const int, const int&>::value ||
															has_insertWithOffset<DoublyLinkedList<int>, void, int&, const int&>::value
														) 
															&&
														(
															has_insertWithOffset<DoublyLinkedList<std::string>, void, std::string, int>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, const std::string&, int>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, const std::string, int>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, std::string&, int>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, std::string, int&>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, const std::string&, int&>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, const std::string, int&>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, std::string&, int&>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, std::string, const int>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, const std::string&, const int>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, const std::string, const int>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, std::string&, const int>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, std::string, const int&>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, const std::string&, const int&>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, const std::string, const int&>::value ||
															has_insertWithOffset<DoublyLinkedList<std::string>, void, std::string&, const int&>::value
														)
													);



static constexpr bool DoublyLinkedList_has_removeAtCurrent = (
															has_removeAtCurrent<DoublyLinkedList<int>, void>::value ||
															has_removeAtCurrent<DoublyLinkedList<int>, void>::value ||
															has_removeAtCurrent<DoublyLinkedList<int>, void>::value ||
															has_removeAtCurrent<DoublyLinkedList<int>, void>::value
													);



static constexpr bool DoublyLinkedList_has_removeElement = (
														(
															has_removeElement<DoublyLinkedList<int>, void, int>::value ||
															has_removeElement<DoublyLinkedList<int>, void, const int&>::value ||
															has_removeElement<DoublyLinkedList<int>, void, const int>::value ||
															has_removeElement<DoublyLinkedList<int>, void, int&>::value
														) 
															&&
														(
															has_removeElement<DoublyLinkedList<std::string>, void, std::string>::value ||
															has_removeElement<DoublyLinkedList<std::string>, void, const std::string&>::value ||
															has_removeElement<DoublyLinkedList<std::string>, void, const std::string>::value ||
															has_removeElement<DoublyLinkedList<std::string>, void, std::string&>::value
														)
													);


static constexpr bool DoublyLinkedList_has_getCurrentElement = (
														(
															has_const_getCurrentElement<DoublyLinkedList<int>, int>::value ||
															has_const_getCurrentElement<DoublyLinkedList<int>, int&>::value ||
															has_const_getCurrentElement<DoublyLinkedList<int>, const int>::value ||
															has_const_getCurrentElement<DoublyLinkedList<int>, const int&>::value ||
															has_getCurrentElement<DoublyLinkedList<int>, int>::value ||
															has_getCurrentElement<DoublyLinkedList<int>, int&>::value ||
															has_getCurrentElement<DoublyLinkedList<int>, const int>::value ||
															has_getCurrentElement<DoublyLinkedList<int>, const int&>::value
														) 
															&&
														(
															has_const_getCurrentElement<DoublyLinkedList<std::string>, std::string>::value ||
															has_const_getCurrentElement<DoublyLinkedList<std::string>, std::string&>::value ||
															has_const_getCurrentElement<DoublyLinkedList<std::string>, const std::string>::value ||
															has_const_getCurrentElement<DoublyLinkedList<std::string>, const std::string&>::value ||
															has_getCurrentElement<DoublyLinkedList<std::string>, std::string>::value ||
															has_getCurrentElement<DoublyLinkedList<std::string>, std::string&>::value ||
															has_getCurrentElement<DoublyLinkedList<std::string>, const std::string>::value ||
															has_getCurrentElement<DoublyLinkedList<std::string>, const std::string&>::value
														)
													);



static constexpr bool DoublyLinkedList_has_walkBackwards = (
														(
															has_walkBackwards<DoublyLinkedList<int>, void>::value ||
															has_walkBackwards<DoublyLinkedList<int>, void>::value ||
															has_walkBackwards<DoublyLinkedList<int>, void>::value ||
															has_walkBackwards<DoublyLinkedList<int>, void>::value
														) 
															&&
														(
															has_walkBackwards<DoublyLinkedList<std::string>, void>::value ||
															has_walkBackwards<DoublyLinkedList<std::string>, void>::value ||
															has_walkBackwards<DoublyLinkedList<std::string>, void>::value ||
															has_walkBackwards<DoublyLinkedList<std::string>, void>::value
														)
													);



static constexpr bool DoublyLinkedList_has_walkForwards = (
														(
															has_walkForwards<DoublyLinkedList<int>, void>::value ||
															has_walkForwards<DoublyLinkedList<int>, void>::value ||
															has_walkForwards<DoublyLinkedList<int>, void>::value ||
															has_walkForwards<DoublyLinkedList<int>, void>::value
														) 
															&&
														(
															has_walkForwards<DoublyLinkedList<std::string>, void>::value ||
															has_walkForwards<DoublyLinkedList<std::string>, void>::value ||
															has_walkForwards<DoublyLinkedList<std::string>, void>::value ||
															has_walkForwards<DoublyLinkedList<std::string>, void>::value
														)
													);
static constexpr bool DoublyLinkedList_has_exists = (
														(
															has_const_exists<DoublyLinkedList<int>, bool, int>::value ||
															has_const_exists<DoublyLinkedList<int>, bool, const int&>:: value ||
															has_const_exists<DoublyLinkedList<int>, bool, const int>::value ||
															has_const_exists<DoublyLinkedList<int>, bool, int&>::value ||
															has_exists<DoublyLinkedList<int>, bool, int>::value ||
															has_exists<DoublyLinkedList<int>, bool, const int&>::value ||
															has_exists<DoublyLinkedList<int>, bool, const int>::value ||
															has_exists<DoublyLinkedList<int>, bool, int&>::value
														) 
															&&
														(
															has_const_exists<DoublyLinkedList<std::string>, bool, std::string>::value ||
															has_const_exists<DoublyLinkedList<std::string>, bool, const std::string&>:: value ||
															has_const_exists<DoublyLinkedList<std::string>, bool, const std::string>::value ||
															has_const_exists<DoublyLinkedList<std::string>, bool, std::string&>::value ||
															has_exists<DoublyLinkedList<std::string>, bool, std::string>::value ||
															has_exists<DoublyLinkedList<std::string>, bool, const std::string&>::value ||
															has_exists<DoublyLinkedList<std::string>, bool, const std::string>::value ||
															has_exists<DoublyLinkedList<std::string>, bool, std::string&>::value
														)
													);


static constexpr bool DoublyLinkedList_has_isEmpty = (
														(
															has_const_isEmpty<DoublyLinkedList<int>, bool>::value ||
															has_const_isEmpty<DoublyLinkedList<int>, bool>:: value ||
															has_const_isEmpty<DoublyLinkedList<int>, bool>::value ||
															has_const_isEmpty<DoublyLinkedList<int>, bool>::value ||
															has_isEmpty<DoublyLinkedList<int>, bool>::value ||
															has_isEmpty<DoublyLinkedList<int>, bool>::value ||
															has_isEmpty<DoublyLinkedList<int>, bool>::value ||
															has_isEmpty<DoublyLinkedList<int>, bool>::value
														) 
															&&
														(
															has_const_isEmpty<DoublyLinkedList<std::string>, bool>::value ||
															has_const_isEmpty<DoublyLinkedList<std::string>, bool>:: value ||
															has_const_isEmpty<DoublyLinkedList<std::string>, bool>::value ||
															has_const_isEmpty<DoublyLinkedList<std::string>, bool>::value ||
															has_isEmpty<DoublyLinkedList<std::string>, bool>::value ||
															has_isEmpty<DoublyLinkedList<std::string>, bool>::value ||
															has_isEmpty<DoublyLinkedList<std::string>, bool>::value ||
															has_isEmpty<DoublyLinkedList<std::string>, bool>::value
														)
													);
static constexpr bool DoublyLinkedList_has_size = (
														(
															has_const_size<DoublyLinkedList<int>, size_t>::value ||
															has_const_size<DoublyLinkedList<int>, size_t>:: value ||
															has_const_size<DoublyLinkedList<int>, size_t>::value ||
															has_const_size<DoublyLinkedList<int>, size_t>::value ||
															has_size<DoublyLinkedList<int>, size_t>::value ||
															has_size<DoublyLinkedList<int>, size_t>::value ||
															has_size<DoublyLinkedList<int>, size_t>::value ||
															has_size<DoublyLinkedList<int>, size_t>::value
														) 
															&&
														(
															has_const_size<DoublyLinkedList<std::string>, size_t>::value ||
															has_const_size<DoublyLinkedList<std::string>, size_t>:: value ||
															has_const_size<DoublyLinkedList<std::string>, size_t>::value ||
															has_const_size<DoublyLinkedList<std::string>, size_t>::value ||
															has_size<DoublyLinkedList<std::string>, size_t>::value ||
															has_size<DoublyLinkedList<std::string>, size_t>::value ||
															has_size<DoublyLinkedList<std::string>, size_t>::value ||
															has_size<DoublyLinkedList<std::string>, size_t>::value
														)
													);

static constexpr bool DoublyLinkedList_has_getAllElements = (
														(
															has_const_getAllElements<DoublyLinkedList<int>, std::vector<int>>::value ||
															has_const_getAllElements<DoublyLinkedList<int>, std::vector<int>>:: value ||
															has_const_getAllElements<DoublyLinkedList<int>, std::vector<int>>::value ||
															has_const_getAllElements<DoublyLinkedList<int>, std::vector<int>>::value ||
															has_getAllElements<DoublyLinkedList<int>, std::vector<int>>::value ||
															has_getAllElements<DoublyLinkedList<int>, std::vector<int>>::value ||
															has_getAllElements<DoublyLinkedList<int>, std::vector<int>>::value ||
															has_getAllElements<DoublyLinkedList<int>, std::vector<int>>::value
														) 
															&&
														(
															has_const_getAllElements<DoublyLinkedList<std::string>, std::vector<std::string>>::value ||
															has_const_getAllElements<DoublyLinkedList<std::string>, std::vector<std::string>>:: value ||
															has_const_getAllElements<DoublyLinkedList<std::string>, std::vector<std::string>>::value ||
															has_const_getAllElements<DoublyLinkedList<std::string>, std::vector<std::string>>::value ||
															has_getAllElements<DoublyLinkedList<std::string>, std::vector<std::string>>::value ||
															has_getAllElements<DoublyLinkedList<std::string>, std::vector<std::string>>::value ||
															has_getAllElements<DoublyLinkedList<std::string>, std::vector<std::string>>::value ||
															has_getAllElements<DoublyLinkedList<std::string>, std::vector<std::string>>::value
														)
													);

/**
 * 
 * Testcode starts here
 * 
*/template <typename T = DoublyLinkedList<int>>
bool TestInsertAtCurrent()
{
	std::size_t textIndentionLevel = 1;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::insertAtCurrent tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_insertAtCurrent)
	{
		bool passed = true;
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test.\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				int toInsert = 5;
				DLL.insertAtCurrent(toInsert);
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::insertAtCurrent on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (insert the element as the first link)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 3;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertAtCurrent tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test.\n";
		}
		
		
		/**
		 * 
		 * Basic insertion test
		 * 	-Inserting 10 elements
		 *  -If getCurrentElement is implemented, control is conducted to make sure that the current element is the expected element after each insertion
		 * 	-If getAllElements is implemented, control is conducted to make sure that the elements are inserted in the expected order
		 *  -If size is implemented, control conducted to make sure that the size of the structure is as expected
		*/
		{
			try
			{
				std::cout << '\n';
				std::cout << std::string(textIndentionLevel, '\t') + "Starting basic insertion test.\n";
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Extra control(s) for this test: " << std::endl;
				if constexpr(!(DoublyLinkedList_has_getCurrentElement))
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::insertAtCurrent causes the current element to differ from the expected.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getCurrentElement is implemented." << std::endl;
					--textIndentionLevel;
					--textIndentionLevel;
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getCurrentElement is implemented.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::insertAtCurrent does not cause the current element to differ from the expected.\n";
					--textIndentionLevel;
					--textIndentionLevel;
				}

				if constexpr(!(DoublyLinkedList_has_size))
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::insertAtCurrent causes the size to change correctly.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::size is implemented." << std::endl;
					--textIndentionLevel;
					--textIndentionLevel;					
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::size is implemented.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::insertAtCurrent reports correct size once done.\n";
					--textIndentionLevel;
					--textIndentionLevel;
				}

				if constexpr(!(DoublyLinkedList_has_getAllElements))
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::insertAtCurrent caused the expected ordering of elements.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getAllElements is implemented." << std::endl;
					--textIndentionLevel;
					--textIndentionLevel;
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getAllElements is implemented.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::insertAtCurrent cause the expected ordering of elements.\n";
					--textIndentionLevel;
					--textIndentionLevel;
				}

				--textIndentionLevel;

				++textIndentionLevel;
				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "This test will insert the set {9, 8, 7, 6, 5, 4, 3, 2, 1, 0} into the DoublyLinkedList." << std::endl;
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Starting insertion." << std::endl;
				std::vector<int> insertionSet = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
				T DLL;
				++textIndentionLevel;
				for(auto &&element : insertionSet)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Inserting element: " << element << '\n';
					DLL.insertAtCurrent(element);
					if constexpr(DoublyLinkedList_has_getCurrentElement)
					{
						static bool getCurrentElementError = false;
						int currentElement = DLL.getCurrentElement();
						if(!getCurrentElementError && insertionSet[0] != currentElement)
						{
							++textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getCurrentElement indicates error after insertion of element: " << element << '\n';
							++textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Expected element: " << insertionSet[0] << " (first element inserted).\n";
							std::cout << std::string(textIndentionLevel, '\t') + "Returned element: " << currentElement << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Calls to DoublyLinkedList::insertAtCurrent should not change the current element.\n";
							std::cout << std::string(textIndentionLevel, '\t') + "This error message will only be printed once.\n";
							std::cout << std::string(textIndentionLevel, '\t') + "If you wish for it to be printed every time, enter the file \"" << __FILE__ << "\" and comment out the variable assignment at line " << __LINE__ + 1<< std::endl;
							getCurrentElementError = true;
							std::cout << std::string(textIndentionLevel, '\t') + "Testing will continue." << std::endl;
							--textIndentionLevel;
							passed = false;

						}
					}

				}
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending insertion." << std::endl;
				
				if constexpr (DoublyLinkedList_has_size)
				{
					std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Running control using DoublyLinkedList::size.\n";
					++textIndentionLevel;
					size_t currentSize = DLL.size();
					if(currentSize != 10)
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::size indicates error after insertion of all elements.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected size: " << insertionSet.size() << '\n';
						std::cout << std::string(textIndentionLevel, '\t') + "Returned size: " << currentSize << '\n';
						--textIndentionLevel;
						passed = false;
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::size indicates no error after insertion of all elements.\n";
					}
					--textIndentionLevel;
				}

				if constexpr (DoublyLinkedList_has_getAllElements)
				{
					std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Running control using DoublyLinkedList::getAllElements.\n";
					++textIndentionLevel;
					std::vector<int> currentOrder = DLL.getAllElements();
					
					if(currentOrder != std::vector<int>({9, 0, 1, 2, 3, 4, 5, 6, 7, 8}))
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getAllElements indicates error after insertion of all elements.\n";
						++textIndentionLevel;

						if(currentOrder.size() == 0)
						{
							std::cout << std::string(textIndentionLevel, '\t') + "No elements returned\n";
						}
						else
						{
							std::string content = "";
							content.clear();

							std::cout << std::string(textIndentionLevel, '\t') + "Expected order: {9, 0, 1, 2, 3, 4, 5, 6, 7, 8}\n" << std::endl;
							for(auto &&order : currentOrder)
								content += std::to_string(order) + ", ";

							content.pop_back();
							content.pop_back();
							std::cout << std::string(textIndentionLevel, '\t') + "Returned order: {" << content << "}\n";
						}
						--textIndentionLevel;
						passed = false;
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getAllElements indicates no error after insertion of all elements.\n";
					}
					--textIndentionLevel;
				}

				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic insertion test." << std::endl;
				--textIndentionLevel;
			}
			catch(std::exception &e)
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during basic insertion test. Error message: " +  e.what() + "\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertAtCurrent tests" << std::endl;
				return false;
			}
			catch(...)
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during basic insertion test.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertAtCurrent tests" << std::endl;
				return false;
			}
		}

		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertAtCurrent tests" << std::endl;
		return passed;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::insertAtCurrent not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertAtCurrent tests" << std::endl;
		return false;
	}
}

template <typename T = DoublyLinkedList<int>>
bool TestInsertWithOffset()
{
	std::size_t textIndentionLevel = 1;
	bool passed = true;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::insertWithOffset tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_insertWithOffset)
	{
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test.\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				int toInsert = 5;
				int offset = 10;
				DLL.insertWithOffset(toInsert, offset);
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::insertWithOffset on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (insert the element as the first link)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 3;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertWithOffset tests." << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test.\n";

		}

		/**
		 * 
		 * Basic insertion test
		 * 	-Inserting 10 elements in such a way that the resulting structure is always sorted
		 *  -If getCurrentElement is implemented, control is conducted to make sure that the current element is the exepcted element after each insertion
		 * 	-If getAllElements is implemented, control is conducted to make sure that the elements are inserted in the expected order
		 *  -If size is implemented, control conducted to make sure that the size of the structure is as expected
		*/
		{
			try
			{
				std::cout << '\n';
				std::cout << std::string(textIndentionLevel, '\t') + "Starting basic insertion test.\n";
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Extra control(s) for this test: " << std::endl;
				if constexpr(!(DoublyLinkedList_has_getCurrentElement))
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::insertWithOffset causes the current element to differ from the expected.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getCurrentElement is implemented." << std::endl;
					--textIndentionLevel;
					--textIndentionLevel;
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getCurrentElement is implemented.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::insertWithOffset does not cause the current element to differ from the expected.\n";
					--textIndentionLevel;
					--textIndentionLevel;
				}

				if constexpr(!(DoublyLinkedList_has_size))
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::insertWithOffset causes the size to change correctly.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::size is implemented." << std::endl;
					--textIndentionLevel;
					--textIndentionLevel;					
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::size is implemented.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::insertWithOffset reports correct size once done.\n";
					--textIndentionLevel;
					--textIndentionLevel;
				}

				if constexpr(!(DoublyLinkedList_has_getAllElements))
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::insertWithOffset caused the expected ordering of elements.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getAllElements is implemented." << std::endl;
					--textIndentionLevel;
					--textIndentionLevel;
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getAllElements is implemented.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::insertWithOffset cause the expected ordering of elements.\n";
					--textIndentionLevel;
					--textIndentionLevel;
				}

				--textIndentionLevel;

				++textIndentionLevel;
				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "This test will insert the set {9, 8, 7, 6, 5, 4, 3, 2, 1, 0} into the DoublyLinkedList." << std::endl;
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Starting insertion." << std::endl;
				std::vector<int> insertionSet = 	{9,  8,  7,  6,   5, 4,  3,  2,  1,  0};
				std::vector<int> insertionOrder = 	{15, 0, -1, 11, -17, 4, -1, 13, -9, -1};
				T DLL;
				++textIndentionLevel;
				auto orderItr = insertionOrder.begin();
				for(auto &&element : insertionSet)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Inserting element: " << element << " with offset " << *orderItr <<'\n';
					DLL.insertWithOffset(element, *orderItr);
					if constexpr(DoublyLinkedList_has_getCurrentElement)
					{
						static bool getCurrentElementError = false;
						int currentElement = DLL.getCurrentElement();
						if(!getCurrentElementError && insertionSet[0] != currentElement)
						{
							++textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getCurrentElement indicates error after insertion of element: " << element << " with offset " << *orderItr << '\n';
							++textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Expected element: " << insertionSet[0] << " (first element inserted).\n";
							std::cout << std::string(textIndentionLevel, '\t') + "Returned element: " << currentElement << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Calls to DoublyLinkedList::insertWithOffset should not change the current element.\n";
							std::cout << std::string(textIndentionLevel, '\t') + "This error message will only be printed once.\n";
							std::cout << std::string(textIndentionLevel, '\t') + "If you wish for it to be printed every time, enter the file \"" << __FILE__ << "\" and comment out the variable assignment at line " << __LINE__ + 1<< std::endl;
							getCurrentElementError = true;
							std::cout << std::string(textIndentionLevel, '\t') + "Testing will continue." << std::endl;
							--textIndentionLevel;
							passed = false;
						}
					}
					if constexpr (DoublyLinkedList_has_getAllElements)
					{
						static bool getAllElementsError = false;
						std::vector<int> elements = DLL.getAllElements();
						if(!getAllElementsError && !(std::is_sorted(elements.rbegin(), elements.rend())))
						{
							++textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getAllElements indicates error after insertion of element: " << element << " with offset " << *orderItr << '\n';
							++textIndentionLevel;
							if(elements.size() == 0)
							{
								std::cout << std::string(textIndentionLevel, '\t') + "No elements returned\n";
							}
							else
							{
								std::string content = "";
								content.clear();
								for(auto &&inserted : insertionSet)
								{
									content += std::to_string(inserted) + ", ";
									if(inserted == element)
										break;
								}
								content.pop_back();
								content.pop_back();
								std::cout << std::string(textIndentionLevel, '\t') + "Expected order: {" << content << "}\n";
								
								content.clear();
								for(auto &&order : elements)
									content += std::to_string(order) + ", ";

								content.pop_back();
								content.pop_back();
								std::cout << std::string(textIndentionLevel, '\t') + "Returned order: {" << content << "}\n";
							}
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "This error message will only be printed once.\n";
							std::cout << std::string(textIndentionLevel, '\t') + "If you wish for it to be printed every time, enter the file \"" << __FILE__ << "\" and comment out the variable assignment at line " << __LINE__ + 1<< std::endl;
							getAllElementsError = true;
							std::cout << std::string(textIndentionLevel, '\t') + "Testing will continue." << std::endl;
							--textIndentionLevel;
							passed	= false;
						}
					}
					++orderItr;
				}
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending insertion." << std::endl;
				
				if constexpr (DoublyLinkedList_has_size)
				{
					std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Running control using DoublyLinkedList::size.\n";
					++textIndentionLevel;
					size_t currentSize = DLL.size();
					if(currentSize != 10)
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::size indicates error after insertion of all elements.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected size: " << insertionSet.size() << '\n';
						std::cout << std::string(textIndentionLevel, '\t') + "Returned size: " << currentSize << '\n';
						--textIndentionLevel;
						passed = false;
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::size indicates no error after insertion of all elements.\n";
					}
					--textIndentionLevel;
				}

				if constexpr (DoublyLinkedList_has_getAllElements)
				{
					std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Running control using DoublyLinkedList::getAllElements.\n";
					++textIndentionLevel;
					std::vector<int> currentOrder = DLL.getAllElements();
					
					if(currentOrder != std::vector<int>({9, 8, 7, 6, 5, 4, 3, 2, 1, 0}))
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getAllElements indicates error after insertion of all elements.\n";
						++textIndentionLevel;

						if(currentOrder.size() == 0)
						{
							std::cout << std::string(textIndentionLevel, '\t') + "No elements returned\n";
						}
						else
						{
							std::string content = "";
							content.clear();

							std::cout << std::string(textIndentionLevel, '\t') + "Expected order: {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}\n";
							for(auto &&order : currentOrder)
								content += std::to_string(order) + ", ";

							content.pop_back();
							content.pop_back();
							std::cout << std::string(textIndentionLevel, '\t') + "Returned order: {" << content << "}\n";
						}
						--textIndentionLevel;
						passed = false;
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getAllElements indicates no error after insertion of all elements.\n";
					}
					--textIndentionLevel;
				}

				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic insertion test." << std::endl;
				--textIndentionLevel;
			}
			catch(std::exception &e)
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during basic insertion test. Error message: " +  e.what() + "\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertWithOffset tests" << std::endl;
				return false;
			}
			catch(...)
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during basic insertion test.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertWithOffset tests" << std::endl;
				return false;
			}
		}
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertWithOffset tests" << std::endl;
		return passed;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::insertWithOffset not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::insertWithOffset tests" << std::endl;
		return false;
	}
}


template <typename T = DoublyLinkedList<int>>
bool TestRemoveAtCurrent()
{
	std::size_t textIndentionLevel = 1;
	bool passed = true;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::removeAtCurrent tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_removeAtCurrent)
	{
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test.\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				DLL.removeAtCurrent();
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::removeAtCurrent on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (do nothing)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 3;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test" << std::endl;
		}
		/**
		 * 
		 * Basic remove test 
		 *  -This test will first insert 2 elements and remove the current. Then it will insert 2 more elements and remove the current.
		 * 
		 *  -If getCurrentElement is implemented, control is conducted to make sure that the current element is the exepcted element after each remove
		 * 	-If getAllElements is implemented, control is conducted to make sure that the expected elements are present after each remove
		 *  -If size is implemented, control is conducted to make sure that the size of the structure is as expected
		*/
		{
			std::cout << '\n';
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic remove test.\n";
			++textIndentionLevel;
			if constexpr (DoublyLinkedList_has_insertAtCurrent)
			{
				try
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Extra control(s) for this test: " << std::endl;
					if constexpr(!(DoublyLinkedList_has_getCurrentElement))
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::removeAtCurrent causes the current element to differ from the expected.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getCurrentElement is implemented." << std::endl;
						--textIndentionLevel;
						--textIndentionLevel;
					}
					else
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getCurrentElement is implemented.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::removeAtCurrent does not cause the current element to differ from the expected.\n";
						--textIndentionLevel;
						--textIndentionLevel;
					}

					if constexpr(!(DoublyLinkedList_has_size))
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::removeAtCurrent causes the size to change correctly.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::size is implemented." << std::endl;
						--textIndentionLevel;
						--textIndentionLevel;					
					}
					else
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::size is implemented.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::removeAtCurrent reports correct size once done.\n";
						--textIndentionLevel;
						--textIndentionLevel;
					}

					if constexpr(!(DoublyLinkedList_has_getAllElements))
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::removeAtCurrent caused the expected ordering of elements.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getAllElements is implemented." << std::endl;
						--textIndentionLevel;
						--textIndentionLevel;
					}
					else
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getAllElements is implemented.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::removeAtCurrent cause the expected ordering of elements.\n";
						--textIndentionLevel;
						--textIndentionLevel;
					}
					std::cout << '\n' << std::string(textIndentionLevel, '\t') + "This test will start with inserting the set {1, 2} into the datastructure using DoublyLinkedList::insertAtCurrent.\n";
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::removeAtCurrent will then be called, removing the current element (1).\n";
					T DLL;
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Inserting element '1'.\n";
					int toInsert = 1;
					DLL.insertAtCurrent(toInsert);
					std::cout << std::string(textIndentionLevel, '\t') + "Inserting element '2'.\n";
					toInsert = 2;
					DLL.insertAtCurrent(toInsert);
					if constexpr(DoublyLinkedList_has_getCurrentElement)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that correct element is set as current.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected element: 1\n";
						int current = DLL.getCurrentElement();
						std::cout << std::string(textIndentionLevel, '\t') + "Returned element: "<< current << "\n";
						if(current != 1)
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::insertAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::removeAtCurrent." << std::endl;
					DLL.removeAtCurrent();

					if constexpr(DoublyLinkedList_has_getCurrentElement)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that correct element is set as current.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected element: 2\n";
						int current = DLL.getCurrentElement();
						std::cout << std::string(textIndentionLevel, '\t') + "Returned element: "<< current << "\n";
						if(current != 2)
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					if constexpr(DoublyLinkedList_has_size)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that the structure returns correct size.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected size: 1\n";
						size_t current = DLL.size();
						std::cout << std::string(textIndentionLevel, '\t') + "Returned size: "<< current << "\n";
						if(current != 1)
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Inserting the set {3, 4}\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Inserting element '3'\n";
					toInsert = 3;
					DLL.insertAtCurrent(toInsert);
					std::cout << std::string(textIndentionLevel, '\t') + "Inserting element '4'\n";
					toInsert = 4;
					DLL.insertAtCurrent(toInsert);

					if constexpr(DoublyLinkedList_has_getAllElements)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that the elements are correctly ordered.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected order: {2, 4, 3}\n";
						std::vector<int> currentOrder = DLL.getAllElements();
						std::string content = "";
						content.clear();
						for(auto &&order : currentOrder)
							content += std::to_string(order) + ", ";
						if(currentOrder.size())
						{
							content.pop_back();
							content.pop_back();
						}
						std::cout << std::string(textIndentionLevel, '\t') + "Returned order: {"<< content << "}\n";

						if(currentOrder != std::vector<int>{2, 4, 3})
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::insertAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::removeAtCurrent.\n"; 
					DLL.removeAtCurrent();
					if constexpr(DoublyLinkedList_has_getAllElements)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that the elements are correctly ordered.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected order: {4, 3}\n";
						std::vector<int> currentOrder = DLL.getAllElements();
						std::string content = "";
						content.clear();
						for(auto &&order : currentOrder)
							content += std::to_string(order) + ", ";
						if(currentOrder.size())
						{
							content.pop_back();
							content.pop_back();
						}
						std::cout << std::string(textIndentionLevel, '\t') + "Returned order: {"<< content << "}\n";

						if(currentOrder != std::vector<int>{4, 3})
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					if constexpr(DoublyLinkedList_has_getCurrentElement)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that correct element is set as current.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected element: 4\n";
						int current = DLL.getCurrentElement();
						std::cout << std::string(textIndentionLevel, '\t') + "Returned element: "<< current << "\n";
						if(current != 4)
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					if constexpr(DoublyLinkedList_has_size)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that the structure returns correct size.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected size: 2\n";
						size_t current = DLL.size();
						std::cout << std::string(textIndentionLevel, '\t') + "Returned size: "<< current << "\n";
						if(current != 2)
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}

					--textIndentionLevel;
				}
				catch(std::exception &e)
				{
					textIndentionLevel = 2;
					std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during basic remove test. Error message: " +  e.what() + "\n";
					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
					return false;
				}
				catch(...)
				{
					textIndentionLevel = 2;
					std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during basic remove test.\n";
					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
					return false;
				}
				
				--textIndentionLevel;
			}
			else
			{
				std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::insertAtCurrent must be implemented for this test to be conducted." << std::endl;
				passed = false;
				--textIndentionLevel;
			}
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
			
		}
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
		return passed;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::removeAtCurrent not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
		return false;
	}
}

template <typename T = DoublyLinkedList<int>>
bool TestRemoveElement()
{
	std::size_t textIndentionLevel = 1;
	bool passed = true;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::removeElement tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_removeElement)
	{
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				int toRemove = 5;
				DLL.removeElement(toRemove);
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::removeElement on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (do nothing)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 3;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeElement tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test\n";
		}

		/**
		 * 
		 * Basic removal test
		 * 	-Inserting 10 elements in such a way that the resulting structure is always sorted
		 *  -If getCurrentElement is implemented, control is conducted to make sure that the current element is the exepcted element after each removal
		 * 	-If getAllElements is implemented, control is conducted to make sure that the elements are inserted in the expected order
		 *  -If size is implemented, control conducted to make sure that the size of the structure is as expected
		*/
		{
			try
			{
				std::cout << '\n';
				std::cout << std::string(textIndentionLevel, '\t') + "Starting basic removal test.\n";
				++textIndentionLevel;
				if constexpr (DoublyLinkedList_has_insertAtCurrent)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Extra control(s) for this test: " << std::endl;
					if constexpr(!(DoublyLinkedList_has_getCurrentElement))
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::removeElement causes the current element to differ from the expected.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getCurrentElement is implemented." << std::endl;
						--textIndentionLevel;
						--textIndentionLevel;
					}
					else
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getCurrentElement is implemented.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::removeElement does not cause the current element to differ from the expected.\n";
						--textIndentionLevel;
						--textIndentionLevel;
					}

					if constexpr(!(DoublyLinkedList_has_size))
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::removeElement causes the size to change correctly.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::size is implemented." << std::endl;
						--textIndentionLevel;
						--textIndentionLevel;					
					}
					else
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::size is implemented.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::removeElement reports correct size once done.\n";
						--textIndentionLevel;
						--textIndentionLevel;
					}

					if constexpr(!(DoublyLinkedList_has_getAllElements))
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::removeElement caused the expected ordering of elements.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getAllElements is implemented." << std::endl;
						--textIndentionLevel;
						--textIndentionLevel;
					}
					else
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getAllElements is implemented.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::removeElement cause the expected ordering of elements.\n";
						--textIndentionLevel;
						--textIndentionLevel;
					}

					std::cout << '\n' << std::string(textIndentionLevel, '\t') + "This test will start with inserting the set {5, 4, 3, 2, 1, 5, 5, 5} into the structure.\n";
					std::cout << std::string(textIndentionLevel, '\t') + "Once done, call will be made to DoublyLinkedList::removeElement with the element '5' as parameter.\n";

					T DLL;
					std::vector<int> insertionSet{5, 4, 3, 2, 1, 5, 5, 5};
					++textIndentionLevel;
					
					for(auto &&element : insertionSet)
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Inserting element: " << element << '\n';
						DLL.insertAtCurrent(element);
					}

					std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::removeElement(5)." << std::endl;
					int toRemove = 5;
					DLL.removeElement(toRemove);

					if constexpr(DoublyLinkedList_has_getAllElements)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that the elements are correctly ordered.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected order: {1, 2, 3, 4}\n";
						std::vector<int> currentOrder = DLL.getAllElements();
						std::string content = "";
						content.clear();
						for(auto &&order : currentOrder)
							content += std::to_string(order) + ", ";
						if(currentOrder.size())
						{
							content.pop_back();
							content.pop_back();
						}
						std::cout << std::string(textIndentionLevel, '\t') + "Returned order: {"<< content << "}\n";

						if(currentOrder != std::vector<int>{1, 2, 3, 4})
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeElement. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeElement tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					if constexpr(DoublyLinkedList_has_getCurrentElement)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that correct element is set as current.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected element: 1\n";
						int current = DLL.getCurrentElement();
						std::cout << std::string(textIndentionLevel, '\t') + "Returned element: "<< current << "\n";
						if(current != 1)
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					if constexpr(DoublyLinkedList_has_size)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that the structure returns correct size.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected size: 4\n";
						size_t current = DLL.size();
						std::cout << std::string(textIndentionLevel, '\t') + "Returned size: "<< current << "\n";
						if(current != 4)
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}

					std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::removeElement with element not present in the structure.\n";

					++textIndentionLevel;
					try
					{
						toRemove = -9;
						DLL.removeElement(toRemove);
						std::cout << std::string(textIndentionLevel, '\t') + "Call to DoublyLinkedList::removeElement with element not present in the structure behaved as expected.\n";
					}
					catch(std::exception &e)
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Call to DoublyLinkedList::removeElement with element not present in the structure caused an error to be thrown.\n";
						std::cout << std::string(textIndentionLevel, '\t') + "Error message: " << e.what() << std::endl;
						std::cout << std::string(textIndentionLevel, '\t') + "This is not intended behaviour. A parameter not existing in the structure should just be ignored." << std::endl;
					}
					catch(...)
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Call to DoublyLinkedList::removeElement with element not present in the structure caused an error to be thrown.\n";
						std::cout << std::string(textIndentionLevel, '\t') + "This is not intended behaviour. A parameter not existing in the structure should just be ignored." << std::endl;
					}
					--textIndentionLevel;
					--textIndentionLevel;
				}
				else
				{
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::insertAtCurrent must be implemented for this test to be conducted." << std::endl;
					passed = false;
				}


				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic removal test.\n";
			}
			catch(std::exception &e)
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during basic removal test. Error message: " +  e.what() + "\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeElement tests" << std::endl;
				return false;
			}
			catch(...)
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during basic removal test.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeElement tests" << std::endl;
				return false;
			}

		}

		/**
		 * Testing complete removal
		 * 
		 * 
		 */ 
		{
			try
			{
				std::cout << '\n';
				std::cout << std::string(textIndentionLevel, '\t') + "Starting complete removal test.\n";
				++textIndentionLevel;
				if constexpr (DoublyLinkedList_has_insertAtCurrent)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Extra control(s) for this test: " << std::endl;

					if constexpr(!(DoublyLinkedList_has_size))
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::removeElement causes the size to change correctly.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::size is implemented." << std::endl;
						--textIndentionLevel;
						--textIndentionLevel;					
					}
					else
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::size is implemented.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::removeElement reports correct size once done.\n";
						--textIndentionLevel;
						--textIndentionLevel;
					}

					if constexpr(!(DoublyLinkedList_has_getAllElements))
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::removeElement caused the expected ordering of elements.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getAllElements is implemented." << std::endl;
						--textIndentionLevel;
						--textIndentionLevel;
					}
					else
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getAllElements is implemented.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::removeElement cause the expected ordering of elements.\n";
						--textIndentionLevel;
						--textIndentionLevel;
					}

					std::cout << '\n' << std::string(textIndentionLevel, '\t') + "This test will start with inserting the set {5, 5, 5, 5} into the structure.\n";
					std::cout << std::string(textIndentionLevel, '\t') + "Once done, call will be made to DoublyLinkedList::removeElement with the element '5' as parameter.\n";

					T DLL;
					std::vector<int> insertionSet{5, 5, 5, 5};
					++textIndentionLevel;
					
					for(auto &&element : insertionSet)
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Inserting element: " << element << '\n';
						DLL.insertAtCurrent(element);
					}
					int toRemove = 5;
					std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::removeElement(5)." << std::endl;
					DLL.removeElement(toRemove);

					if constexpr(DoublyLinkedList_has_getAllElements)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that all elements are correctly removed.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected order: {}\n";
						std::vector<int> currentOrder = DLL.getAllElements();
						std::string content = "";
						content.clear();
						for(auto &&order : currentOrder)
							content += std::to_string(order) + ", ";
						if(currentOrder.size())
						{
							content.pop_back();
							content.pop_back();
						}
						std::cout << std::string(textIndentionLevel, '\t') + "Returned order: {"<< content << "}\n";

						if(currentOrder != std::vector<int>{})
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeElement. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeElement tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					
					if constexpr(DoublyLinkedList_has_size)
					{
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure that the structure returns correct size.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected size: 0\n";
						size_t current = DLL.size();
						std::cout << std::string(textIndentionLevel, '\t') + "Returned size: "<< current << "\n";
						if(current != 0)
						{
							textIndentionLevel = 3;
							std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::removeAtCurrent. Further testing cannot be conducted." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "Ending basic remove test." << std::endl;
							--textIndentionLevel;
							std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeAtCurrent tests" << std::endl;
							return false;		
						}
						--textIndentionLevel;
						--textIndentionLevel;
					}
					--textIndentionLevel;
				}
				else
				{
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::insertAtCurrent must be implemented for this test to be conducted." << std::endl;
					passed = false;
				}


				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending complete removal test.\n";
			}
			catch(std::exception &e)
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during complete removal test. Error message: " +  e.what() + "\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeElement tests" << std::endl;
				return false;
			}
			catch(...)
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Unexpected error occured during complete removal test.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeElement tests" << std::endl;
				return false;
			}


		}


		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeElement tests" << std::endl;
		return passed;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::removeElement not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::removeElement tests" << std::endl;
		return false;
	}
}

template <typename T = DoublyLinkedList<int>>
bool TestGetCurrentElement()
{
	std::size_t textIndentionLevel = 1;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::getCurrentElement tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_getCurrentElement)
	{
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				DLL.getCurrentElement();
			};
			bool passOnCatch = true;
			std::string currentTest = "DoublyLinkedList::getCurrentElement on empty structure";
			std::string onFailMessage = "This function must throw an exception on an empty structure, due to this not being a recoverable situation (a random value cannot be returned)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::getCurrentElement tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test\n";
		}

		std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Due to this function's extensive use in the tests of other functions, further testing will not be conducted separately." << std::endl;

		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::getCurrentElement tests" << std::endl;
		return true;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getCurrentElement not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::getCurrentElement tests" << std::endl;
		return false;
	}
}

template <typename T = DoublyLinkedList<int>>
bool TestWalkBackwards()
{
	std::size_t textIndentionLevel = 1;
	bool passed = true;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::walkBackwards tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_walkBackwards)
	{
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				DLL.walkBackwards();
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::walkBackwards on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (do nothing)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkBackwards tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test\n";
		}

		/**
		 * 
		 * Basic testing
		 * 	-This test will insert 1 element, control so that this is the current element, and then walk backwards
		 * 	-A secondary control will be conducted to make sure that this is still the current element
		 *  -Two more elements will be inserted, and walkBackwards called once
		 *  -getCurrentElement will be used to control if the expected element has been marked as current
		 * 
		*/

		{
			if constexpr (DoublyLinkedList_has_insertAtCurrent && DoublyLinkedList_has_getCurrentElement)
			{
				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Starting basic walkBackwards test." << std::endl;
				++textIndentionLevel;


				std::cout << std::string(textIndentionLevel, '\t') + "Extra control(s) for this test: " << std::endl;

				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "None\n";
				--textIndentionLevel;


				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "This test will start by inserting the set {9} into the structure.\n";
				std::cout << std::string(textIndentionLevel, '\t') + "A call to DoublyLinkedList::walkBackwards will then be conducted to make sure that a set of one element can be handled.\n";

				++textIndentionLevel;
				T DLL;
				
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting element 9 into the structure." << std::endl;
				int toInsert = 9;
				DLL.insertAtCurrent(toInsert);
				std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::walkBackwards." << std::endl;
				DLL.walkBackwards();
				--textIndentionLevel;
				
				std::cout << std::string(textIndentionLevel, '\t') + "Conducting control with DoublyLinkedList::getCurrentElement." << std::endl;
				int current = DLL.getCurrentElement();
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Expected value: 9\n";
				std::cout << std::string(textIndentionLevel, '\t') + "Returned value: " << current << '\n';
				if(current != 9)
				{
						textIndentionLevel = 3;
						std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::walkBackwards. Further testing cannot be conducted." << std::endl;
						--textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Ending basic walkBackwards test." << std::endl;
						--textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkBackwards tests" << std::endl;
						return false;		
				}
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting the set {8, 7} into the structure before calling DoublyLinkedList::walkBackwards again." << std::endl;
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting the element '8'\n";
				toInsert = 8;
				DLL.insertAtCurrent(toInsert);
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting the element '7'\n";
				toInsert = 7;
				DLL.insertAtCurrent(toInsert);
				std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::walkBackwards\n";
				DLL.walkBackwards();
				--textIndentionLevel;
				
				std::cout << std::string(textIndentionLevel, '\t') + "Conducting control with DoublyLinkedList::getCurrentElement." << std::endl;
				current = DLL.getCurrentElement();
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Expected value: 8\n";
				std::cout << std::string(textIndentionLevel, '\t') + "Returned value: " << current << '\n';
				if(current != 8)
				{
						textIndentionLevel = 3;
						std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::walkBackwards. Further testing cannot be conducted." << std::endl;
						--textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Ending basic walkBackwards test." << std::endl;
						--textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkBackwards tests" << std::endl;
						return false;		
				}
				--textIndentionLevel;

				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic walkBackwards test." << std::endl;
			}
			else
			{
				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted before DoublyLinkedList::insertAtCurrent and DoublyLinkedList::getCurrentElement are implemented.\n";
			}
		}


		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkBackwards tests" << std::endl;
		return passed;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::walkBackwards not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkBackwards tests" << std::endl;
		return false;
	}
}

template <typename T = DoublyLinkedList<int>>
bool TestWalkForwards()
{
	std::size_t textIndentionLevel = 1;
	bool passed = true;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::walkForwards tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_walkForwards)
	{
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				DLL.walkForwards();
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::walkForwards on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (do nothing)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkForwards tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test\n";
		}

		/**
		 * 
		 * Basic testing
		 * 	-This test will insert 1 element, control so that this is the current element, and then walk forwards
		 * 	-A secondary control will be conducted to make sure that this is still the current element
		 *  -Two more elements will be inserted, and walkForwards called once
		 *  -getCurrentElement will be used to control if the expected element has been marked as current
		 * 
		*/

		{
			if constexpr (DoublyLinkedList_has_insertAtCurrent && DoublyLinkedList_has_getCurrentElement)
			{
				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Starting basic walkForwards test." << std::endl;
				++textIndentionLevel;


				std::cout << std::string(textIndentionLevel, '\t') + "Extra control(s) for this test: " << std::endl;

				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "None\n";
				--textIndentionLevel;
				


				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "This test will start by inserting the set {9} into the structure.\n";
				std::cout << std::string(textIndentionLevel, '\t') + "A call to DoublyLinkedList::walkForwards will then be conducted to make sure that a set of one element can be handled.\n";

				++textIndentionLevel;
				T DLL;
				
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting element 9 into the structure." << std::endl;
				int toInsert = 9;
				DLL.insertAtCurrent(toInsert);
				std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::walkForwards." << std::endl;
				DLL.walkForwards();
				--textIndentionLevel;
				
				std::cout << std::string(textIndentionLevel, '\t') + "Conducting control with DoublyLinkedList::getCurrentElement." << std::endl;
				int current = DLL.getCurrentElement();
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Expected value: 9\n";
				std::cout << std::string(textIndentionLevel, '\t') + "Returned value: " << current << '\n';
				if(current != 9)
				{
						textIndentionLevel = 3;
						std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::walkForwards. Further testing cannot be conducted." << std::endl;
						--textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Ending basic walkForwards test." << std::endl;
						--textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkForwards tests" << std::endl;
						return false;		
				}
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting the set {8, 7} into the structure before calling DoublyLinkedList::walkForwards again." << std::endl;
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting the element '8'\n";
				toInsert = 8;
				DLL.insertAtCurrent(toInsert);
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting the element '7'\n";
				toInsert = 7;
				DLL.insertAtCurrent(toInsert);
				std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::walkForwards\n";
				DLL.walkForwards();
				--textIndentionLevel;
				
				std::cout << std::string(textIndentionLevel, '\t') + "Conducting control with DoublyLinkedList::getCurrentElement." << std::endl;
				current = DLL.getCurrentElement();
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Expected value: 7\n";
				std::cout << std::string(textIndentionLevel, '\t') + "Returned value: " << current << '\n';
				if(current != 7)
				{
						textIndentionLevel = 3;
						std::cout << std::string(textIndentionLevel, '\t') + "Error after call to DoublyLinkedList::walkForwards. Further testing cannot be conducted." << std::endl;
						--textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Ending basic walkForwards test." << std::endl;
						--textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkForwards tests" << std::endl;
						return false;		
				}
				--textIndentionLevel;
				
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic walkForwards test." << std::endl;
			}
			else
			{
				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted before DoublyLinkedList::insertAtCurrent and DoublyLinkedList::getCurrentElement are implemented.\n";
			}
		}


		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkForwards tests" << std::endl;
		return passed;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::walkForwards not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::walkForwards tests" << std::endl;
		return false;
	}
}


template <typename T = DoublyLinkedList<int>>
bool TestExists()
{
	std::size_t textIndentionLevel = 1;
	bool passed = true;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::exists tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_exists)
	{
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				int toInsert = 12;
				DLL.exists(toInsert);
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::exists on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (do nothing)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::exists tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test\n";
		}

		/**
		 * The basic test will insert a set of 10 elements and then search for one element in the set and one element that is not
		 *  -Controlls will be conducted to make sure that the elements does not change order
		 *  -Controlls will be conducted to make sure that the current element does not change
		 * 
		*/ 
		{
			if constexpr (DoublyLinkedList_has_insertAtCurrent)
			{
				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Starting basic exists test." << std::endl;
				++textIndentionLevel;


				std::cout << std::string(textIndentionLevel, '\t') + "Extra control(s) for this test: " << std::endl;

				if constexpr(!(DoublyLinkedList_has_getAllElements))
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::exists changed the expected ordering of elements.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getAllElements is implemented." << std::endl;
					--textIndentionLevel;
					--textIndentionLevel;
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getAllElements is implemented.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::exists does not change the expected ordering of elements.\n";
					--textIndentionLevel;
					--textIndentionLevel;
				}
				if constexpr(!(DoublyLinkedList_has_getCurrentElement))
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Cannot control if calls to DoublyLinkedList::exists changed the expected ordering of elements.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Further controls will be conducted when DoublyLinkedList::getCurrentElement is implemented." << std::endl;
					--textIndentionLevel;
					--textIndentionLevel;
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getCurrentElement is implemented.\n";
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Controls will be conducted to make sure that DoublyLinkedList::exists does not change the expected ordering of elements.\n";
					--textIndentionLevel;
					--textIndentionLevel;
				}

				std::cout << '\n' << std::string(textIndentionLevel, '\t') << "This test will start with inserting the set {9, 8, 7, 6, 5, 4, 3, 2, 1, 0} into the structure.\n";
				std::cout << std::string(textIndentionLevel, '\t') << "Two calls will then be made to DoublyLinkedList::exists. One with the element '6' as argument, the other with the element '10'.\n";

				++textIndentionLevel;
				std::vector<int> insertionSet = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
				T DLL;
				for(auto &&element : insertionSet)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Inserting element: " << element << '\n';
					DLL.insertAtCurrent(element);
				}
				std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::exists with element '6' as argument." << std::endl;
				int toFind = 6;
				bool result = DLL.exists(toFind);

				if(result)
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Call returned 'true' as expected." << std::endl;
					--textIndentionLevel;
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Call did not return 'true' as expected." << std::endl;
					--textIndentionLevel;
				}

				if constexpr (DoublyLinkedList_has_getAllElements)
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Running control using DoublyLinkedList::getAllElements.\n";
					++textIndentionLevel;
					std::vector<int> currentOrder = DLL.getAllElements();
					
					if(currentOrder != std::vector<int>({9, 0, 1, 2, 3, 4, 5, 6, 7, 8}))
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getAllElements indicates error after call to DoublyLinkedList::exists.\n";
						++textIndentionLevel;

						if(currentOrder.size() == 0)
						{
							std::cout << std::string(textIndentionLevel, '\t') + "No elements returned\n";
						}
						else
						{
							std::string content = "";
							content.clear();

							std::cout << std::string(textIndentionLevel, '\t') + "Expected order: {9, 0, 1, 2, 3, 4, 5, 6, 7, 8}\n" << std::endl;
							for(auto &&order : currentOrder)
								content += std::to_string(order) + ", ";

							content.pop_back();
							content.pop_back();
							std::cout << std::string(textIndentionLevel, '\t') + "Returned order: {" << content << "}\n";
						}
						--textIndentionLevel;
						passed = false;
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getAllElements indicates no error after call to DoublyLinkedList::exists.\n";
					}
					--textIndentionLevel;
					--textIndentionLevel;
				}
				if constexpr (DoublyLinkedList_has_getCurrentElement)
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Running control using DoublyLinkedList::getCurrentElement.\n";
					++textIndentionLevel;
					int current = DLL.getCurrentElement();
					if(current != 9)
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getCurrentElement indicates error after call to DoublyLinkedList::exists.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected element: 9\n";
						std::cout << std::string(textIndentionLevel, '\t') + "Returned element: " << current << '\n';
						--textIndentionLevel;
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getCurrentElement indicates no error after call to DoublyLinkedList::exists.\n";
					}
					--textIndentionLevel;
					--textIndentionLevel;
				}
				toFind = 10;
				result = DLL.exists(toFind);
				if(!result)
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Call returned 'false' as expected." << std::endl;
					--textIndentionLevel;
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Call did not return 'false' as expected." << std::endl;
					--textIndentionLevel;
				}

				if constexpr (DoublyLinkedList_has_getAllElements)
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Running control using DoublyLinkedList::getAllElements.\n";
					++textIndentionLevel;
					std::vector<int> currentOrder = DLL.getAllElements();
					
					if(currentOrder != std::vector<int>({9, 0, 1, 2, 3, 4, 5, 6, 7, 8}))
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getAllElements indicates error after call to DoublyLinkedList::exists.\n";
						++textIndentionLevel;

						if(currentOrder.size() == 0)
						{
							std::cout << std::string(textIndentionLevel, '\t') + "No elements returned\n";
						}
						else
						{
							std::string content = "";
							content.clear();

							std::cout << std::string(textIndentionLevel, '\t') + "Expected order: {9, 0, 1, 2, 3, 4, 5, 6, 7, 8}\n" << std::endl;
							for(auto &&order : currentOrder)
								content += std::to_string(order) + ", ";

							content.pop_back();
							content.pop_back();
							std::cout << std::string(textIndentionLevel, '\t') + "Returned order: {" << content << "}\n";
						}
						--textIndentionLevel;
						--textIndentionLevel;
						passed = false;
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getAllElements indicates no error after call to DoublyLinkedList::exists.\n";
					}
					--textIndentionLevel;
					--textIndentionLevel;
				}
				if constexpr (DoublyLinkedList_has_getCurrentElement)
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Running control using DoublyLinkedList::getCurrentElement.\n";
					++textIndentionLevel;
					int current = DLL.getCurrentElement();
					if(current != 9)
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getCurrentElement indicates error after call to DoublyLinkedList::exists.\n";
						++textIndentionLevel;
						std::cout << std::string(textIndentionLevel, '\t') + "Expected element: 9\n";
						std::cout << std::string(textIndentionLevel, '\t') + "Returned element: " << current << '\n';
						--textIndentionLevel;
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Control with DoublyLinkedList::getCurrentElement indicates no error after call to DoublyLinkedList::exists.\n";
					}
					--textIndentionLevel;
					--textIndentionLevel;
				}
				--textIndentionLevel;

				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') << "Ending basic exists test" << std::endl;
			}
			else
			{
				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted before DoublyLinkedList::insertAtCurrent is implemented." << std::endl;
			}

		}
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::exists tests" << std::endl;
		return passed;
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::exists not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::exists tests" << std::endl;
		return false;
	}
}

template <typename T = DoublyLinkedList<int>>
bool TestIsEmpty()
{
	std::size_t textIndentionLevel = 1;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::isEmpty tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_isEmpty)
	{
		bool passed = true;
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				DLL.isEmpty();
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::isEmpty on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (return true)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::isEmpty tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test\n";
		}


		/**
		 * 
		 * The basic test will insert 10 elements and then control if the structure is empty.
		 * After this, a while loop will be used to remove each element until the structure is empty.
		 * 
		*/ 
		{
			if constexpr (DoublyLinkedList_has_insertAtCurrent && DoublyLinkedList_has_removeAtCurrent)
			{
				std::cout << std::string(textIndentionLevel, '\t') + "Starting basic isEmpty test\n";
				++textIndentionLevel;
				std::cout << '\n' << std::string(textIndentionLevel, '\t') << "This test will start with inserting the set {9, 8, 7, 6, 5, 4, 3, 2, 1, 0} into the structure.\n";
				std::cout << std::string(textIndentionLevel, '\t') << "A call will then be made to DoublyLinkedList::isEmpty to make sure that 'false' is returned.\n";
				std::cout << std::string(textIndentionLevel, '\t') << "After this, a while-loop in conjunction with DoublyLinkedList::isEmpty will be used to clear the structure.\n";


				++textIndentionLevel;
				std::vector<int> insertionSet = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
				T DLL;
				for(auto &&element : insertionSet)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Inserting element: " << element << '\n';
					DLL.insertAtCurrent(element);
				}
				std::cout << std::string(textIndentionLevel, '\t') + "Calling DoublyLinkedList::isEmpty." << std::endl;
				bool result = DLL.isEmpty();

				if(!result)
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Call returned 'false' as expected." << std::endl;
					--textIndentionLevel;
				}
				else
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Call did not return 'false' as expected." << std::endl;
					passed = false;
					--textIndentionLevel;
				}

				std::cout << std::string(textIndentionLevel, '\t') + "Removing all elements in the structure." << std::endl;
				++textIndentionLevel;
				int nrOfRemoves = 0;
				while(!DLL.isEmpty() && nrOfRemoves != 10)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::removeAtCurrent call " << nrOfRemoves + 1 << "/10" << std::endl;
					++nrOfRemoves;
					DLL.removeAtCurrent();

				}
				--textIndentionLevel;

				std::cout << std::string(textIndentionLevel, '\t') + "Controlling the structure." << std::endl;
				++textIndentionLevel;
				if(!DLL.isEmpty() || nrOfRemoves != 10)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::isEmpty returned incorrectly.\n";
					passed = false;
					std::cout << std::string(textIndentionLevel, '\t') + "Returned: " << std::boolalpha << DLL.isEmpty() << " after " << nrOfRemoves << "/10 calls." << std::endl;
				}
				else
				{
					std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::isEmpty returned correctly." << std::endl;
				}
				--textIndentionLevel;

				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending basic isEmpty test\n";
			}
			else
			{
				std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted before DoublyLinkedList::insertAtCurrent and DoublyLinkedList::removeAtCurrent are implemented." << std::endl;
			}
		}

		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::isEmpty tests" << std::endl;
		return passed;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::isEmpty not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::isEmpty tests" << std::endl;
		return false;
	}
}

template <typename T = DoublyLinkedList<int>>
bool TestSize()
{
	std::size_t textIndentionLevel = 1;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::size tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_size)
	{
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				DLL.size();
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::size on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (return 0)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::size tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test\n";
		}

		std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Due to this function's extensive use in the tests of other functions, further testing will not be conducted separately." << std::endl;

		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::size tests" << std::endl;
		return true;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::size not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::size tests" << std::endl;
		return false;
	}
}

template <typename T = DoublyLinkedList<int>>
bool TestGetAllElements()
{
	std::size_t textIndentionLevel = 1;
	std::cout << '\n';
	std::cout << std::string(textIndentionLevel, '\t') + "Start: DoublyLinkedList::getAllElements tests\n";
	++textIndentionLevel;
	if constexpr(DoublyLinkedList_has_getAllElements)
	{
		/**
		 * 
		 * Exception on empty structure test
		 * 
		*/
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting basic exception test\n";
			++textIndentionLevel;
			auto callable = [](){
				T DLL;
				DLL.getAllElements();
			};
			bool passOnCatch = false;
			std::string currentTest = "DoublyLinkedList::getAllElements on empty structure";
			std::string onFailMessage = "This function should not throw an exception on an empty structure, due to this being a recoverable situation (return empty vector)";
			if(!TryCatchHelper(callable, passOnCatch, textIndentionLevel, currentTest, onFailMessage))
			{
				textIndentionLevel = 2;
				std::cout << std::string(textIndentionLevel, '\t') + "Further testing cannot be conducted.\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::getAllElements tests" << std::endl;
				return false;
			}
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending basic exception test\n";
		}

		std::cout << '\n' << std::string(textIndentionLevel, '\t') + "Due to this function's extensive use in the tests of other functions, further testing will not be conducted separately." << std::endl;

		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::getAllElements tests" << std::endl;
		return true;		
	}
	else
	{
		std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList::getAllElements not implemented. Tests cannot be conducted.\n";
		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: DoublyLinkedList::getAllElements tests" << std::endl;
		return false;
	}
}

template <typename T = DoublyLinkedList<int>>
bool StressTest()
{
	if constexpr(!(
					DoublyLinkedList_has_default_constructor &&
					DoublyLinkedList_has_exists &&
					DoublyLinkedList_has_getAllElements &&
					DoublyLinkedList_has_getCurrentElement &&
					DoublyLinkedList_has_insertAtCurrent &&
					DoublyLinkedList_has_insertWithOffset &&
					DoublyLinkedList_has_isEmpty &&
					DoublyLinkedList_has_removeAtCurrent &&
					DoublyLinkedList_has_removeElement &&
					DoublyLinkedList_has_size &&
					DoublyLinkedList_has_walkBackwards &&
					DoublyLinkedList_has_walkForwards
				))
	{
		std::cout << "\n\tStress Test will not be conducted before all functions are implemented." << std::endl;
		return false;
	}
	else
	{
		std::size_t textIndentionLevel = 1;
		std::cout << '\n';
		std::cout << std::string(textIndentionLevel, '\t') + "Start: Stress tests\n";
		++textIndentionLevel;

		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting stress tests 1/3\n";
			++textIndentionLevel;

			std::cout << std::string(textIndentionLevel, '\t') + "This test will insert 100 randomised elements into the structure.\n";
			std::cout << std::string(textIndentionLevel, '\t') + "Once all elements are inserted, alternate calls to DoublyLinkedList::walkForwards and DoublyLinkedList::removeAtCurrent will be conducted until DoublyLinkedList::isEmpty returns true.\n";
			++textIndentionLevel;
			T DLL;

			std::mt19937_64 gen;
			std::uniform_int_distribution<int> dist;
			std::vector<int> elementsInStructure;
			std::cout << std::string(textIndentionLevel, '\t') + "Inserting elements in structure." << std::endl;
			++textIndentionLevel;
			for(size_t i = 0; i != 100; ++i)
			{
				int generatedNumber = dist(gen);
				if(i < 2)
					elementsInStructure.push_back(generatedNumber);
				else
					elementsInStructure.insert(elementsInStructure.begin() + 1, generatedNumber);
				if(i%25 == 0)
					std::cout << std::string(textIndentionLevel, '\t') << i << "/100 elements inserted...\n";
				DLL.insertAtCurrent(generatedNumber);
			}
			--textIndentionLevel;
			std::vector<int> fromDLL = DLL.getAllElements();
			if(fromDLL != elementsInStructure)
			{
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Error: elements are not inserted correctly.\n";
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Testing cannot continue.\n";
				--textIndentionLevel;

				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 1/3\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: Stress tests" << std::endl;
				return false;
			}

			std::cout << std::string(textIndentionLevel, '\t') + "All elements correctly inserted. Starting removal sequence.\n";

			++textIndentionLevel;
			size_t removalCounter = 0;

			while(!DLL.isEmpty() || removalCounter != 100)
			{
				++removalCounter;
				if(removalCounter%25 == 0)
					std::cout << std::string(textIndentionLevel, '\t') + "Removing element " << removalCounter << "/100...\n";

				DLL.walkForwards();
				DLL.removeAtCurrent();
			}
			--textIndentionLevel;
			fromDLL = DLL.getAllElements();
			std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure the structure is empty." << std::endl;
			if(fromDLL.size() != 0 || DLL.size() != 0)
			{
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList still contains elements.\n";
				++textIndentionLevel;
				if(fromDLL.size())
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Elements left in structure: \n";
					std::string content = "";
					for(auto element : fromDLL)
						content += std::to_string(element) + ", ";
					content.pop_back();
					content.pop_back();
				}
				else
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Call to DoublyLinkedList::size indicates " << DLL.size() << " elements left in the structure.\n";
					std::cout << std::string(textIndentionLevel, '\t') + "However, no elements are returned by call to DoublyLinkedList::getAllElements." << std::endl;

				}
				--textIndentionLevel;
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Testing cannot continue.\n";
				--textIndentionLevel;

				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 1/3\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: Stress tests" << std::endl;
				return false;
			}
			else
			{
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "All elements properly removed from the structure." << std::endl;
			}

			--textIndentionLevel;
			--textIndentionLevel;
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 1/3\n\n";
		}
		
		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting stress tests 2/3\n";
			++textIndentionLevel;

			std::cout << std::string(textIndentionLevel, '\t') + "This test will insert 1000 randomised elements in the range [0, 25] into the structure.\n";
			std::cout << std::string(textIndentionLevel, '\t') + "Once all elements are inserted, DoublyLinkedList::getCurrent will be used to pick an element for removal using DoublyLinkedList::removeElement.\n";
			std::cout << std::string(textIndentionLevel, '\t') + "This will be done until DoublyLinkedList::isEmpty returns true.\n";
			++textIndentionLevel;
			T DLL;

			std::mt19937_64 gen;
			std::uniform_int_distribution<int> dist(0, 25);
			std::vector<int> elementsInStructure;
			std::cout << std::string(textIndentionLevel, '\t') + "Inserting elements in structure." << std::endl;
			++textIndentionLevel;
			std::array<int, 26> histogram = {0};
			for(size_t i = 0; i != 1000; ++i)
			{
				int generatedNumber = dist(gen);
				if(i < 2)
					elementsInStructure.push_back(generatedNumber);
				else
					elementsInStructure.insert(elementsInStructure.begin() + 1, generatedNumber);
				if(i%100 == 0)
					std::cout << std::string(textIndentionLevel, '\t') << i << "/1000 elements inserted...\n";
				DLL.insertAtCurrent(generatedNumber);
				++histogram[generatedNumber];
			}
			--textIndentionLevel;
			std::vector<int> fromDLL = DLL.getAllElements();
			if(fromDLL != elementsInStructure)
			{
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Error: elements are not inserted correctly.\n";
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Testing cannot continue.\n";
				--textIndentionLevel;

				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 2/3\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: Stress tests" << std::endl;
				return false;
			}
			std::cout << std::string(textIndentionLevel, '\t') + "All elements correctly inserted. Starting removal procedure.\n";
			++textIndentionLevel;
			while(!DLL.isEmpty() || elementsInStructure.size())
			{
				int toRemove = DLL.getCurrentElement();
				std::cout << std::string(textIndentionLevel, '\t') + "Removing element: " << toRemove << "\tExpecting this call to remove " << histogram[toRemove] << " elements.\n";
				size_t sizeBeforeRemove = DLL.size();
				DLL.removeElement(toRemove);
				if((sizeBeforeRemove - DLL.size()) != static_cast<size_t>(histogram[toRemove]))
				{
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') << "Expected " << histogram[toRemove] << " elements to be removed. Control reports that " << (sizeBeforeRemove - DLL.size()) << " elements were removed." << std::endl;
					++textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Testing cannot continue.\n";
					--textIndentionLevel;
					--textIndentionLevel;
					--textIndentionLevel;
					--textIndentionLevel;

					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 2/3\n";
					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "End: Stress tests" << std::endl;
					return false;
				}
				elementsInStructure.erase(std::remove(elementsInStructure.begin(), elementsInStructure.end(), toRemove), elementsInStructure.end());
			}
			--textIndentionLevel;
			
			fromDLL = DLL.getAllElements();
			std::cout << std::string(textIndentionLevel, '\t') + "Control is conducted to make sure the structure is empty." << std::endl;
			if(fromDLL.size() != 0 || DLL.size() != 0)
			{
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "DoublyLinkedList still contains elements.\n";
				++textIndentionLevel;
				if(fromDLL.size())
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Elements left in structure: \n";
					std::string content = "";
					for(auto element : fromDLL)
						content += std::to_string(element) + ", ";
					content.pop_back();
					content.pop_back();
				}
				else
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Call to DoublyLinkedList::size indicates " << DLL.size() << " elements left in the structure.\n";
					std::cout << std::string(textIndentionLevel, '\t') + "However, no elements are returned by call to DoublyLinkedList::getAllElements." << std::endl;

				}
				--textIndentionLevel;
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Testing cannot continue.\n";
				--textIndentionLevel;

				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 2/3\n";
				--textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "End: Stress tests" << std::endl;
				return false;
			}
			else
			{
				++textIndentionLevel;
				std::cout << std::string(textIndentionLevel, '\t') + "All elements properly removed from the structure." << std::endl;
			}

			--textIndentionLevel;
			--textIndentionLevel;
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 2/3\n\n";
		}

		{
			std::cout << std::string(textIndentionLevel, '\t') + "Starting stress tests 3/3\n";
			++textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "This test will insert 250 elements and then remove 200, until DoublyLinkedList::size returns that 1000 elements are inserted.\n";
			std::cout << std::string(textIndentionLevel, '\t') + "Once this limit is reached, insertion and removal will be reversed, causing 250 elements to be removed for each 200 elements inserted.\n";
			std::cout << std::string(textIndentionLevel, '\t') + "This will continue until the structure is empty." << std::endl;
			++textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Starting phase 1\n";

			T DLL;
			std::mt19937_64 gen;
			std::uniform_int_distribution<int> dist;
			std::vector<int> elementsInStructure;
			++textIndentionLevel;
			do
			{
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting 250 elements... ";
				for(size_t i = 0; i != 250; ++i)
				{
					int generatedNumber = dist(gen);
					DLL.insertWithOffset(generatedNumber, -1);
					elementsInStructure.push_back(generatedNumber);
				}
				std::cout << "Removing 200 elements... ";
				for(size_t i = 0; i != 200; ++i)
				{
					DLL.removeAtCurrent();
					elementsInStructure.erase(elementsInStructure.begin());
				}
				std::cout << "Elements currently in structure: " << DLL.size() << std::endl;
				std::vector<int> controlVector = DLL.getAllElements();
				if(controlVector != elementsInStructure)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Error: DoublyLinkedList does not contain the expected set." << std::endl;
					++textIndentionLevel;
					if(controlVector.size() != elementsInStructure.size())
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Size missmatch. Control size: " << elementsInStructure.size() << " DoublyLinkedList size: " << controlVector.size() << std::endl;
					
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "One or more elements are not in the expected position\n";
						++textIndentionLevel;
						for(size_t i = 0; i != elementsInStructure.size(); ++i)
						{
							if(controlVector[i] != elementsInStructure[i])
							{
								std::cout << std::string(textIndentionLevel, '\t') + "Expected element " << elementsInStructure[i] << "\ton index " << i << "\tReceived " << controlVector[i] << std::endl;
							}
						}
						--textIndentionLevel;
					}

					--textIndentionLevel;
					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Testing cannot continue.\n";
					--textIndentionLevel;

					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 3/3\n";
					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "End: Stress tests" << std::endl;
					return false;
				}
			} while (DLL.size() != 1000);
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Phase 1 completed.\n";

			std::cout << std::string(textIndentionLevel, '\t') + "Starting phase 2.\n";
			++textIndentionLevel;
			do
			{
				std::cout << std::string(textIndentionLevel, '\t') + "Inserting 200 elements... ";
				for(size_t i = 0; i != 200; ++i)
				{
					int generatedNumber = dist(gen);
					DLL.insertWithOffset(generatedNumber, -1);
					elementsInStructure.push_back(generatedNumber);
				}
				std::cout << "Removing 250 elements... ";
				for(size_t i = 0; i != 250; ++i)
				{
					DLL.removeAtCurrent();
					elementsInStructure.erase(elementsInStructure.begin());
				}
				std::cout << "Elements currently in structure: " << DLL.size() << std::endl;
				std::vector<int> controlVector = DLL.getAllElements();
				if(controlVector != elementsInStructure)
				{
					std::cout << std::string(textIndentionLevel, '\t') + "Error: DoublyLinkedList does not contain the expected set." << std::endl;
					++textIndentionLevel;
					if(controlVector.size() != elementsInStructure.size())
					{
						std::cout << std::string(textIndentionLevel, '\t') + "Size missmatch. Control size: " << elementsInStructure.size() << " DoublyLinkedList size: " << controlVector.size() << std::endl;
					
					}
					else
					{
						std::cout << std::string(textIndentionLevel, '\t') + "One or more elements are not in the expected position\n";
						++textIndentionLevel;
						for(size_t i = 0; i != elementsInStructure.size(); ++i)
						{
							if(controlVector[i] != elementsInStructure[i])
							{
								std::cout << std::string(textIndentionLevel, '\t') + "Expected element " << elementsInStructure[i] << "\ton index " << i << "\tReceived " << controlVector[i] << std::endl;
							}
						}
						--textIndentionLevel;
					}

					--textIndentionLevel;
					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Testing cannot continue.\n";
					--textIndentionLevel;

					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 3/3\n";
					--textIndentionLevel;
					std::cout << std::string(textIndentionLevel, '\t') + "End: Stress tests" << std::endl;
					return false;
				}
			} while (DLL.size() != 0);
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Phase 2 completed." << std::endl;
			--textIndentionLevel;
			std::cout << std::string(textIndentionLevel, '\t') + "Ending stress test 3/3\n";
		}


		--textIndentionLevel;
		std::cout << std::string(textIndentionLevel, '\t') + "End: Stress tests" << std::endl;
		return true;
	}
}

template <typename T = DoublyLinkedList<int>>
bool DoublyLinkedListUnitTests()
{
	if constexpr (DoublyLinkedList_has_default_constructor)
	{
		bool pass = true;
		std::cout << "Tests starting on DoublyLinkedList." << std::endl;
		try
		{
			T* DLL = new T();
			delete DLL;
		}
		catch(const std::exception& e)
		{
			std::cout << "\tDefault construction or destruction of DoublyLinkedList failed. Testing cannot be conducted. Error message: " << e.what() << std::endl;
			return false;
		}
		catch(...)
		{
			std::cout << "\tDefault construction or destruction of DoublyLinkedList failed. Testing cannot be conducted." << std::endl;
			return false;
		}
		
		if (!TestInsertAtCurrent())
		{
			std::cout << "Tests failed on DoublyLinkedList::insertAtCurrent." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::insertAtCurrent." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestInsertWithOffset())
		{
			std::cout << "Tests failed on DoublyLinkedList::insertWithOffset." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::insertWithOffset." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestRemoveAtCurrent())
		{
			std::cout << "Tests failed on DoublyLinkedList::removeAtCurrent." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::removeAtCurrent." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestRemoveElement())
		{
			std::cout << "Tests failed on DoublyLinkedList::removeElement." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::removeElement." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestGetCurrentElement())
		{
			std::cout << "Tests failed on DoublyLinkedList::getCurrentElement." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::getCurrentElement." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestWalkBackwards())
		{
			std::cout << "Tests failed on DoublyLinkedList::walkBackwards." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::walkBackwards." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestWalkForwards())
		{
			std::cout << "Tests failed on DoublyLinkedList::walkForwards." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::walkForwards." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestExists())
		{
			std::cout << "Tests failed on DoublyLinkedList::exists."  << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::exists." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestIsEmpty())
		{
			std::cout << "Tests failed on DoublyLinkedList::isEmpty." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::isEmpty." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestSize())
		{
			std::cout << "Tests failed on DoublyLinkedList::size." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::size." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!TestGetAllElements())
		{
			std::cout << "Tests failed on DoublyLinkedList::getAllElements." << std::endl;
			pass = false;
		}
		else
			std::cout << "Test succeeded on DoublyLinkedList::getAllElements." << std::endl;
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();
		if(!pass)
		{
			std::cout << "Stress Test cannot be conducted until all previous tests are succesfully finished." << std::endl;
		}
		else if(!StressTest())
		{
			std::cout << "Tests failed on the stress test." << std::endl;
			pass = false;
		}
		std::cout << "Press enter to continue." << std::endl;
		std::cin.get();

		return pass;
	}
	else
	{
		std::cout << "\tTests cannot be conducted: No default-constructor accessible." << std::endl;
		return false;
	}
}
} // namespace UnitTests::DOUBLYLINKEDLIST
#else
namespace UnitTests::DOUBLYLINKEDLIST
{
bool DoublyLinkedListUnitTests()
{
	std::cout << "File DoublyLinkedList.h non-existent." << std::endl;
	return false;
}
} // namespace UnitTests::DOUBLYLINKEDLIST
#endif

#endif