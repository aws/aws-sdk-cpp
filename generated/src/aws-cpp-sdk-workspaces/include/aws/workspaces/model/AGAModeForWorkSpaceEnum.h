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
  enum class AGAModeForWorkSpaceEnum
  {
    NOT_SET,
    ENABLED_AUTO,
    DISABLED,
    INHERITED
  };

namespace AGAModeForWorkSpaceEnumMapper
{
AWS_WORKSPACES_API AGAModeForWorkSpaceEnum GetAGAModeForWorkSpaceEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForAGAModeForWorkSpaceEnum(AGAModeForWorkSpaceEnum value);
} // namespace AGAModeForWorkSpaceEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
