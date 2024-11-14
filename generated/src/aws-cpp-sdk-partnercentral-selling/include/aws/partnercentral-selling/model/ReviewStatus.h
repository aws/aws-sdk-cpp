/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class ReviewStatus
  {
    NOT_SET,
    Pending_Submission,
    Submitted,
    In_review,
    Approved,
    Rejected,
    Action_Required
  };

namespace ReviewStatusMapper
{
AWS_PARTNERCENTRALSELLING_API ReviewStatus GetReviewStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForReviewStatus(ReviewStatus value);
} // namespace ReviewStatusMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
