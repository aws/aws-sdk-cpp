/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class TargetType
  {
    NOT_SET,
    ACCOUNT,
    ORGANIZATIONAL_UNIT,
    ROOT
  };

namespace TargetTypeMapper
{
AWS_ORGANIZATIONS_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForTargetType(TargetType value);
} // namespace TargetTypeMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
