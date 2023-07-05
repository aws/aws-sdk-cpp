#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/cf0a346249c384329a902a29cb473b108fb204ba  # v0.20.3

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/c076002aa2bc051e81dec988aaa3e88895b242dd  # v0.7.0
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/de43d69dbda4e2a048620c28767174483397f72f  # v0.6.0
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/9f36d07189435db27f746c10e39ba58511fadd0d  # v0.8.23
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/99ec79ee2970f1a045d4ced1501b97ee521f2f85  # v0.2.17
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/ec1716c726babd1381560aa8d28941fffc987394  # v0.3.1
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/27efc273f228306031c7345de8acaeee956db765  # v0.7.10
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/1f9a085027c5e0f3e0c0e2a9fbe685f12af8105d  # v0.13.27
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/83e7abe4fbc34c0e4737c1472e585fdf47a5f4dd  # v0.8.14
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/61c5282da191ccdb7f6460800c7bfc4d013ca8b4  # v0.3.12
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/df511a1f2518279eb5721ab5fca6bc816efc6b32  # v0.1.11
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/a5b0e7f00be4240f77d3b6e090c8bed3c9c2e536  # v0.1.16
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/80c394324382c78d2cbd783babaad1f612c1642d  # v1.11.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/e954ee5dc878c5c343d35574e7d07246a1e59314  # v1.3.46


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
