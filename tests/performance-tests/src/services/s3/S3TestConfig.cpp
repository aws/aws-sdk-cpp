/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSString.h>
#include <performance-tests/services/s3/S3TestConfig.h>

#include <array>
#include <cstddef>

namespace PerformanceTest {
namespace Services {
namespace S3 {
namespace TestConfig {

const std::array<const char*, 2> TestOperations = {"PutObject", "GetObject"};

const std::array<TestCase, 6> TestMatrix = {{{.payloadSize = PayloadSize::K8, .bucketType = BucketType::Standard},
                                             {.payloadSize = PayloadSize::K64, .bucketType = BucketType::Standard},
                                             {.payloadSize = PayloadSize::M1, .bucketType = BucketType::Standard},
                                             {.payloadSize = PayloadSize::K8, .bucketType = BucketType::Express},
                                             {.payloadSize = PayloadSize::K64, .bucketType = BucketType::Express},
                                             {.payloadSize = PayloadSize::M1, .bucketType = BucketType::Express}}};

const char* OutputFilename = "s3-performance-test-results.json";

size_t GetPayloadSizeInBytes(PayloadSize size) {
  switch (size) {
    case PayloadSize::K8:
      return 8 * 1024;
    case PayloadSize::K64:
      return 64 * 1024;
    case PayloadSize::M1:
      return 1024 * 1024;
  }
}

Aws::String GetPayloadSizeLabel(PayloadSize size) {
  switch (size) {
    case PayloadSize::K8:
      return "8KB";
    case PayloadSize::K64:
      return "64KB";
    case PayloadSize::M1:
      return "1MB";
  }
}

Aws::String GetBucketTypeLabel(BucketType type) {
  switch (type) {
    case BucketType::Standard:
      return "s3-standard";
    case BucketType::Express:
      return "s3-express";
  }
}

}  // namespace TestConfig
}  // namespace S3
}  // namespace Services
}  // namespace PerformanceTest