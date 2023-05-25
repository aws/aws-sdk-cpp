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
  enum class ResourceShareFeatureSet
  {
    NOT_SET,
    CREATED_FROM_POLICY,
    PROMOTING_TO_STANDARD,
    STANDARD
  };

namespace ResourceShareFeatureSetMapper
{
AWS_RAM_API ResourceShareFeatureSet GetResourceShareFeatureSetForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForResourceShareFeatureSet(ResourceShareFeatureSet value);
} // namespace ResourceShareFeatureSetMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
