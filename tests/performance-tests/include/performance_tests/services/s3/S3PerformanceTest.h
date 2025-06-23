/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3Client.h>

#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace S3 {
struct TestCase {
  Aws::String sizeLabel;
  size_t sizeBytes;
  Aws::String bucketTypeLabel;
};

bool RunTest(Aws::S3::S3Client& s3, const TestCase& config, const Aws::String& availabilityZoneId, int iterations = 3);
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest