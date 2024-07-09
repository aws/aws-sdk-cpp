#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/d966cde6e615ff3d8f9861bd6c724cca60da927c  # v0.27.2


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
