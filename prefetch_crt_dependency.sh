#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/83aacf7ae3a79c1cd1d2e1fe901a8ac9c427a199  # v0.28.3

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/877c029fc4e93d205f9c6855188c3c51f6b497b4  # v0.7.26
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/2cb1d2eac925e2dbc45025eb89af82bd790c23a0  # v0.7.4
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/672cc0032eb28d69fbdd22c9463253c89d7a6f30  # v0.9.27
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/f36d01672d61e49d96a777870d456f66fa391cd4  # v0.2.19
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/1b3825fc9cae2e9c7ed7479ee5d354d52ebdf7a0  # v0.4.3
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/4e74ab1e3702763e0b87bd1752f5a37c2f0400ac  # v0.8.8
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/c345d77274db83c0c2e30331814093e7c84c45e2  # v0.14.18
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/ed7bbd68c03d7022c915a2924740ab7992ad2311  # v0.10.4
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/0ab4d58ef0bd97970d43828cb6b57a3de5747343  # v0.6.4
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/4658412a61ad5749db92a8d1e0717cb5e76ada1c  # v0.1.19
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/ce04ab00b3ecc41912f478bfedca39f8e1919d6b  # v0.1.20
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/2f1879759b2e0fc70592665bdf10087b64f44b7d  # v1.34.2
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/87f4a0585dc3056433f193b9305f587cff239be3  # v1.5.1


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
