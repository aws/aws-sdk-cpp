/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace repostspace
{
namespace Model
{
  enum class Role
  {
    NOT_SET,
    EXPERT,
    MODERATOR,
    ADMINISTRATOR,
    SUPPORTREQUESTOR
  };

namespace RoleMapper
{
AWS_REPOSTSPACE_API Role GetRoleForName(const Aws::String& name);

AWS_REPOSTSPACE_API Aws::String GetNameForRole(Role value);
} // namespace RoleMapper
} // namespace Model
} // namespace repostspace
} // namespace Aws
