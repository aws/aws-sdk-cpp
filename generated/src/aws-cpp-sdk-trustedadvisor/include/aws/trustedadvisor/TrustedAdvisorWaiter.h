/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/trustedadvisor/TrustedAdvisorClient.h>

#include <algorithm>

namespace Aws {
namespace TrustedAdvisor {

template <typename DerivedClient = TrustedAdvisorClient>
class TrustedAdvisorWaiter {
 public:
};
}  // namespace TrustedAdvisor
}  // namespace Aws
