/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class ReviewStatus
  {
    NOT_SET,
    PENDING,
    FAILED,
    GRANTED,
    DENIED
  };

namespace ReviewStatusMapper
{
AWS_SESV2_API ReviewStatus GetReviewStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForReviewStatus(ReviewStatus value);
} // namespace ReviewStatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
