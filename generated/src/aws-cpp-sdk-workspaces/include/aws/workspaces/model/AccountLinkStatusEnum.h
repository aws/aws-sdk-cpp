/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class AccountLinkStatusEnum
  {
    NOT_SET,
    LINKED,
    LINKING_FAILED,
    LINK_NOT_FOUND,
    PENDING_ACCEPTANCE_BY_TARGET_ACCOUNT,
    REJECTED
  };

namespace AccountLinkStatusEnumMapper
{
AWS_WORKSPACES_API AccountLinkStatusEnum GetAccountLinkStatusEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAccountLinkStatusEnum(AccountLinkStatusEnum value);
} // namespace AccountLinkStatusEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
