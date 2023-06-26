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
  enum class SccDestinationFramerate
  {
    NOT_SET,
    FRAMERATE_23_97,
    FRAMERATE_24,
    FRAMERATE_25,
    FRAMERATE_29_97_DROPFRAME,
    FRAMERATE_29_97_NON_DROPFRAME
  };

namespace SccDestinationFramerateMapper
{
AWS_MEDIACONVERT_API SccDestinationFramerate GetSccDestinationFramerateForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForSccDestinationFramerate(SccDestinationFramerate value);
} // namespace SccDestinationFramerateMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
