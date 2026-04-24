/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sqs/SQSClient.h>

#include <algorithm>

namespace Aws {
namespace SQS {

template <typename DerivedClient = SQSClient>
class SQSWaiter {
 public:
};
}  // namespace SQS
}  // namespace Aws
