/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sns/SNSClient.h>

#include <algorithm>

namespace Aws {
namespace SNS {

template <typename DerivedClient = SNSClient>
class SNSWaiter {
 public:
};
}  // namespace SNS
}  // namespace Aws
