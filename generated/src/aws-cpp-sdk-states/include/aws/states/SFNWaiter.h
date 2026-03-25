/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/states/SFNClient.h>

#include <algorithm>

namespace Aws {
namespace SFN {

template <typename DerivedClient = SFNClient>
class SFNWaiter {
 public:
};
}  // namespace SFN
}  // namespace Aws
