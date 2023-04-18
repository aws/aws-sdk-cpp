#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/cb474daeeaf5c025bd3408103adf61b97b74e600  # v0.19.9

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/54f8d804120daab9e0d75a56a113a222b334d0f9  # v0.6.26
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/de2f0f2e86a7e7b85b28cc027b8cf620945d8825  # v0.5.21
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/21d478b14465bfa52608d4040d9084e955180fa7  # v0.8.15
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/b517b7decd0dac30be2162f5186c250221c53aff  # v0.2.16
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/0f6eee87aee2860598084e814e0eedc0b3b9122d  # v0.2.20
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/c7350090b8712d9a6fd66a7d5d45056c87879f26  # v0.7.7
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/2c4475f60d9103d90a30fc4bc38940c0477d63d9  # v0.13.21
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/815fc9731b77c7a21308a1be9ac11378c053b515  # v0.8.10
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/ae6c6cc7dd301044dd6d81d24b005d2463a23de9  # v0.2.8
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/9de59230f025df2745b098feda3611f9667e5a35  # v0.1.8
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/ad53be196a25bbefa3700a01187fdce573a7d2d0  # v0.1.14
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/161e747063dcb16e71d299190f072a26c0a56294  # v1.5.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/274f3213eca8b535bf43aa203711902d98e534dd  # v1.3.38


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
