/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/personalize/PersonalizeClient.h>

#include <algorithm>

namespace Aws {
namespace Personalize {

template <typename DerivedClient = PersonalizeClient>
class PersonalizeWaiter {
 public:
};
}  // namespace Personalize
}  // namespace Aws
