﻿/**
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
  enum class PermissionInputActionEnum
  {
    NOT_SET,
    read,
    write
  };

namespace PermissionInputActionEnumMapper
{
AWS_QAPPS_API PermissionInputActionEnum GetPermissionInputActionEnumForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForPermissionInputActionEnum(PermissionInputActionEnum value);
} // namespace PermissionInputActionEnumMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
