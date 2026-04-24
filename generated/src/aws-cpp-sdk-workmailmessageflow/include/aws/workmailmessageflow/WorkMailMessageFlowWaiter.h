/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowClient.h>

#include <algorithm>

namespace Aws {
namespace WorkMailMessageFlow {

template <typename DerivedClient = WorkMailMessageFlowClient>
class WorkMailMessageFlowWaiter {
 public:
};
}  // namespace WorkMailMessageFlow
}  // namespace Aws
