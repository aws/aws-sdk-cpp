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
  enum class DashRoleAudio
  {
    NOT_SET,
    ALTERNATE,
    COMMENTARY,
    DESCRIPTION,
    DUB,
    EMERGENCY,
    ENHANCED_AUDIO_INTELLIGIBILITY,
    KARAOKE,
    MAIN,
    SUPPLEMENTARY
  };

namespace DashRoleAudioMapper
{
AWS_MEDIALIVE_API DashRoleAudio GetDashRoleAudioForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDashRoleAudio(DashRoleAudio value);
} // namespace DashRoleAudioMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
