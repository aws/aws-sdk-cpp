/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace PartnerCentralMarketing {
class AWS_PARTNERCENTRALMARKETING_LOCAL PartnerCentralMarketingEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace PartnerCentralMarketing
}  // namespace Aws
