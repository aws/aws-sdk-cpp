/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mwaa/MWAAClient.h>

#include <algorithm>

namespace Aws {
namespace MWAA {

template <typename DerivedClient = MWAAClient>
class MWAAWaiter {
 public:
};
}  // namespace MWAA
}  // namespace Aws
