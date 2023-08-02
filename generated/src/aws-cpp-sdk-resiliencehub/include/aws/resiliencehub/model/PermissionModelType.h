/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class PermissionModelType
  {
    NOT_SET,
    LegacyIAMUser,
    RoleBased
  };

namespace PermissionModelTypeMapper
{
AWS_RESILIENCEHUB_API PermissionModelType GetPermissionModelTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForPermissionModelType(PermissionModelType value);
} // namespace PermissionModelTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
