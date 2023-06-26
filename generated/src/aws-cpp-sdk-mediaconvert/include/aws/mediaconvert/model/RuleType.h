/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class RuleType
  {
    NOT_SET,
    MIN_TOP_RENDITION_SIZE,
    MIN_BOTTOM_RENDITION_SIZE,
    FORCE_INCLUDE_RENDITIONS,
    ALLOWED_RENDITIONS
  };

namespace RuleTypeMapper
{
AWS_MEDIACONVERT_API RuleType GetRuleTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForRuleType(RuleType value);
} // namespace RuleTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
