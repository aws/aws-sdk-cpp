/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{
  enum class ImpactLevel
  {
    NOT_SET,
    IL2,
    IL4,
    IL5,
    IL6,
    IL99
  };

namespace ImpactLevelMapper
{
AWS_SNOWBALL_API ImpactLevel GetImpactLevelForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForImpactLevel(ImpactLevel value);
} // namespace ImpactLevelMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
