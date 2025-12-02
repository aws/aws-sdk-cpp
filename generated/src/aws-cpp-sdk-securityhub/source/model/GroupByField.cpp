/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/GroupByField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace GroupByFieldMapper {

static const int activity_name_HASH = HashingUtils::HashString("activity_name");
static const int cloud_account_uid_HASH = HashingUtils::HashString("cloud.account.uid");
static const int cloud_provider_HASH = HashingUtils::HashString("cloud.provider");
static const int cloud_region_HASH = HashingUtils::HashString("cloud.region");
static const int compliance_assessments_name_HASH = HashingUtils::HashString("compliance.assessments.name");
static const int compliance_status_HASH = HashingUtils::HashString("compliance.status");
static const int compliance_control_HASH = HashingUtils::HashString("compliance.control");
static const int finding_info_title_HASH = HashingUtils::HashString("finding_info.title");
static const int finding_info_related_events_traits_category_HASH = HashingUtils::HashString("finding_info.related_events.traits.category");
static const int finding_info_types_HASH = HashingUtils::HashString("finding_info.types");
static const int metadata_product_name_HASH = HashingUtils::HashString("metadata.product.name");
static const int metadata_product_uid_HASH = HashingUtils::HashString("metadata.product.uid");
static const int resources_type_HASH = HashingUtils::HashString("resources.type");
static const int resources_uid_HASH = HashingUtils::HashString("resources.uid");
static const int severity_HASH = HashingUtils::HashString("severity");
static const int status_HASH = HashingUtils::HashString("status");
static const int vulnerabilities_fix_coverage_HASH = HashingUtils::HashString("vulnerabilities.fix_coverage");
static const int class_name_HASH = HashingUtils::HashString("class_name");
static const int vulnerabilities_affected_packages_name_HASH = HashingUtils::HashString("vulnerabilities.affected_packages.name");
static const int finding_info_analytic_name_HASH = HashingUtils::HashString("finding_info.analytic.name");
static const int compliance_standards_HASH = HashingUtils::HashString("compliance.standards");
static const int cloud_account_name_HASH = HashingUtils::HashString("cloud.account.name");
static const int vendor_attributes_severity_HASH = HashingUtils::HashString("vendor_attributes.severity");

GroupByField GetGroupByFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == activity_name_HASH) {
    return GroupByField::activity_name;
  } else if (hashCode == cloud_account_uid_HASH) {
    return GroupByField::cloud_account_uid;
  } else if (hashCode == cloud_provider_HASH) {
    return GroupByField::cloud_provider;
  } else if (hashCode == cloud_region_HASH) {
    return GroupByField::cloud_region;
  } else if (hashCode == compliance_assessments_name_HASH) {
    return GroupByField::compliance_assessments_name;
  } else if (hashCode == compliance_status_HASH) {
    return GroupByField::compliance_status;
  } else if (hashCode == compliance_control_HASH) {
    return GroupByField::compliance_control;
  } else if (hashCode == finding_info_title_HASH) {
    return GroupByField::finding_info_title;
  } else if (hashCode == finding_info_related_events_traits_category_HASH) {
    return GroupByField::finding_info_related_events_traits_category;
  } else if (hashCode == finding_info_types_HASH) {
    return GroupByField::finding_info_types;
  } else if (hashCode == metadata_product_name_HASH) {
    return GroupByField::metadata_product_name;
  } else if (hashCode == metadata_product_uid_HASH) {
    return GroupByField::metadata_product_uid;
  } else if (hashCode == resources_type_HASH) {
    return GroupByField::resources_type;
  } else if (hashCode == resources_uid_HASH) {
    return GroupByField::resources_uid;
  } else if (hashCode == severity_HASH) {
    return GroupByField::severity;
  } else if (hashCode == status_HASH) {
    return GroupByField::status;
  } else if (hashCode == vulnerabilities_fix_coverage_HASH) {
    return GroupByField::vulnerabilities_fix_coverage;
  } else if (hashCode == class_name_HASH) {
    return GroupByField::class_name;
  } else if (hashCode == vulnerabilities_affected_packages_name_HASH) {
    return GroupByField::vulnerabilities_affected_packages_name;
  } else if (hashCode == finding_info_analytic_name_HASH) {
    return GroupByField::finding_info_analytic_name;
  } else if (hashCode == compliance_standards_HASH) {
    return GroupByField::compliance_standards;
  } else if (hashCode == cloud_account_name_HASH) {
    return GroupByField::cloud_account_name;
  } else if (hashCode == vendor_attributes_severity_HASH) {
    return GroupByField::vendor_attributes_severity;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GroupByField>(hashCode);
  }

  return GroupByField::NOT_SET;
}

Aws::String GetNameForGroupByField(GroupByField enumValue) {
  switch (enumValue) {
    case GroupByField::NOT_SET:
      return {};
    case GroupByField::activity_name:
      return "activity_name";
    case GroupByField::cloud_account_uid:
      return "cloud.account.uid";
    case GroupByField::cloud_provider:
      return "cloud.provider";
    case GroupByField::cloud_region:
      return "cloud.region";
    case GroupByField::compliance_assessments_name:
      return "compliance.assessments.name";
    case GroupByField::compliance_status:
      return "compliance.status";
    case GroupByField::compliance_control:
      return "compliance.control";
    case GroupByField::finding_info_title:
      return "finding_info.title";
    case GroupByField::finding_info_related_events_traits_category:
      return "finding_info.related_events.traits.category";
    case GroupByField::finding_info_types:
      return "finding_info.types";
    case GroupByField::metadata_product_name:
      return "metadata.product.name";
    case GroupByField::metadata_product_uid:
      return "metadata.product.uid";
    case GroupByField::resources_type:
      return "resources.type";
    case GroupByField::resources_uid:
      return "resources.uid";
    case GroupByField::severity:
      return "severity";
    case GroupByField::status:
      return "status";
    case GroupByField::vulnerabilities_fix_coverage:
      return "vulnerabilities.fix_coverage";
    case GroupByField::class_name:
      return "class_name";
    case GroupByField::vulnerabilities_affected_packages_name:
      return "vulnerabilities.affected_packages.name";
    case GroupByField::finding_info_analytic_name:
      return "finding_info.analytic.name";
    case GroupByField::compliance_standards:
      return "compliance.standards";
    case GroupByField::cloud_account_name:
      return "cloud.account.name";
    case GroupByField::vendor_attributes_severity:
      return "vendor_attributes.severity";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GroupByFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
