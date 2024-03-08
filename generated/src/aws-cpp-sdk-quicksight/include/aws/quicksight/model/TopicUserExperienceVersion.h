/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class TopicUserExperienceVersion
  {
    NOT_SET,
    LEGACY,
    NEW_READER_EXPERIENCE
  };

namespace TopicUserExperienceVersionMapper
{
AWS_QUICKSIGHT_API TopicUserExperienceVersion GetTopicUserExperienceVersionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicUserExperienceVersion(TopicUserExperienceVersion value);
} // namespace TopicUserExperienceVersionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
