/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/observabilityadmin/ObservabilityAdminClient.h>

#include <algorithm>

namespace Aws {
namespace ObservabilityAdmin {

template <typename DerivedClient = ObservabilityAdminClient>
class ObservabilityAdminWaiter {
 public:
};
}  // namespace ObservabilityAdmin
}  // namespace Aws
