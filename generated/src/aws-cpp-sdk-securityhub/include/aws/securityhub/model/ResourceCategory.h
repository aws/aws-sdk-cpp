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
  enum class ResourceCategory
  {
    NOT_SET,
    Compute,
    Database,
    Storage,
    Code,
    AI_ML,
    Identity,
    Network,
    Other
  };

namespace ResourceCategoryMapper
{
AWS_SECURITYHUB_API ResourceCategory GetResourceCategoryForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourceCategory(ResourceCategory value);
} // namespace ResourceCategoryMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
