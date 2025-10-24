/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class VariantPropertyType { NOT_SET, DesiredInstanceCount, DesiredWeight, DataCaptureConfig };

namespace VariantPropertyTypeMapper {
AWS_SAGEMAKER_API VariantPropertyType GetVariantPropertyTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForVariantPropertyType(VariantPropertyType value);
}  // namespace VariantPropertyTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
