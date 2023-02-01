/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class Dimension
  {
    NOT_SET,
    REGION,
    SOURCE_TYPE,
    MEMBER
  };

namespace DimensionMapper
{
AWS_SECURITYLAKE_API Dimension GetDimensionForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForDimension(Dimension value);
} // namespace DimensionMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
