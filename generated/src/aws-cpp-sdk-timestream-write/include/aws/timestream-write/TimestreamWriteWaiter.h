/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/timestream-write/TimestreamWriteClient.h>

#include <algorithm>

namespace Aws {
namespace TimestreamWrite {

template <typename DerivedClient = TimestreamWriteClient>
class TimestreamWriteWaiter {
 public:
};
}  // namespace TimestreamWrite
}  // namespace Aws
