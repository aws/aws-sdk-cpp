/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/s3vectors/S3VectorsClient.h>

#include <algorithm>

namespace Aws {
namespace S3Vectors {

template <typename DerivedClient = S3VectorsClient>
class S3VectorsWaiter {
 public:
};
}  // namespace S3Vectors
}  // namespace Aws
