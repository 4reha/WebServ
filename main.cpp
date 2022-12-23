#include <httpServer.hpp>

int main()
{
    using namespace http;

    httpServer server = httpServer("0.0.0.0", 8080);
    server.startListen();

    return 0;
}