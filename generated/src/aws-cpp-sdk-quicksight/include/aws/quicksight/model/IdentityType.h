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
  enum class IdentityType
  {
    NOT_SET,
    IAM,
    QUICKSIGHT
  };

namespace IdentityTypeMapper
{
AWS_QUICKSIGHT_API IdentityType GetIdentityTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIdentityType(IdentityType value);
} // namespace IdentityTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
