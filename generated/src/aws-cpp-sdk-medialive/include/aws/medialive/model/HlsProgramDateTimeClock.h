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
  enum class HlsProgramDateTimeClock
  {
    NOT_SET,
    INITIALIZE_FROM_OUTPUT_TIMECODE,
    SYSTEM_CLOCK
  };

namespace HlsProgramDateTimeClockMapper
{
AWS_MEDIALIVE_API HlsProgramDateTimeClock GetHlsProgramDateTimeClockForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsProgramDateTimeClock(HlsProgramDateTimeClock value);
} // namespace HlsProgramDateTimeClockMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
