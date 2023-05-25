/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class Ac3BitstreamMode
  {
    NOT_SET,
    COMMENTARY,
    COMPLETE_MAIN,
    DIALOGUE,
    EMERGENCY,
    HEARING_IMPAIRED,
    MUSIC_AND_EFFECTS,
    VISUALLY_IMPAIRED,
    VOICE_OVER
  };

namespace Ac3BitstreamModeMapper
{
AWS_MEDIALIVE_API Ac3BitstreamMode GetAc3BitstreamModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAc3BitstreamMode(Ac3BitstreamMode value);
} // namespace Ac3BitstreamModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
