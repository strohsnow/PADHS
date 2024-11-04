FROM alpine:latest

RUN apk update && apk add --no-cache git g++ make cmake

RUN git clone https://github.com/strohsnow/PADHS
WORKDIR /PADHS/lab1

RUN cmake -DCMAKE_BUILD_TYPE=Release .
RUN make

CMD ["./lab1"]