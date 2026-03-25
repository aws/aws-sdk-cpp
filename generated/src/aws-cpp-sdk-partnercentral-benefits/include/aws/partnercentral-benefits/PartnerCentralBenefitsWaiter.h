/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsClient.h>

#include <algorithm>

namespace Aws {
namespace PartnerCentralBenefits {

template <typename DerivedClient = PartnerCentralBenefitsClient>
class PartnerCentralBenefitsWaiter {
 public:
};
}  // namespace PartnerCentralBenefits
}  // namespace Aws
