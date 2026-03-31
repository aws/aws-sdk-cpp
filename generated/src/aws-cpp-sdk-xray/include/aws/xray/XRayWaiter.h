/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/xray/XRayClient.h>

#include <algorithm>

namespace Aws {
namespace XRay {

template <typename DerivedClient = XRayClient>
class XRayWaiter {
 public:
};
}  // namespace XRay
}  // namespace Aws
