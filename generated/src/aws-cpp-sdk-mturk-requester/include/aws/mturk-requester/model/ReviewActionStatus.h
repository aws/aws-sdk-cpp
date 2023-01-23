/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class ReviewActionStatus
  {
    NOT_SET,
    Intended,
    Succeeded,
    Failed,
    Cancelled
  };

namespace ReviewActionStatusMapper
{
AWS_MTURK_API ReviewActionStatus GetReviewActionStatusForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForReviewActionStatus(ReviewActionStatus value);
} // namespace ReviewActionStatusMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
