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
  enum class Mp2AudioDescriptionMix
  {
    NOT_SET,
    BROADCASTER_MIXED_AD,
    NONE
  };

namespace Mp2AudioDescriptionMixMapper
{
AWS_MEDIACONVERT_API Mp2AudioDescriptionMix GetMp2AudioDescriptionMixForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMp2AudioDescriptionMix(Mp2AudioDescriptionMix value);
} // namespace Mp2AudioDescriptionMixMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
