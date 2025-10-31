#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/35dad3a8131dc9d761a2ccfc24808308d5ce4680  # v0.35.2

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/ab03bdd996437d9097953ebb9495de71b6adc537  # v0.9.1
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/1b56db8ada9840e0e1036997ff4f247e155e51a5  # v0.9.8
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/31578beb2309330fece3fb3a66035a568a2641e7  # v0.12.5
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/f951ab2b819fc6993b6e5e6cfef64b1a1554bfc8  # v0.3.1
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/31a44ff9108840a8f3fec54006218f4bc6c505e1  # v0.5.7
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/bbfc5a7bcf1a6c238205abcac62d5d14dd0da7ef  # v0.10.5
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/1af325b54bba2e95a640a5be5ffe0b27e4ead79c  # v0.23.2
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/1d512d92709f60b74e2cafa018e69a2e647f28e9  # v0.13.3
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/332dd22c47a7ed139eee71e7f219b764ef8cdf4c  # v0.9.2
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/f678bda9e21f7217e4bbf35e0d1ea59540687933  # v0.2.4
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/9978ba2c33a7a259c1a6bd0f62abe26827d03b85  # v0.2.6
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/5a9df2190d9ecab090a62030f94a6ada6789a436  # v1.62.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/30f40f2345a89570ed3c4cee2274942f1ebf85fa  # v1.5.27


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
