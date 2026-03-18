/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/nova-act/NovaActClient.h>

#include <algorithm>

namespace Aws {
namespace NovaAct {

template <typename DerivedClient = NovaActClient>
class NovaActWaiter {
 public:
};
}  // namespace NovaAct
}  // namespace Aws
