/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <S3TransferTestFixture.h>

namespace S3TransferIntegrationTests {

std::shared_ptr<Aws::S3::S3Client> S3TransferTestFixture::s_s3Client = nullptr;
Aws::String S3TransferTestFixture::s_bucketName;

}  // namespace S3TransferIntegrationTests
