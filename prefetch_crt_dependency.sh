#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/fbe8fa52486c0a7a3aa8b1998a5b175d15ad2cac  # v0.34.2

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/ab03bdd996437d9097953ebb9495de71b6adc537  # v0.9.1
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/8703b3e5930c9fd508025b268ab837fc9df3c4fd  # v0.9.2
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/2b67a658e461520f1de20d64342b91ddcedc7ebb  # v0.12.4
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/f951ab2b819fc6993b6e5e6cfef64b1a1554bfc8  # v0.3.1
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/2a0f7c9fe656c4789fa762a4ff04d06401abd282  # v0.5.6
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/ce0d65623bff28f03204756d9d1b3366bd0b387d  # v0.10.4
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/300e8b46aab672172f8d9303e1b9eeeffcb77713  # v0.21.5
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/1d512d92709f60b74e2cafa018e69a2e647f28e9  # v0.13.3
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/3afa5d08be95e82199a153e3abbe59bbb42638d7  # v0.8.7
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/f678bda9e21f7217e4bbf35e0d1ea59540687933  # v0.2.4
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/9978ba2c33a7a259c1a6bd0f62abe26827d03b85  # v0.2.6
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/98500e8bc7dc3e3e5871519abf12cdc781ebe4e1  # v1.60.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/a7862238a9d6703e0a3e2d7ea4341de8d57429bd  # v1.5.25


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
