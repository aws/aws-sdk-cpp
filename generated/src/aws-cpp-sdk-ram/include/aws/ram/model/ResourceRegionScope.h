/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RAM
{
namespace Model
{
  enum class ResourceRegionScope
  {
    NOT_SET,
    REGIONAL,
    GLOBAL
  };

namespace ResourceRegionScopeMapper
{
AWS_RAM_API ResourceRegionScope GetResourceRegionScopeForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForResourceRegionScope(ResourceRegionScope value);
} // namespace ResourceRegionScopeMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
