#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/e4514b7fb8b1fe67429aa7b0e00f628999722174  # v0.26.2

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/6ba7a0f8688c713dfe137716dbd5be324c2315b0  # v0.7.10
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/56f0a79ceb10f2efcf92f525ace717f84d8c8a11  # v0.6.10
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/8eaa0986ad3cfd46c87432a2e4c8ab81a786085f  # v0.9.12
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/99ec79ee2970f1a045d4ced1501b97ee521f2f85  # v0.2.17
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/63d1e1021b04ce3c3b1fc1895078ac85e0430b24  # v0.4.0
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/6a1c157c20640a607102738909e89561a41e91e9  # v0.8.0
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/6225ebb9da28f1023ad5e21694de9d165cd65f3b  # v0.14.1
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/17ee24a2177fc64cf9773d430a24e6fa06a89dd0  # v0.10.1
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/1dd55be83b19a55cd9c155e2da977cdc76112a91  # v0.4.9
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/fd8c0ba2e233997eaaefe82fb818b8b444b956d3  # v0.1.13
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/321b805559c8e911be5bddba13fcbd222a3e2d3a  # v0.1.17
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/dc4e28145ceb6d46b5475e833f2da8def6d583fe  # v1.19.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/0998358a6ef7c4f22295deba088796fe354c5f4c  # v1.4.4


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
