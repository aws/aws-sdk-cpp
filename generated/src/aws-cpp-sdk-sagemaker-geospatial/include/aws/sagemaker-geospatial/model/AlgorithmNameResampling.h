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
enum class AlgorithmNameResampling { NOT_SET, NEAR, BILINEAR, CUBIC, CUBICSPLINE, LANCZOS, AVERAGE, RMS, MODE, MAX, MIN, MED, Q1, Q3, SUM };

namespace AlgorithmNameResamplingMapper {
AWS_SAGEMAKERGEOSPATIAL_API AlgorithmNameResampling GetAlgorithmNameResamplingForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForAlgorithmNameResampling(AlgorithmNameResampling value);
}  // namespace AlgorithmNameResamplingMapper
}  // namespace Model
}  // namespace SageMakerGeospatial
}  // namespace Aws
