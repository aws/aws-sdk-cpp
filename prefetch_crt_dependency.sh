#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/b5577fa39c3a11f09c06db10ac6eaaca3910cbe2  # v0.29.7

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/3982bd75fea74efd8f9b462b27fedd4599db4f53  # v0.8.0
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/fbbe2612a3385d1ded02a52d20ad7fd2da4501f4  # v0.8.1
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/fadfef492042ae53387d4369a6de652c930a5be4  # v0.10.5
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/c6c1191e525e5aa6ead9e1afc392e35d3b50331e  # v0.3.0
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/d2dcc9344dae24de320866045d85166d8a91a0d1  # v0.5.0
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/fc3eded2465c37d07fd9cc15e9b5b011224c9c9a  # v0.9.2
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/fcb38c804364dd627c335da752a99a125a88f6e9  # v0.15.3
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/627c3334e52021aa8d5772b6ca076884610f3219  # v0.11.0
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/337155f6c07d39e61234e705ed6e58c31d4841eb  # v0.7.5
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/ce09f79768653dbdc810fc14cad8685dd90acba1  # v0.2.1
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/3e4101b9f85a2c090774d27ae2131fca1082f522  # v0.2.2
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/59828538a790094113eacd5dd23d01be2885b36a  # v1.40.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/493b77167dc367c394de23cfe78a029298e2a254  # v1.5.9


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
