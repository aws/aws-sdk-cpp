/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class ProtectionGroupPattern
  {
    NOT_SET,
    ALL,
    ARBITRARY,
    BY_RESOURCE_TYPE
  };

namespace ProtectionGroupPatternMapper
{
AWS_SHIELD_API ProtectionGroupPattern GetProtectionGroupPatternForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForProtectionGroupPattern(ProtectionGroupPattern value);
} // namespace ProtectionGroupPatternMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
