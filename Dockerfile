FROM gcc:12 AS builder

WORKDIR /app
COPY numbergame.cpp .

RUN g++ -o numbergame numbergame.cpp

FROM ubuntu:22.04

WORKDIR /app
COPY --from=builder /app/numbergame .

CMD ["./numbergame"]