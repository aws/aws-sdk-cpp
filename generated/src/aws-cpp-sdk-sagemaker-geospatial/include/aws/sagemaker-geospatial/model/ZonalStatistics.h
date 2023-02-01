/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{
  enum class ZonalStatistics
  {
    NOT_SET,
    MEAN,
    MEDIAN,
    STANDARD_DEVIATION,
    MAX,
    MIN,
    SUM
  };

namespace ZonalStatisticsMapper
{
AWS_SAGEMAKERGEOSPATIAL_API ZonalStatistics GetZonalStatisticsForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForZonalStatistics(ZonalStatistics value);
} // namespace ZonalStatisticsMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
