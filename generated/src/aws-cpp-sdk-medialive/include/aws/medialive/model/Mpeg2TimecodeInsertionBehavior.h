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
  enum class Mpeg2TimecodeInsertionBehavior
  {
    NOT_SET,
    DISABLED,
    GOP_TIMECODE
  };

namespace Mpeg2TimecodeInsertionBehaviorMapper
{
AWS_MEDIALIVE_API Mpeg2TimecodeInsertionBehavior GetMpeg2TimecodeInsertionBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMpeg2TimecodeInsertionBehavior(Mpeg2TimecodeInsertionBehavior value);
} // namespace Mpeg2TimecodeInsertionBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
