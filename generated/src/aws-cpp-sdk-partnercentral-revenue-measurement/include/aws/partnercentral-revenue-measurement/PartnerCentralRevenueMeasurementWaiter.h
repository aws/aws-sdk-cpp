/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementClient.h>

#include <algorithm>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {

template <typename DerivedClient = PartnerCentralRevenueMeasurementClient>
class PartnerCentralRevenueMeasurementWaiter {
 public:
};
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
