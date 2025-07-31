/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    EMAIL_IDENTITY,
    CONFIGURATION_SET,
    EMAIL_TEMPLATE
  };

namespace ResourceTypeMapper
{
AWS_SESV2_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
