#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/bd19f640464f22b666660fe724531a6819f80c25  # v0.38.6

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/fc4b87655e5cd3921f18d1859193c74af4102071  # v0.10.1
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/1cb9412158890201a6ffceed779f90fe1f48180c  # v0.9.13
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/95515a8b1ff40d5bb14f965ca4cbbe99ad1843df  # v0.12.6
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/d8264e64f698341eb03039b96b4f44702a9b3f83  # v0.3.2
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/66cafb1d8bb1bfeb62a7601ce03d1a6fcd4798ed  # v0.6.1
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/da535b1bf9c9334730eb78a26a1bbb3c069b38c9  # v0.10.14
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/1ec8081f208ef8d51381889eda3bda9756fd5bb5  # v0.26.3
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/3c2ceee52b66db42228053a4fb55210c8f8433a0  # v0.15.2
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/a31a657840daffbfa7749b63cd0e2a178a6a5d9e  # v0.12.3
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/f678bda9e21f7217e4bbf35e0d1ea59540687933  # v0.2.4
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/1d5f2f1f3e5d013aae8810878ceb5b3f6f258c4e  # v0.2.10
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/d50ded594c835fd277997461815ad473949f2c7a  # v1.72.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/a71ea1f9764ee9ae91b47c34faa0447c4fe11d0a  # v1.7.2


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
