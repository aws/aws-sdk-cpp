export ARCH=arm
export CROSS_COMPILE=~/core/build/out-glibc/sysroots/x86_64-linux/usr/bin/arm-angstrom-linux-gnueabi/arm-angstrom-linux-gnueabi-
export CPLUS_INCLUDE_PATH=/home/maurice/aws-sdk-cpp/testing-resources/include:/home/maurice/aws-sdk-cpp/aws-cpp-sdk-core/include:/home/maurice/aws-sdk-cpp/aws-cpp-sdk-dynamodb/include:~/aws-sdk-cpp/aws-cpp-sdk-s3/include:~/aws-sdk-cpp/aws-cpp-sdk-transfer/include
export C_INCLUDE_PATH=/home/maurice/aws-sdk-cpp/testing-resources/include:/home/maurice/aws-sdk-cpp/aws-cpp-sdk-core/include:/home/maurice/aws-sdk-cpp/aws-cpp-sdk-dynamodb/include:~/aws-sdk-cpp/aws-cpp-sdk-transfer/include
export LIBRARY_PATH=/home/maurice/aws-sdk-cpp/aws-cpp-sdk-core:/home/maurice/aws-sdk-cpp/aws-cpp-sdk-dynamodb:~/aws-sdk-cpp/aws-cpp-sdk-s3:~/aws-sdk-cpp/aws-cpp-sdk-transfer
${CROSS_COMPILE}g++ -DAWS_CUSTOM_MEMORY_MANAGEMENT -std=c++11 -mfloat-abi=hard -L/home/maurice/aws-sdk-cpp/aws-cpp-sdk-core -L/home/maurice/aws-sdk-cpp/aws-cpp-sdk-dynamodb -L/home/maurice/aws-sdk-cpp/aws-cpp-sdk-s3 -L/home/maurice/aws-sdk-cpp/aws-cpp-sdk-transfer -o $2 $1 -l$3 -l$4 -l$5 -l$6



