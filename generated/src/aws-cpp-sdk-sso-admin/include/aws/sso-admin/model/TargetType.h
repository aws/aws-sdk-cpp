/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class TargetType
  {
    NOT_SET,
    AWS_ACCOUNT
  };

namespace TargetTypeMapper
{
AWS_SSOADMIN_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForTargetType(TargetType value);
} // namespace TargetTypeMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
