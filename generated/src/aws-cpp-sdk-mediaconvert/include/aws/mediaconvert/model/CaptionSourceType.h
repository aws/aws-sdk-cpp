/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class CaptionSourceType {
  NOT_SET,
  ANCILLARY,
  DVB_SUB,
  EMBEDDED,
  SCTE20,
  SCC,
  TTML,
  STL,
  SRT,
  SMI,
  SMPTE_TT,
  TELETEXT,
  NULL_SOURCE,
  IMSC,
  WEBVTT,
  TT_3GPP
};

namespace CaptionSourceTypeMapper {
AWS_MEDIACONVERT_API CaptionSourceType GetCaptionSourceTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCaptionSourceType(CaptionSourceType value);
}  // namespace CaptionSourceTypeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
