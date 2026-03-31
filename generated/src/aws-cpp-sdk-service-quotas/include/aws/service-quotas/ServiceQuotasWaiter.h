/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/service-quotas/ServiceQuotasClient.h>

#include <algorithm>

namespace Aws {
namespace ServiceQuotas {

template <typename DerivedClient = ServiceQuotasClient>
class ServiceQuotasWaiter {
 public:
};
}  // namespace ServiceQuotas
}  // namespace Aws
