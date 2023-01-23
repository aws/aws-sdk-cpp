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
  enum class DedicatedTenancyModificationStateEnum
  {
    NOT_SET,
    PENDING,
    COMPLETED,
    FAILED
  };

namespace DedicatedTenancyModificationStateEnumMapper
{
AWS_WORKSPACES_API DedicatedTenancyModificationStateEnum GetDedicatedTenancyModificationStateEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForDedicatedTenancyModificationStateEnum(DedicatedTenancyModificationStateEnum value);
} // namespace DedicatedTenancyModificationStateEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
