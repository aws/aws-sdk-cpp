#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/2deaa9120dc23c03ab6feb903dd1d584d6cf7025  # v0.35.3

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/672feed19bb91bc389876f49aaa7c538dc879be5  # v0.9.2
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/de3b28840a59339f24012f25348f2c70a7ea45d6  # v0.9.11
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/95515a8b1ff40d5bb14f965ca4cbbe99ad1843df  # v0.12.6
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/f951ab2b819fc6993b6e5e6cfef64b1a1554bfc8  # v0.3.1
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/31a44ff9108840a8f3fec54006218f4bc6c505e1  # v0.5.7
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/07302aa4a2892adbbf95ee6d458db3bb240030d3  # v0.10.7
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/9cf142c08c28d5b1195aae09d2c05a6d17502e09  # v0.23.3
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/1d512d92709f60b74e2cafa018e69a2e647f28e9  # v0.13.3
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/332dd22c47a7ed139eee71e7f219b764ef8cdf4c  # v0.9.2
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/f678bda9e21f7217e4bbf35e0d1ea59540687933  # v0.2.4
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/9978ba2c33a7a259c1a6bd0f62abe26827d03b85  # v0.2.6
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/7187ab572ddcdae4fa408e932d3e878c9941137b  # v1.64.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/6aefe741f17489211f6c28e837c1a65ee66a1ef2  # v1.6.0


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
