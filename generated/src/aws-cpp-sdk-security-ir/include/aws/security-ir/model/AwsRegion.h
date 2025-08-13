/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{
  enum class AwsRegion
  {
    NOT_SET,
    af_south_1,
    ap_east_1,
    ap_east_2,
    ap_northeast_1,
    ap_northeast_2,
    ap_northeast_3,
    ap_south_1,
    ap_south_2,
    ap_southeast_1,
    ap_southeast_2,
    ap_southeast_3,
    ap_southeast_4,
    ap_southeast_5,
    ap_southeast_7,
    ca_central_1,
    ca_west_1,
    cn_north_1,
    cn_northwest_1,
    eu_central_1,
    eu_central_2,
    eu_north_1,
    eu_south_1,
    eu_south_2,
    eu_west_1,
    eu_west_2,
    eu_west_3,
    il_central_1,
    me_central_1,
    me_south_1,
    mx_central_1,
    sa_east_1,
    us_east_1,
    us_east_2,
    us_west_1,
    us_west_2
  };

namespace AwsRegionMapper
{
AWS_SECURITYIR_API AwsRegion GetAwsRegionForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForAwsRegion(AwsRegion value);
} // namespace AwsRegionMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
