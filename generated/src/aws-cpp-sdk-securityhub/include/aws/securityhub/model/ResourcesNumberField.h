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
enum class ResourcesNumberField {
  NOT_SET,
  FindingsSummary_TotalFindings,
  FindingsSummary_Severities_Other,
  FindingsSummary_Severities_Fatal,
  FindingsSummary_Severities_Critical,
  FindingsSummary_Severities_High,
  FindingsSummary_Severities_Medium,
  FindingsSummary_Severities_Low,
  FindingsSummary_Severities_Informational,
  FindingsSummary_Severities_Unknown
};

namespace ResourcesNumberFieldMapper {
AWS_SECURITYHUB_API ResourcesNumberField GetResourcesNumberFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourcesNumberField(ResourcesNumberField value);
}  // namespace ResourcesNumberFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
