/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{
  enum class DeletionProtection
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace DeletionProtectionMapper
{
AWS_VERIFIEDPERMISSIONS_API DeletionProtection GetDeletionProtectionForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForDeletionProtection(DeletionProtection value);
} // namespace DeletionProtectionMapper
} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
