/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingClient.h>

#include <algorithm>

namespace Aws {
namespace PartnerCentralMarketing {

template <typename DerivedClient = PartnerCentralMarketingClient>
class PartnerCentralMarketingWaiter {
 public:
};
}  // namespace PartnerCentralMarketing
}  // namespace Aws
