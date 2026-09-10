#!/bin/sh
# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

CRT_URI_PREFIX=https://codeload.github.com/awslabs
CRT_URI=${CRT_URI_PREFIX}/aws-crt-cpp/zip/8adb7b87f18654ba2147667d2b43a017c7a3c957  # v0.43.6

AWS_C_AUTH_URI=${CRT_URI_PREFIX}/aws-c-auth/zip/4b5d524bf1a511b05e0fffe5bdc51800770b9427  # v0.10.4
AWS_C_CAL_URI=${CRT_URI_PREFIX}/aws-c-cal/zip/8aa2a48a09f93c65d4cf06388e143a6584de6321  # v0.9.15
AWS_C_COMMON_URI=${CRT_URI_PREFIX}/aws-c-common/zip/f7d471b1feaea9a310851672580f9ac7e031cfc0  # v0.14.5
AWS_C_COMPRESSION_URI=${CRT_URI_PREFIX}/aws-c-compression/zip/d8264e64f698341eb03039b96b4f44702a9b3f83  # v0.3.2
AWS_C_EVENT_STREAM_URI=${CRT_URI_PREFIX}/aws-c-event-stream/zip/51bef3c44e1058b1689751539170b2e0f589ccdb  # v0.7.1
AWS_C_HTTP_URI=${CRT_URI_PREFIX}/aws-c-http/zip/8aefd899fc3210bfd0e3fd414011a3cb708bf6e4  # v0.11.0
AWS_C_IO_URI=${CRT_URI_PREFIX}/aws-c-io/zip/28e4eb351a536daf1627bf69279e50671f7729b5  # v0.27.6
AWS_C_MQTT_URI=${CRT_URI_PREFIX}/aws-c-mqtt/zip/e35b9ca3f9fcbf1a972c831c5e79046ce56959d1  # v0.16.1
AWS_C_S3_URI=${CRT_URI_PREFIX}/aws-c-s3/zip/226c3e6937e3d5f7db9e10651f7bd20575e98187  # v0.13.5
AWS_C_SDKUTILS_URI=${CRT_URI_PREFIX}/aws-c-sdkutils/zip/a1cc19f53b63658f1b1400b36f199eafeeb895a6  # v0.2.9
AWS_CHECKSUMS_URI=${CRT_URI_PREFIX}/aws-checksums/zip/1d5f2f1f3e5d013aae8810878ceb5b3f6f258c4e  # v0.2.10
AWS_LC_URI=${CRT_URI_PREFIX}/aws-lc/zip/991e67ff4cf04df4dd89e407f8b920c6936cb56a  # v5.5.0
S2N_URI=${CRT_URI_PREFIX}/s2n/zip/853d1943bbbd7f782a159e77830cdaaf520d68ed  # v1.7.7


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
