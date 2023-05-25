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
  enum class OperatingSystemType
  {
    NOT_SET,
    WINDOWS,
    LINUX
  };

namespace OperatingSystemTypeMapper
{
AWS_WORKSPACES_API OperatingSystemType GetOperatingSystemTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForOperatingSystemType(OperatingSystemType value);
} // namespace OperatingSystemTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
