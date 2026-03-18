/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Client.h>

#include <algorithm>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {

template <typename DerivedClient = SageMakerRuntimeHTTP2Client>
class SageMakerRuntimeHTTP2Waiter {
 public:
};
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
