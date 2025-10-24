﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehub/model/ComplianceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace ResilienceHub {
namespace Model {
namespace ComplianceStatusMapper {

static const int PolicyBreached_HASH = HashingUtils::HashString("PolicyBreached");
static const int PolicyMet_HASH = HashingUtils::HashString("PolicyMet");
static const int NotApplicable_HASH = HashingUtils::HashString("NotApplicable");
static const int MissingPolicy_HASH = HashingUtils::HashString("MissingPolicy");

ComplianceStatus GetComplianceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PolicyBreached_HASH) {
    return ComplianceStatus::PolicyBreached;
  } else if (hashCode == PolicyMet_HASH) {
    return ComplianceStatus::PolicyMet;
  } else if (hashCode == NotApplicable_HASH) {
    return ComplianceStatus::NotApplicable;
  } else if (hashCode == MissingPolicy_HASH) {
    return ComplianceStatus::MissingPolicy;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ComplianceStatus>(hashCode);
  }

  return ComplianceStatus::NOT_SET;
}

Aws::String GetNameForComplianceStatus(ComplianceStatus enumValue) {
  switch (enumValue) {
    case ComplianceStatus::NOT_SET:
      return {};
    case ComplianceStatus::PolicyBreached:
      return "PolicyBreached";
    case ComplianceStatus::PolicyMet:
      return "PolicyMet";
    case ComplianceStatus::NotApplicable:
      return "NotApplicable";
    case ComplianceStatus::MissingPolicy:
      return "MissingPolicy";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComplianceStatusMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
