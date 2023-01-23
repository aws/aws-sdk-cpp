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
  enum class AlgorithmNameGeoMosaic
  {
    NOT_SET,
    NEAR,
    BILINEAR,
    CUBIC,
    CUBICSPLINE,
    LANCZOS,
    AVERAGE,
    RMS,
    MODE,
    MAX,
    MIN,
    MED,
    Q1,
    Q3,
    SUM
  };

namespace AlgorithmNameGeoMosaicMapper
{
AWS_SAGEMAKERGEOSPATIAL_API AlgorithmNameGeoMosaic GetAlgorithmNameGeoMosaicForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForAlgorithmNameGeoMosaic(AlgorithmNameGeoMosaic value);
} // namespace AlgorithmNameGeoMosaicMapper
} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
