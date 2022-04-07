/**
 * @file operations.h
 * @author Bruno Silva
 * @brief This module contains the main operations of the program.
 * 
 * It also serves as a "bridge" between the fortnite and list modules to
 * avoid circular dependencies of the header files.
 * 
 * @version 0.1
 * @date 2022-04-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once

#include "list.h"
#include "fortnite.h"

/**
 * @brief Loads contents of fortnite shop from csv file.
 * 
 * The caller states 'howMany' records are to be loaded.
 * If less are available, then only those are loaded into the array.
 * 
 * @param arr an array with at least capacity for 'howMany'
 * @param howMany how many items to load. 
 * @return int number of items loaded into 'arr'
 */
PtList fortniteLoadShop();

//---------------

//Nível 1
//bool fortniteItemBuy(const char* name, FortniteItem arr[], int arrLength);

//Nível 2
//PtFortniteItem fortniteItemSearch(const char* name, FortniteItem arr[], int arrLength);

//Nível 3
//FortniteItem* fortniteArrayCopy(FortniteItem arr[], int arrLength);

//Nível 4
//FortniteItem* fortniteFindFreeItems(FortniteItem arr[], int arrLength, int *itemSize);
//adaptação - critério de seleção
//FortniteItem* fortniteFindRarityItems(FortniteItem arr[], int arrLength, const char* rarity, int *itemSize);


//Nível 5
//bool fortniteAddNewItem(FortniteItem item, FortniteItem *arr[], int *pArrLength);





