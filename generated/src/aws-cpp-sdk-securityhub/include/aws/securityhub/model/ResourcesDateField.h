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
  enum class ResourcesDateField
  {
    NOT_SET,
    resource_detail_capture_time_dt,
    resource_creation_time_dt
  };

namespace ResourcesDateFieldMapper
{
AWS_SECURITYHUB_API ResourcesDateField GetResourcesDateFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourcesDateField(ResourcesDateField value);
} // namespace ResourcesDateFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
