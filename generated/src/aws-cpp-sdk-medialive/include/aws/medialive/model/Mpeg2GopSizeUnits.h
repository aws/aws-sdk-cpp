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
  enum class Mpeg2GopSizeUnits
  {
    NOT_SET,
    FRAMES,
    SECONDS
  };

namespace Mpeg2GopSizeUnitsMapper
{
AWS_MEDIALIVE_API Mpeg2GopSizeUnits GetMpeg2GopSizeUnitsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMpeg2GopSizeUnits(Mpeg2GopSizeUnits value);
} // namespace Mpeg2GopSizeUnitsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
