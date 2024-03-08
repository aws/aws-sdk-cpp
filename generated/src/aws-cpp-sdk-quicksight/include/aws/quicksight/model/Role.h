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
  enum class Role
  {
    NOT_SET,
    ADMIN,
    AUTHOR,
    READER
  };

namespace RoleMapper
{
AWS_QUICKSIGHT_API Role GetRoleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForRole(Role value);
} // namespace RoleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
