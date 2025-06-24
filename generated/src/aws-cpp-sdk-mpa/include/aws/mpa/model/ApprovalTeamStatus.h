/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MPA
{
namespace Model
{
  enum class ApprovalTeamStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    DELETING,
    PENDING
  };

namespace ApprovalTeamStatusMapper
{
AWS_MPA_API ApprovalTeamStatus GetApprovalTeamStatusForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForApprovalTeamStatus(ApprovalTeamStatus value);
} // namespace ApprovalTeamStatusMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
