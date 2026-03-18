/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/s3control/S3ControlClient.h>

#include <algorithm>

namespace Aws {
namespace S3Control {

template <typename DerivedClient = S3ControlClient>
class S3ControlWaiter {
 public:
};
}  // namespace S3Control
}  // namespace Aws
