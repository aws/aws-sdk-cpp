# ubuntu:24.04 multi-arch index; bump deliberately.
FROM ubuntu:24.04@sha256:fe81560990fae86dc4743202b2cb4d3df98d0bcf949173cecef15ce1127ef852

RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
        ca-certificates clang-18 cmake git libclang-rt-18-dev libcurl4-openssl-dev libssl-dev llvm-18 locales ninja-build python3 zlib1g-dev \
    && rm -rf /var/lib/apt/lists/* \
    && sed -i 's/^# *de_DE.UTF-8/de_DE.UTF-8/' /etc/locale.gen && locale-gen

ENV CC=clang-18 CXX=clang++-18 ASAN_SYMBOLIZER_PATH=/usr/lib/llvm-18/bin/llvm-symbolizer
WORKDIR /src
