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
  enum class NielsenPcmToId3TaggingState
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace NielsenPcmToId3TaggingStateMapper
{
AWS_MEDIALIVE_API NielsenPcmToId3TaggingState GetNielsenPcmToId3TaggingStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForNielsenPcmToId3TaggingState(NielsenPcmToId3TaggingState value);
} // namespace NielsenPcmToId3TaggingStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
