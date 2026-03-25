/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/marketplace-reporting/MarketplaceReportingClient.h>

#include <algorithm>

namespace Aws {
namespace MarketplaceReporting {

template <typename DerivedClient = MarketplaceReportingClient>
class MarketplaceReportingWaiter {
 public:
};
}  // namespace MarketplaceReporting
}  // namespace Aws
