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
  enum class ResourceGroupByField
  {
    NOT_SET,
    account_id,
    region,
    resource_category,
    resource_type,
    resource_name,
    findings_summary_finding_type
  };

namespace ResourceGroupByFieldMapper
{
AWS_SECURITYHUB_API ResourceGroupByField GetResourceGroupByFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourceGroupByField(ResourceGroupByField value);
} // namespace ResourceGroupByFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
