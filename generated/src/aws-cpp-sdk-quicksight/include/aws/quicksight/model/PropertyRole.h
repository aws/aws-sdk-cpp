/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class PropertyRole
  {
    NOT_SET,
    PRIMARY,
    ID
  };

namespace PropertyRoleMapper
{
AWS_QUICKSIGHT_API PropertyRole GetPropertyRoleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPropertyRole(PropertyRole value);
} // namespace PropertyRoleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
