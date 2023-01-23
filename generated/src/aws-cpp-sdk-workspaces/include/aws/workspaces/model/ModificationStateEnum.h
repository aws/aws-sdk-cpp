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
  enum class ModificationStateEnum
  {
    NOT_SET,
    UPDATE_INITIATED,
    UPDATE_IN_PROGRESS
  };

namespace ModificationStateEnumMapper
{
AWS_WORKSPACES_API ModificationStateEnum GetModificationStateEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForModificationStateEnum(ModificationStateEnum value);
} // namespace ModificationStateEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
