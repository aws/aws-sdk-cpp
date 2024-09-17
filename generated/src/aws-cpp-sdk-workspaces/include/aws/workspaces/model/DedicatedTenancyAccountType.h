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
  enum class DedicatedTenancyAccountType
  {
    NOT_SET,
    SOURCE_ACCOUNT,
    TARGET_ACCOUNT
  };

namespace DedicatedTenancyAccountTypeMapper
{
AWS_WORKSPACES_API DedicatedTenancyAccountType GetDedicatedTenancyAccountTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDedicatedTenancyAccountType(DedicatedTenancyAccountType value);
} // namespace DedicatedTenancyAccountTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
