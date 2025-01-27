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
  enum class DynamicAudioSelectorType
  {
    NOT_SET,
    ALL_TRACKS,
    LANGUAGE_CODE
  };

namespace DynamicAudioSelectorTypeMapper
{
AWS_MEDIACONVERT_API DynamicAudioSelectorType GetDynamicAudioSelectorTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDynamicAudioSelectorType(DynamicAudioSelectorType value);
} // namespace DynamicAudioSelectorTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
