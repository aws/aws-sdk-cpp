#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/05edb40f592813fab2b6f7ba141554fdcf86a7c9  # v0.32.8

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/cd9d6afcd42035d49bb2d0d3bef24b9faed57773  # v0.9.0
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/938d0fea30d8476a7cf260278d636404682a28d4  # v0.9.1
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/aaa2f11ed609e3f888efd9bf745e810b45b13a38  # v0.12.3
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/f951ab2b819fc6993b6e5e6cfef64b1a1554bfc8  # v0.3.1
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/9312b052583183b98526aaeb91e5c72ec3db9627  # v0.5.4
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/3eedf1ef8c6874cd941dbde794a6ab3bd979e181  # v0.10.1
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/689dee3cb8dbd8a6906431d154a3695f7688c056  # v0.19.1
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/3ac506507679a86677f8875dcc07589b63907863  # v0.13.1
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/52c90d39dab19a36e06d746a8c795060632619e2  # v0.8.0
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/f678bda9e21f7217e4bbf35e0d1ea59540687933  # v0.2.4
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/9978ba2c33a7a259c1a6bd0f62abe26827d03b85  # v0.2.6
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/40ac425f8eab7233079d667dacaf63db802d1eb6  # v1.52.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/92f7827c8487eb2a99b443aec6ee7d1df031b1bf  # v1.5.19


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
