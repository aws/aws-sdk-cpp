#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/1bdd7dc9ca877697265a6b3a4685f6b190b3b811  # v0.24.7

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/71bad382fe0a61e4426987c1abe6aca2fe1c1953  # v0.7.6
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/b52d9e8ee7af8155e6928c977ec5fde25a507ba0  # v0.6.9
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/fefbf4bdca1b3bada588baefec059849c268e73e  # v0.9.9
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/99ec79ee2970f1a045d4ced1501b97ee521f2f85  # v0.2.17
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/08f24e384e5be20bcffa42b49213d24dad7881ae  # v0.3.2
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/a082f8a2067e4a31db73f1d4ffd702a8dc0f7089  # v0.7.14
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/c9cb77747d3fd2809cf3d9c43be7d5decc17e4b3  # v0.13.35
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/5d198cf2d09b19bb18bf03e4425831a246d0a391  # v0.9.9
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/83008e577804643bc632ae4e603f36ab96219b9b  # v0.3.24
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/a6fd80cf7c163062d31abb28f309e47330fbfc17  # v0.1.12
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/321b805559c8e911be5bddba13fcbd222a3e2d3a  # v0.1.17
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/a8d06de79e405692ac06fe17163626eaab515e4e  # v1.17.3
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/95753f0c528b59025343e8799cb25d3e9df89e21  # v1.3.56


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
