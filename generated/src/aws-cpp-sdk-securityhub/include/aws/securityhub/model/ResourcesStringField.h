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
  enum class ResourcesStringField
  {
    NOT_SET,
    resource_arn,
    resource_id,
    account_id,
    region,
    resource_category,
    resource_type,
    resource_name,
    findings_summary_finding_type,
    findings_summary_product_name
  };

namespace ResourcesStringFieldMapper
{
AWS_SECURITYHUB_API ResourcesStringField GetResourcesStringFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourcesStringField(ResourcesStringField value);
} // namespace ResourcesStringFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
