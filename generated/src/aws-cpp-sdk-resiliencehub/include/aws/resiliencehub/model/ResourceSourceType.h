/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class ResourceSourceType
  {
    NOT_SET,
    AppTemplate,
    Discovered
  };

namespace ResourceSourceTypeMapper
{
AWS_RESILIENCEHUB_API ResourceSourceType GetResourceSourceTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForResourceSourceType(ResourceSourceType value);
} // namespace ResourceSourceTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
