/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class ActivityStreamPolicyStatus
  {
    NOT_SET,
    locked,
    unlocked,
    locking_policy,
    unlocking_policy
  };

namespace ActivityStreamPolicyStatusMapper
{
AWS_RDS_API ActivityStreamPolicyStatus GetActivityStreamPolicyStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForActivityStreamPolicyStatus(ActivityStreamPolicyStatus value);
} // namespace ActivityStreamPolicyStatusMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
