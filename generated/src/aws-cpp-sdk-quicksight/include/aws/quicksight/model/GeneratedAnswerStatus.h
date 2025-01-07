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
  enum class GeneratedAnswerStatus
  {
    NOT_SET,
    ANSWER_GENERATED,
    ANSWER_RETRIEVED,
    ANSWER_DOWNGRADE
  };

namespace GeneratedAnswerStatusMapper
{
AWS_QUICKSIGHT_API GeneratedAnswerStatus GetGeneratedAnswerStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGeneratedAnswerStatus(GeneratedAnswerStatus value);
} // namespace GeneratedAnswerStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
