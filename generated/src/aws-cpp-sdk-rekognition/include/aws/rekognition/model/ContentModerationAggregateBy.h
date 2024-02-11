/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class ContentModerationAggregateBy
  {
    NOT_SET,
    TIMESTAMPS,
    SEGMENTS
  };

namespace ContentModerationAggregateByMapper
{
AWS_REKOGNITION_API ContentModerationAggregateBy GetContentModerationAggregateByForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForContentModerationAggregateBy(ContentModerationAggregateBy value);
} // namespace ContentModerationAggregateByMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
