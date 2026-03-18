/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mpa/MPAClient.h>

#include <algorithm>

namespace Aws {
namespace MPA {

template <typename DerivedClient = MPAClient>
class MPAWaiter {
 public:
};
}  // namespace MPA
}  // namespace Aws
