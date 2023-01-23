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
  enum class AudioLanguageSelectionPolicy
  {
    NOT_SET,
    LOOSE,
    STRICT
  };

namespace AudioLanguageSelectionPolicyMapper
{
AWS_MEDIALIVE_API AudioLanguageSelectionPolicy GetAudioLanguageSelectionPolicyForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAudioLanguageSelectionPolicy(AudioLanguageSelectionPolicy value);
} // namespace AudioLanguageSelectionPolicyMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
