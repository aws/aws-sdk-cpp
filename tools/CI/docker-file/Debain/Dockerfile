# Using official gcc docker image
FROM gcc:7.4

# Install zip, cmake, maven, python-pip, default-jdk, maven via apt
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y zip cmake python-pip default-jdk maven

# Install awscli
RUN pip install awscli --upgrade

# Download and install Android NDK
RUN wget https://dl.google.com/android/repository/android-ndk-r19c-linux-x86_64.zip && \
    unzip android-ndk-r19c-linux-x86_64.zip && \
    mv android-ndk-r19c /opt && \
    rm android-ndk-r19c-linux-x86_64.zip
ENV ANDROID_NDK /opt/android-ndk-r19c
