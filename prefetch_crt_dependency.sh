#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/25a2e61972f5a0d517c6dc62533fdc7d7bd122a1  # v0.37.4

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/fc4b87655e5cd3921f18d1859193c74af4102071  # v0.10.1
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/1cb9412158890201a6ffceed779f90fe1f48180c  # v0.9.13
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/95515a8b1ff40d5bb14f965ca4cbbe99ad1843df  # v0.12.6
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/d8264e64f698341eb03039b96b4f44702a9b3f83  # v0.3.2
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/c741f95e9050a1a4bed4b3aa7543bd3e024f6e56  # v0.6.0
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/0d8e1a933f46b8af984dfc8168ebcdf32748c184  # v0.10.11
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/bfb0819d3906502483611ce832a5ec6b897c8421  # v0.26.1
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/41b6a7d6d566a56eff69743df66c077d56a80c9d  # v0.14.0
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/e9d1bde139f88b08aaa3bf0507f443f31ccede93  # v0.11.5
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/f678bda9e21f7217e4bbf35e0d1ea59540687933  # v0.2.4
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/1d5f2f1f3e5d013aae8810878ceb5b3f6f258c4e  # v0.2.10
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/37d86461a95782fd5d8b77873f9e1cb134ea2f95  # v1.69.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/f5e5e83031be60691f22442373fb8371274fcd56  # v1.7.0


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
