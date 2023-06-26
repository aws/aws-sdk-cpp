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
  enum class ResourceImportStrategyType
  {
    NOT_SET,
    AddOnly,
    ReplaceAll
  };

namespace ResourceImportStrategyTypeMapper
{
AWS_RESILIENCEHUB_API ResourceImportStrategyType GetResourceImportStrategyTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForResourceImportStrategyType(ResourceImportStrategyType value);
} // namespace ResourceImportStrategyTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
