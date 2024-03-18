#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/4d9e36d561079506272cff59b52d998b6ae81e85  # v0.26.4

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/0d2aa00ae70c699fcb14d0338c1b07a58b9eb24b  # v0.7.16
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/56f0a79ceb10f2efcf92f525ace717f84d8c8a11  # v0.6.10
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/15a25349d59852e2655c0920835644f2eb948d77  # v0.9.13
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/ea1d421a421ad83a540309a94c38d50b6a5d836b  # v0.2.18
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/1a70c50f78a6e706f1f91a4ed138478271b6d9d3  # v0.4.2
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/98ec73ad0c18b78ba08d40b4e60d97abf794f24d  # v0.8.1
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/5b89f50a813271d68b8efe58f0515b480b1356c7  # v0.14.5
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/74da9cadfa9dfd2179479fdc445617f5da3261ba  # v0.10.3
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/59569e317a4ef84506c39b798875f4f169a796fe  # v0.5.2
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/638fdd6548df85c599f82db7ea70fd9e44917ef5  # v0.1.15
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/aac442a2dbbb5e72d0a3eca8313cf65e7e1cac2f  # v0.1.18
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/19d9ace40f6770e062b1e9ec1d46935b300b948e  # v1.21.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/80a691335f6ec4846634952cb1a9bf1327e4b953  # v1.4.5


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
