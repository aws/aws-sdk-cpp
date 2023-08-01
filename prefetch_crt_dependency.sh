#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/abaa85f0b7f6299e358616971009133df9b4bc1b  # v0.21.0

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/df82232dbc9839a8b3f3b3dbb88252d23aadb614  # v0.7.1
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/29578cdcb3c046efc6680f6baea572dec9bdbc2e  # v0.6.1
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/5c736d5c39a7e7ce8b5feb88d051084b41a8c7ea  # v0.9.0
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/99ec79ee2970f1a045d4ced1501b97ee521f2f85  # v0.2.17
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/ec1716c726babd1381560aa8d28941fffc987394  # v0.3.1
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/f800427e2e2878cf8b36f602583758769a7b3b4a  # v0.7.11
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/0642c68425f126e833fcf91bdc53dfc32366d0ba  # v0.13.29
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/d5c268f70aeccf38e75d3e74ce4eb9629df02e2a  # v0.9.0
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/231188147a8c08c9ed709100a2380be42bad6350  # v0.3.14
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/df511a1f2518279eb5721ab5fca6bc816efc6b32  # v0.1.11
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/321b805559c8e911be5bddba13fcbd222a3e2d3a  # v0.1.17
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/1dd5cf92e96edd4092bc307b14969dae5eaaa507  # v1.12.1
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/de987864288ce361707774e5af17d0458966c898  # v1.3.47


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
