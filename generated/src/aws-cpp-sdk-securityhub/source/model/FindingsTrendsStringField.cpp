/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/FindingsTrendsStringField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace FindingsTrendsStringFieldMapper {

static const int account_id_HASH = HashingUtils::HashString("account_id");
static const int region_HASH = HashingUtils::HashString("region");
static const int finding_types_HASH = HashingUtils::HashString("finding_types");
static const int finding_status_HASH = HashingUtils::HashString("finding_status");
static const int finding_cve_ids_HASH = HashingUtils::HashString("finding_cve_ids");
static const int finding_compliance_status_HASH = HashingUtils::HashString("finding_compliance_status");
static const int finding_control_id_HASH = HashingUtils::HashString("finding_control_id");
static const int finding_class_name_HASH = HashingUtils::HashString("finding_class_name");
static const int finding_provider_HASH = HashingUtils::HashString("finding_provider");
static const int finding_activity_name_HASH = HashingUtils::HashString("finding_activity_name");

FindingsTrendsStringField GetFindingsTrendsStringFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == account_id_HASH) {
    return FindingsTrendsStringField::account_id;
  } else if (hashCode == region_HASH) {
    return FindingsTrendsStringField::region;
  } else if (hashCode == finding_types_HASH) {
    return FindingsTrendsStringField::finding_types;
  } else if (hashCode == finding_status_HASH) {
    return FindingsTrendsStringField::finding_status;
  } else if (hashCode == finding_cve_ids_HASH) {
    return FindingsTrendsStringField::finding_cve_ids;
  } else if (hashCode == finding_compliance_status_HASH) {
    return FindingsTrendsStringField::finding_compliance_status;
  } else if (hashCode == finding_control_id_HASH) {
    return FindingsTrendsStringField::finding_control_id;
  } else if (hashCode == finding_class_name_HASH) {
    return FindingsTrendsStringField::finding_class_name;
  } else if (hashCode == finding_provider_HASH) {
    return FindingsTrendsStringField::finding_provider;
  } else if (hashCode == finding_activity_name_HASH) {
    return FindingsTrendsStringField::finding_activity_name;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingsTrendsStringField>(hashCode);
  }

  return FindingsTrendsStringField::NOT_SET;
}

Aws::String GetNameForFindingsTrendsStringField(FindingsTrendsStringField enumValue) {
  switch (enumValue) {
    case FindingsTrendsStringField::NOT_SET:
      return {};
    case FindingsTrendsStringField::account_id:
      return "account_id";
    case FindingsTrendsStringField::region:
      return "region";
    case FindingsTrendsStringField::finding_types:
      return "finding_types";
    case FindingsTrendsStringField::finding_status:
      return "finding_status";
    case FindingsTrendsStringField::finding_cve_ids:
      return "finding_cve_ids";
    case FindingsTrendsStringField::finding_compliance_status:
      return "finding_compliance_status";
    case FindingsTrendsStringField::finding_control_id:
      return "finding_control_id";
    case FindingsTrendsStringField::finding_class_name:
      return "finding_class_name";
    case FindingsTrendsStringField::finding_provider:
      return "finding_provider";
    case FindingsTrendsStringField::finding_activity_name:
      return "finding_activity_name";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingsTrendsStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
