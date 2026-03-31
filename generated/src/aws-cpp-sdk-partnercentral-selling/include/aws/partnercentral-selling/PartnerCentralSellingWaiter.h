/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/partnercentral-selling/PartnerCentralSellingClient.h>

#include <algorithm>

namespace Aws {
namespace PartnerCentralSelling {

template <typename DerivedClient = PartnerCentralSellingClient>
class PartnerCentralSellingWaiter {
 public:
};
}  // namespace PartnerCentralSelling
}  // namespace Aws
