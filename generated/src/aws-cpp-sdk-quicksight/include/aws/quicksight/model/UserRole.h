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
  enum class UserRole
  {
    NOT_SET,
    ADMIN,
    AUTHOR,
    READER,
    RESTRICTED_AUTHOR,
    RESTRICTED_READER
  };

namespace UserRoleMapper
{
AWS_QUICKSIGHT_API UserRole GetUserRoleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForUserRole(UserRole value);
} // namespace UserRoleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
