/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/s3files/S3FilesClient.h>

#include <algorithm>

namespace Aws {
namespace S3Files {

template <typename DerivedClient = S3FilesClient>
class S3FilesWaiter {
 public:
};
}  // namespace S3Files
}  // namespace Aws
