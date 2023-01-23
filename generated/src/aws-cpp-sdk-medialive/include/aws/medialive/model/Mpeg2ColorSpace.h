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
  enum class Mpeg2ColorSpace
  {
    NOT_SET,
    AUTO,
    PASSTHROUGH
  };

namespace Mpeg2ColorSpaceMapper
{
AWS_MEDIALIVE_API Mpeg2ColorSpace GetMpeg2ColorSpaceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMpeg2ColorSpace(Mpeg2ColorSpace value);
} // namespace Mpeg2ColorSpaceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
