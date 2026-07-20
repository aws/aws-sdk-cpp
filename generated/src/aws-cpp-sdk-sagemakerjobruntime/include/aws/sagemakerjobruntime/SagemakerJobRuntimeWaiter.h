/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeClient.h>

#include <algorithm>

namespace Aws {
namespace SagemakerJobRuntime {

template <typename DerivedClient = SagemakerJobRuntimeClient>
class SagemakerJobRuntimeWaiter {
 public:
};
}  // namespace SagemakerJobRuntime
}  // namespace Aws
