#include <boost/thread.hpp>
#include <iostream>

void wait(int secs){
    boost::this_thread::sleep(boost::posix_time::seconds(secs));
}

void thread(){
    for (int i = 0; i < 5; ++i)
    { wait(1);
        std::cout<<i<<std::endl;
    }
}

int main(){
    boost::thread t(thread);
          t.join();
}
