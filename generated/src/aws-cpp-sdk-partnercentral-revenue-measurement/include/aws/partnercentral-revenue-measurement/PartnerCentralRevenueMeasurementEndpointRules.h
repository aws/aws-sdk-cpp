/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
class PartnerCentralRevenueMeasurementEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
