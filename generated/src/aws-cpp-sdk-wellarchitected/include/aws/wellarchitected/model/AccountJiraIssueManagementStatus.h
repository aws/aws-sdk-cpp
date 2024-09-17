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
  enum class AccountJiraIssueManagementStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AccountJiraIssueManagementStatusMapper
{
AWS_WELLARCHITECTED_API AccountJiraIssueManagementStatus GetAccountJiraIssueManagementStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForAccountJiraIssueManagementStatus(AccountJiraIssueManagementStatus value);
} // namespace AccountJiraIssueManagementStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
