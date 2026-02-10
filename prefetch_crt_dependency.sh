#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/aef8478d65fd97c9319397e8a5248e344deb17b4  # v0.37.2

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/a4409b95dad40a45b81e5fc9ff96f41386845e4f  # v0.9.5
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/1cb9412158890201a6ffceed779f90fe1f48180c  # v0.9.13
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/95515a8b1ff40d5bb14f965ca4cbbe99ad1843df  # v0.12.6
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/d8264e64f698341eb03039b96b4f44702a9b3f83  # v0.3.2
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/f43a3d24a7c1f8b50f709ccb4fdf4c7fd2827fff  # v0.5.9
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/acf31399077300c522315612dd2be09cfe48b5b8  # v0.10.9
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/d5ad01cef5d027f65c6f5b460972bae0a469779d  # v0.26.0
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/1d512d92709f60b74e2cafa018e69a2e647f28e9  # v0.13.3
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/e9d1bde139f88b08aaa3bf0507f443f31ccede93  # v0.11.5
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/f678bda9e21f7217e4bbf35e0d1ea59540687933  # v0.2.4
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/c412c636091501c2cd544d23664c8d14999e9dcc  # v0.2.9
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/728811eecec794802c78105be6dbfe9d79870ac7  # v1.66.2
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/3276a0876054e9efbeab4a42f34ef60b0bf58c91  # v1.6.4


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
