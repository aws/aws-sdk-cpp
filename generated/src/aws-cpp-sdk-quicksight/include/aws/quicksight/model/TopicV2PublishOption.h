/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class TopicV2PublishOption { NOT_SET, DRAFT, PUBLISH };

namespace TopicV2PublishOptionMapper {
AWS_QUICKSIGHT_API TopicV2PublishOption GetTopicV2PublishOptionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTopicV2PublishOption(TopicV2PublishOption value);
}  // namespace TopicV2PublishOptionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
