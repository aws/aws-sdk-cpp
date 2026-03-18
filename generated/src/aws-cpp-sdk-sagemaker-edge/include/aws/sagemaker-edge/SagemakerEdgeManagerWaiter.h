/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerClient.h>

#include <algorithm>

namespace Aws {
namespace SagemakerEdgeManager {

template <typename DerivedClient = SagemakerEdgeManagerClient>
class SagemakerEdgeManagerWaiter {
 public:
};
}  // namespace SagemakerEdgeManager
}  // namespace Aws
