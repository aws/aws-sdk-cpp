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
  enum class PermissionTypeFilter
  {
    NOT_SET,
    ALL,
    AWS_MANAGED,
    CUSTOMER_MANAGED
  };

namespace PermissionTypeFilterMapper
{
AWS_RAM_API PermissionTypeFilter GetPermissionTypeFilterForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForPermissionTypeFilter(PermissionTypeFilter value);
} // namespace PermissionTypeFilterMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
