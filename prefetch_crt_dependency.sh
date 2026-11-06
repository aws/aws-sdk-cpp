#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/4993689829a8397d9c205863c9983900a020ecac  # main (includes bignum, #917)

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/3d29adcecf5c032131acee9f4125a636d2aaea6a  # v1.0.2
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/2441187f3bdbe0f0fe7fa5dd1736be98227ad556  # v1.0.0
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/45e9307382f196175f0dbb832a178570924bda96  # v1.0.5
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/891312c058e69a4d55f569f79dde1ee221982532  # v1.0.0
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/d32600bfecc6616cab0c478f96ea5a779f03e05e  # v1.0.0
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/d19eabf4c5dc78ee1e07033a5015e9d50d04ec31  # v1.1.1
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/cbc36857376bffb8f4654e6c4e443b6939e1629c  # v1.1.1
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/96af751fa58d4d6704881463a4d6895b107268ed  # v1.1.2
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/bc923d67e7aa85fa715c46bd95c0c5711148873c  # v1.5.2
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/66a79c011dbe057fcc6e9620f93a52c2c29843e8  # v1.0.1
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/12cd22e81543b8547132762023076ab6afa25559  # v1.0.1
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/cd481c207e38f06aeb5766f4a1cdfce10a4c0af8  # v5.12.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/e7ce83a27fa9525515a621754a7183a51c80246b  # v1.7.13


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
