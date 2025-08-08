#include <boost/beast.hpp>
#include <boost/beast/http.hpp>
#include <boost/asio/ip/tcp.hpp>

#include <thread>
#include <vector>

int main(int argc, char** argv){

    std::vector<std::thread> v;
    //needed for all SSL
    boost::asio::io_context ioc;

    //holds certificates

    
}