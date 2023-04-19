/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RAM
{
namespace Model
{
  enum class PermissionStatus
  {
    NOT_SET,
    ATTACHABLE,
    UNATTACHABLE,
    DELETING,
    DELETED
  };

namespace PermissionStatusMapper
{
AWS_RAM_API PermissionStatus GetPermissionStatusForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForPermissionStatus(PermissionStatus value);
} // namespace PermissionStatusMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
