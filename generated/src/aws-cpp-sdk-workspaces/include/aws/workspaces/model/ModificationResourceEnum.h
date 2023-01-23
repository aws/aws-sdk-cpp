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
  enum class ModificationResourceEnum
  {
    NOT_SET,
    ROOT_VOLUME,
    USER_VOLUME,
    COMPUTE_TYPE
  };

namespace ModificationResourceEnumMapper
{
AWS_WORKSPACES_API ModificationResourceEnum GetModificationResourceEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForModificationResourceEnum(ModificationResourceEnum value);
} // namespace ModificationResourceEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
