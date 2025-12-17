#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/8923e174f20c39c647f25abb3e16d1418558ec55  # v0.36.1

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/37ebf2d27cf44386c7f194221c3e03992fcb4c8d  # v0.9.4
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/1cb9412158890201a6ffceed779f90fe1f48180c  # v0.9.13
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/95515a8b1ff40d5bb14f965ca4cbbe99ad1843df  # v0.12.6
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/f951ab2b819fc6993b6e5e6cfef64b1a1554bfc8  # v0.3.1
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/f43a3d24a7c1f8b50f709ccb4fdf4c7fd2827fff  # v0.5.9
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/07302aa4a2892adbbf95ee6d458db3bb240030d3  # v0.10.7
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/996d42e484a3749c4dd05e4e9fed1d38de95eb81  # v0.24.0
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/1d512d92709f60b74e2cafa018e69a2e647f28e9  # v0.13.3
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/3f81fc9e90b11e6b3e434b166e275f65d5c98d39  # v0.11.3
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/f678bda9e21f7217e4bbf35e0d1ea59540687933  # v0.2.4
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/270b15acc1b2125340ec1c6dda6cc3c28ef0fa44  # v0.2.8
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/b5e2f866efc0c7f90fcb6781281ea31063efbd96  # v1.65.1
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/f6ca8f0941851af4a05739c4a4b426970e953317  # v1.6.2


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
