// TestGitApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "New Unsatged Commit\n";
    //Adding a change, test commit change using show command
    //This line is added to test changes 
    //Local commit done and not pushed to github. This is addition change done to test if multiple local commits can be pushed at once to github

    //Added a new branch l_iss02. This branch will never have changes in l_iss01
    std::cout << "Only have changes related to branch: l_iss02\n";

    //Changes to local branch l_iss01
    std::cout << "Create local branch named: l_iss01\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
