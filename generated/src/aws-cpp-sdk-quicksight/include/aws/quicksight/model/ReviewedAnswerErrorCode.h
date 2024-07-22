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
  enum class ReviewedAnswerErrorCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    MISSING_ANSWER,
    DATASET_DOES_NOT_EXIST,
    INVALID_DATASET_ARN,
    DUPLICATED_ANSWER,
    INVALID_DATA,
    MISSING_REQUIRED_FIELDS
  };

namespace ReviewedAnswerErrorCodeMapper
{
AWS_QUICKSIGHT_API ReviewedAnswerErrorCode GetReviewedAnswerErrorCodeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForReviewedAnswerErrorCode(ReviewedAnswerErrorCode value);
} // namespace ReviewedAnswerErrorCodeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
