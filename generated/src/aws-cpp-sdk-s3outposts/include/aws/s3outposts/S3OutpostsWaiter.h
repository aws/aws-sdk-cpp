/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/s3outposts/S3OutpostsClient.h>

#include <algorithm>

namespace Aws {
namespace S3Outposts {

template <typename DerivedClient = S3OutpostsClient>
class S3OutpostsWaiter {
 public:
};
}  // namespace S3Outposts
}  // namespace Aws
