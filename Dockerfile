FROM gcc:11.3.0

COPY . /usr/src/http-server
WORKDIR /usr/src/http-server

RUN mkdir -p build/ && cd build/ && rm -rf * 
RUN cd build/ && gcc -I.. -o HttpLinux ../main.cpp ../httpServer.cpp -lstdc++

#change this to whatever port you choose to run your server on
EXPOSE 8080 