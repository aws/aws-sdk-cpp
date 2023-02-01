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
  enum class Region
  {
    NOT_SET,
    us_east_1,
    us_west_2,
    eu_central_1,
    us_east_2,
    eu_west_1,
    ap_northeast_1,
    ap_southeast_2
  };

namespace RegionMapper
{
AWS_SECURITYLAKE_API Region GetRegionForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForRegion(Region value);
} // namespace RegionMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
