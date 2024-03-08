/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class ReviewTemplateAnswerStatus
  {
    NOT_SET,
    UNANSWERED,
    ANSWERED
  };

namespace ReviewTemplateAnswerStatusMapper
{
AWS_WELLARCHITECTED_API ReviewTemplateAnswerStatus GetReviewTemplateAnswerStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForReviewTemplateAnswerStatus(ReviewTemplateAnswerStatus value);
} // namespace ReviewTemplateAnswerStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
