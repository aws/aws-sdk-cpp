/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class ResourcesNumberField
  {
    NOT_SET,
    findings_summary_total_findings,
    findings_summary_severities_other,
    findings_summary_severities_fatal,
    findings_summary_severities_critical,
    findings_summary_severities_high,
    findings_summary_severities_medium,
    findings_summary_severities_low,
    findings_summary_severities_informational,
    findings_summary_severities_unknown
  };

namespace ResourcesNumberFieldMapper
{
AWS_SECURITYHUB_API ResourcesNumberField GetResourcesNumberFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourcesNumberField(ResourcesNumberField value);
} // namespace ResourcesNumberFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
