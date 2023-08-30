/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace neptunedata
{
namespace Model
{
  enum class S3BucketRegion
  {
    NOT_SET,
    us_east_1,
    us_east_2,
    us_west_1,
    us_west_2,
    ca_central_1,
    sa_east_1,
    eu_north_1,
    eu_west_1,
    eu_west_2,
    eu_west_3,
    eu_central_1,
    me_south_1,
    af_south_1,
    ap_east_1,
    ap_northeast_1,
    ap_northeast_2,
    ap_southeast_1,
    ap_southeast_2,
    ap_south_1,
    cn_north_1,
    cn_northwest_1,
    us_gov_west_1,
    us_gov_east_1
  };

namespace S3BucketRegionMapper
{
AWS_NEPTUNEDATA_API S3BucketRegion GetS3BucketRegionForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForS3BucketRegion(S3BucketRegion value);
} // namespace S3BucketRegionMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
