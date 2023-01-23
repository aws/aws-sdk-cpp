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
  enum class CaptionDestinationType
  {
    NOT_SET,
    BURN_IN,
    DVB_SUB,
    EMBEDDED,
    EMBEDDED_PLUS_SCTE20,
    IMSC,
    SCTE20_PLUS_EMBEDDED,
    SCC,
    SRT,
    SMI,
    TELETEXT,
    TTML,
    WEBVTT
  };

namespace CaptionDestinationTypeMapper
{
AWS_MEDIACONVERT_API CaptionDestinationType GetCaptionDestinationTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCaptionDestinationType(CaptionDestinationType value);
} // namespace CaptionDestinationTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
