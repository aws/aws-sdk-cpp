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
  enum class PermissionType
  {
    NOT_SET,
    CUSTOMER_MANAGED,
    AWS_MANAGED
  };

namespace PermissionTypeMapper
{
AWS_RAM_API PermissionType GetPermissionTypeForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForPermissionType(PermissionType value);
} // namespace PermissionTypeMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
