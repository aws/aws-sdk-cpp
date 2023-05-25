/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class PermissionType
  {
    NOT_SET,
    FULL_ACCESS,
    SEND_AS,
    SEND_ON_BEHALF
  };

namespace PermissionTypeMapper
{
AWS_WORKMAIL_API PermissionType GetPermissionTypeForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForPermissionType(PermissionType value);
} // namespace PermissionTypeMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
