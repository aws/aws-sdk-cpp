/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/MTurk_EXPORTS.h>

namespace Aws {
namespace MTurk {
namespace Model {
enum class ReviewPolicyLevel { NOT_SET, Assignment, HIT };

namespace ReviewPolicyLevelMapper {
AWS_MTURK_API ReviewPolicyLevel GetReviewPolicyLevelForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForReviewPolicyLevel(ReviewPolicyLevel value);
}  // namespace ReviewPolicyLevelMapper
}  // namespace Model
}  // namespace MTurk
}  // namespace Aws
