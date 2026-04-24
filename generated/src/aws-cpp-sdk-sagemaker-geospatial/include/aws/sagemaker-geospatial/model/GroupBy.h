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
enum class GroupBy { NOT_SET, ALL, YEARLY };

namespace GroupByMapper {
AWS_SAGEMAKERGEOSPATIAL_API GroupBy GetGroupByForName(const Aws::String& name);

AWS_SAGEMAKERGEOSPATIAL_API Aws::String GetNameForGroupBy(GroupBy value);
}  // namespace GroupByMapper
}  // namespace Model
}  // namespace SageMakerGeospatial
}  // namespace Aws
