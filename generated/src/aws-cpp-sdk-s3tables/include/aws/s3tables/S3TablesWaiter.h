/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/s3tables/S3TablesClient.h>

#include <algorithm>

namespace Aws {
namespace S3Tables {

template <typename DerivedClient = S3TablesClient>
class S3TablesWaiter {
 public:
};
}  // namespace S3Tables
}  // namespace Aws
