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
enum class ComparisonOperator { NOT_SET, EQUALS, NOT_EQUALS, STARTS_WITH };

namespace ComparisonOperatorMapper {
AWS_SAGEMAKERGEOSPATIAL_API ComparisonOperator GetComparisonOperatorForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForComparisonOperator(ComparisonOperator value);
}  // namespace ComparisonOperatorMapper
}  // namespace Model
}  // namespace SageMakerGeospatial
}  // namespace Aws
