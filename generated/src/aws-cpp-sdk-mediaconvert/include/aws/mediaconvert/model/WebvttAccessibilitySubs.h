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
  enum class WebvttAccessibilitySubs
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace WebvttAccessibilitySubsMapper
{
AWS_MEDIACONVERT_API WebvttAccessibilitySubs GetWebvttAccessibilitySubsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForWebvttAccessibilitySubs(WebvttAccessibilitySubs value);
} // namespace WebvttAccessibilitySubsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
