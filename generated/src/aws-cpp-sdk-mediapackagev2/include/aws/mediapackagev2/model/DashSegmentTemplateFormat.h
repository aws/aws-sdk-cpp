/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class DashSegmentTemplateFormat
  {
    NOT_SET,
    NUMBER_WITH_TIMELINE
  };

namespace DashSegmentTemplateFormatMapper
{
AWS_MEDIAPACKAGEV2_API DashSegmentTemplateFormat GetDashSegmentTemplateFormatForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForDashSegmentTemplateFormat(DashSegmentTemplateFormat value);
} // namespace DashSegmentTemplateFormatMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
