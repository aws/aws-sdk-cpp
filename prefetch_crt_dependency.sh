#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/4d78af94182f39123f8b384158f143485906ea82  # v0.27.0

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/53a31bacf2918e848e00b052d2e25cba0be069d9  # v0.7.22
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/11fc68445b2b4993656ed720fc2788f3c4c7c20f  # v0.7.0
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/4f874cea50a70bc6ebcd85c6ce1c6c0016b5aff4  # v0.9.21
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/ea1d421a421ad83a540309a94c38d50b6a5d836b  # v0.2.18
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/1a70c50f78a6e706f1f91a4ed138478271b6d9d3  # v0.4.2
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/d83f8d70143ddce5ab4e479175fbd44ba994211b  # v0.8.2
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/878b4fa027bda4041493f06e0562d5e98bb3deb8  # v0.14.9
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/ed7bbd68c03d7022c915a2924740ab7992ad2311  # v0.10.4
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/6588f9a714ee7a8be1bddd63ea5ea1ea224d00b4  # v0.5.10
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/8c7af71f91ed5b9d2a043d51f120495f43723f80  # v0.1.16
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/aac442a2dbbb5e72d0a3eca8313cf65e7e1cac2f  # v0.1.18
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/4e54dd8363396f257d7a2317c48101e18170e6fb  # v1.29.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/114ccab0ff2cde491203ac841837d0d39b767412  # v1.4.16


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
