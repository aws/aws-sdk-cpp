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
  enum class ValidationMode
  {
    NOT_SET,
    OFF,
    STRICT
  };

namespace ValidationModeMapper
{
AWS_VERIFIEDPERMISSIONS_API ValidationMode GetValidationModeForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForValidationMode(ValidationMode value);
} // namespace ValidationModeMapper
} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
