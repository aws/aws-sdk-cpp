#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/58bca57cbc8b242468414972a6a35f92676b164d  # v0.44.2

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/055e822f021d1cab11d608b94ac34de250986134  # v1.0.0
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/2441187f3bdbe0f0fe7fa5dd1736be98227ad556  # v1.0.0
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/2a29f7ea85397ff15e41ae086fb3662484fd305d  # v1.0.3
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/891312c058e69a4d55f569f79dde1ee221982532  # v1.0.0
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/d32600bfecc6616cab0c478f96ea5a779f03e05e  # v1.0.0
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/afe6411dd17b2368d5262724c25a3b85670b4e06  # v1.1.0
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/1831a1943e4c4a034d42f954e8f154cf6b9b492f  # v1.1.0
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/96af751fa58d4d6704881463a4d6895b107268ed  # v1.1.2
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/eeb85f3e4ed89497a93952964bd8228d1f435e6e  # v1.3.1
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/de0fbe807a409158c3fa285bafb88120c8989609  # v1.0.0
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/12cd22e81543b8547132762023076ab6afa25559  # v1.0.1
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/fa9bc8d6f7cfb2cf849b247fb06bbbfc41ecc9d6  # v5.11.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/b170000016fb44fa4dfdd86ed0b75bd28241e707  # v1.7.11


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
