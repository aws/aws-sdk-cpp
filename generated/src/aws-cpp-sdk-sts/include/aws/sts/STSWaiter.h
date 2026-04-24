/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sts/STSClient.h>

#include <algorithm>

namespace Aws {
namespace STS {

template <typename DerivedClient = STSClient>
class STSWaiter {
 public:
};
}  // namespace STS
}  // namespace Aws
