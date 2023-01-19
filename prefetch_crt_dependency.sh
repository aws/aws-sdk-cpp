#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/8ee94e26804070e2279dc7451c5ac87d695dba13  # v0.19.2

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/57b7f0db21258750af138e80823123212f0925de  # v0.6.21
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/ac4216b78d5323b5b8ce95a3dd4a8fc0f95e2d33  # v0.5.20
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/3973e3c89bbb532f5c3d2327b602836a57bd4db6  # v0.8.6
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/b517b7decd0dac30be2162f5186c250221c53aff  # v0.2.16
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/e812dd4df0fcc350ad7b5b7babe82cfe5664f4a4  # v0.2.17
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/dd34461987947672444d0bc872c5a733dfdb9711  # v0.7.3
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/6c19e25f55fa060d4e42010756967b979361dc66  # v0.13.12
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/5cbde90916a1f9945e2a1ef36f3db58e1c976167  # v0.8.4
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/374191a730faf7e040a776c7244b5b79c5eeed76  # v0.2.1
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/208a701fa01e99c7c8cc3dcebc8317da71362972  # v0.1.7
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/ad53be196a25bbefa3700a01187fdce573a7d2d0  # v0.1.14
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/75a73bfabf1be384b49c7f92da6fdfd9d867069e  # v1.3.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/2663f20bdc801f0d94657db3e6cec4c4fed0db94  # v1.3.32


echo "Removing CRT"
rm -rf crt

echo "Downloading and expanding CRT CPP"
mkdir -p crt/tmp
curl ${CRT_URI} --output crt/tmp/crt.zip
unzip crt/tmp/crt -d crt
CRT_DIR_TMP=`ls -d crt/aws-crt-cpp*`
mv ${CRT_DIR_TMP} crt/aws-crt-cpp

echo "Downloading and expanding CRT dependencies"
curl ${AWS_C_AUTH_URI} --output crt/tmp/1.zip
curl ${AWS_C_CAL_URI} --output crt/tmp/2.zip
curl ${AWS_C_COMMON_URI} --output crt/tmp/3.zip
curl ${AWS_C_COMPRESSION_URI} --output crt/tmp/4.zip
curl ${AWS_C_EVENT_STREAM_URI} --output crt/tmp/5.zip
curl ${AWS_C_HTTP_URI} --output crt/tmp/6.zip
curl ${AWS_C_IO_URI} --output crt/tmp/7.zip
curl ${AWS_C_MQTT_URI} --output crt/tmp/8.zip
curl ${AWS_C_S3_URI} --output crt/tmp/9.zip
curl ${AWS_C_SDKUTILS_URI} --output crt/tmp/10.zip
curl ${AWS_CHECKSUMS_URI} --output crt/tmp/11.zip
curl ${AWS_LC_URI} --output crt/tmp/12.zip
curl ${S2N_URI} --output crt/tmp/13.zip


for a in `seq 1 13`; do
    unzip crt/tmp/${a} -d crt/tmp
done

rm -rf crt/aws-crt-cpp/crt
mkdir crt/aws-crt-cpp/crt

for a in `ls crt/tmp |grep -v '.zip$' |grep -v aws-crt-cpp`; do
    mv crt/tmp/$a "crt/aws-crt-cpp/crt/"`echo $a | sed 's/-[0-9a-f]\{40\}$//'`
done

echo "Adjust S2N location"
mv crt/aws-crt-cpp/crt/s2n-tls crt/aws-crt-cpp/crt/s2n

echo "To complete setup run cmake -Bbuild; cmake --build build; cmake --build --target install"
