/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>

namespace Aws {
namespace SageMakerGeospatial {
namespace Model {
enum class TemporalStatistics { NOT_SET, MEAN, MEDIAN, STANDARD_DEVIATION };

namespace TemporalStatisticsMapper {
AWS_SAGEMAKERGEOSPATIAL_API TemporalStatistics GetTemporalStatisticsForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForTemporalStatistics(TemporalStatistics value);
}  // namespace TemporalStatisticsMapper
}  // namespace Model
}  // namespace SageMakerGeospatial
}  // namespace Aws
