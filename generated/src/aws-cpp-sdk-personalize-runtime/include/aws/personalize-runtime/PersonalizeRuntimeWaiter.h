/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/personalize-runtime/PersonalizeRuntimeClient.h>

#include <algorithm>

namespace Aws {
namespace PersonalizeRuntime {

template <typename DerivedClient = PersonalizeRuntimeClient>
class PersonalizeRuntimeWaiter {
 public:
};
}  // namespace PersonalizeRuntime
}  // namespace Aws
