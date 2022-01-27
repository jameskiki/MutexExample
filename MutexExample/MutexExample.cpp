// MutexExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <thread>
#include <mutex>

std::mutex mtx;
std::mutex mtx1;
std::mutex mtx2;

int cnt = 0;

void thread1() {
    while (true)
    {
        // std::lock_guard<std::mutex> lock(mtx);   // proper way to do it
       // std::lock_guard<std::mutex> lock(mtx1);  // has no function
        cnt++;
        std::cout << "t1:  " << cnt << std::endl;
    }
}

void thread2() {
    while (true) 
    {
        // std::lock_guard<std::mutex> lock(mtx);   // proper way to do it
        //std::lock_guard<std::mutex> lock(mtx2);  // has no function
        cnt++;
        std::cout << "t2:  " << cnt << std::endl;
    }
}

int main()
{
    std::thread t1(thread1);
    std::thread t2(thread2);
    while (true)
    {

    }
}


