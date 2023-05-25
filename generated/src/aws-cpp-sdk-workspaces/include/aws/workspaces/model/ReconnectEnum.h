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
  enum class ReconnectEnum
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ReconnectEnumMapper
{
AWS_WORKSPACES_API ReconnectEnum GetReconnectEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForReconnectEnum(ReconnectEnum value);
} // namespace ReconnectEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
