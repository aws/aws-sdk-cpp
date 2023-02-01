#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/f2adef31d778cfe90b8a5bb377425f825ebf92f0  # v0.19.5

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/bad1066f0a93f3a7df86c94cc03076fa6b901bd2  # v0.6.22
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/ac4216b78d5323b5b8ce95a3dd4a8fc0f95e2d33  # v0.5.20
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/5e64b039356c72d17fcf1fb0bfc7637f8c2270f7  # v0.8.9
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/b517b7decd0dac30be2162f5186c250221c53aff  # v0.2.16
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/2f9b60c42f90840ec11822acda3d8cdfa97a773d  # v0.2.18
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/dd34461987947672444d0bc872c5a733dfdb9711  # v0.7.3
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/b52181af655c090713fe01f14d7ccb95aab8dec5  # v0.13.14
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/33c3455cec82b16feb940e12006cefd7b3ef4194  # v0.8.6
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/d7bfe602d6925948f1fff95784e3613cca6a3900  # v0.2.3
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/208a701fa01e99c7c8cc3dcebc8317da71362972  # v0.1.7
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/ad53be196a25bbefa3700a01187fdce573a7d2d0  # v0.1.14
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/75a73bfabf1be384b49c7f92da6fdfd9d867069e  # v1.3.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/52661e933c99825f208f376c98a6a292b49be680  # v1.3.33


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
