/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QApps
{
namespace Model
{
  enum class PermissionOutputActionEnum
  {
    NOT_SET,
    read,
    write
  };

namespace PermissionOutputActionEnumMapper
{
AWS_QAPPS_API PermissionOutputActionEnum GetPermissionOutputActionEnumForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForPermissionOutputActionEnum(PermissionOutputActionEnum value);
} // namespace PermissionOutputActionEnumMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
