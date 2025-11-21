/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class FindingsTrendsStringField {
  NOT_SET,
  account_id,
  region,
  finding_types,
  finding_status,
  finding_cve_ids,
  finding_compliance_status,
  finding_control_id,
  finding_class_name,
  finding_provider,
  finding_activity_name
};

namespace FindingsTrendsStringFieldMapper {
AWS_SECURITYHUB_API FindingsTrendsStringField GetFindingsTrendsStringFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForFindingsTrendsStringField(FindingsTrendsStringField value);
}  // namespace FindingsTrendsStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
