#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/1f3d0a342e1502d5e97f8811248878b844493349  # v0.28.5

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/48d647bf43f8872e4dc5ec6343b0c5974195fbdd  # v0.7.31
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/2cb1d2eac925e2dbc45025eb89af82bd790c23a0  # v0.7.4
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/f58e807d8fd643bd9a96eef182c1db37d01b88e7  # v0.9.30
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/f36d01672d61e49d96a777870d456f66fa391cd4  # v0.2.19
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/1b3825fc9cae2e9c7ed7479ee5d354d52ebdf7a0  # v0.4.3
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/6068653e1d582bd8e7d1c9f81f86beaf10444e3d  # v0.8.10
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/e36374047beadc72a0eb6df14ce3cbc822a789a3  # v0.14.20
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/77d6f00e89b10e3263d8a17576ec8e91c45b4606  # v0.10.6
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/16701501fa9d1684b0ff5406211d058ce2a5b404  # v0.6.9
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/4658412a61ad5749db92a8d1e0717cb5e76ada1c  # v0.1.19
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/ce04ab00b3ecc41912f478bfedca39f8e1919d6b  # v0.1.20
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/8ffe277c21915ca82dc78a3bdc6a92e10c284b92  # v1.37.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/ffe0bf42da8f139eff8fd2237f47fbde40b478fb  # v1.5.5


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
