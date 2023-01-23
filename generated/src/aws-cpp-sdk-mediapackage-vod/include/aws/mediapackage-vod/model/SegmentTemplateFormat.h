/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{
  enum class SegmentTemplateFormat
  {
    NOT_SET,
    NUMBER_WITH_TIMELINE,
    TIME_WITH_TIMELINE,
    NUMBER_WITH_DURATION
  };

namespace SegmentTemplateFormatMapper
{
AWS_MEDIAPACKAGEVOD_API SegmentTemplateFormat GetSegmentTemplateFormatForName(const Aws::String& name);

AWS_MEDIAPACKAGEVOD_API Aws::String GetNameForSegmentTemplateFormat(SegmentTemplateFormat value);
} // namespace SegmentTemplateFormatMapper
} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
