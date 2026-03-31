/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/uxc/UxcClient.h>

#include <algorithm>

namespace Aws {
namespace uxc {

template <typename DerivedClient = UxcClient>
class UxcWaiter {
 public:
};
}  // namespace uxc
}  // namespace Aws
