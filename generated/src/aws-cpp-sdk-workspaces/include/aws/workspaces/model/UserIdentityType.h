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
  enum class UserIdentityType
  {
    NOT_SET,
    CUSTOMER_MANAGED,
    AWS_DIRECTORY_SERVICE,
    AWS_IAM_IDENTITY_CENTER
  };

namespace UserIdentityTypeMapper
{
AWS_WORKSPACES_API UserIdentityType GetUserIdentityTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForUserIdentityType(UserIdentityType value);
} // namespace UserIdentityTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
