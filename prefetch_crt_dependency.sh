#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/414d8c5a7e953bf05bd756eb01208c4eaf26d95d  # v0.26.8

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/0d2aa00ae70c699fcb14d0338c1b07a58b9eb24b  # v0.7.16
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/314fc555846ac7bf2cc68a117c99a6af26f7043e  # v0.6.11
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/ae7b067d9274d2d3faa1d3ae42d489a6986661f7  # v0.9.15
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/ea1d421a421ad83a540309a94c38d50b6a5d836b  # v0.2.18
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/1a70c50f78a6e706f1f91a4ed138478271b6d9d3  # v0.4.2
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/98ec73ad0c18b78ba08d40b4e60d97abf794f24d  # v0.8.1
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/bf2d72230727f02eddb5b16c4e6c5ac5a3f203a7  # v0.14.7
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/74da9cadfa9dfd2179479fdc445617f5da3261ba  # v0.10.3
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/0ce756ec29b251cd81f6937ccf856a3878c5edd3  # v0.5.5
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/638fdd6548df85c599f82db7ea70fd9e44917ef5  # v0.1.15
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/aac442a2dbbb5e72d0a3eca8313cf65e7e1cac2f  # v0.1.18
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/4e690737e0a386f8c5eb9a0a88becc7985b5d24e  # v1.23.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/171c96a232eb2bf45415340378b55b3bb6dd29cd  # v1.4.11


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
