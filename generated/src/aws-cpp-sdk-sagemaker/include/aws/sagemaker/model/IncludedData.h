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
enum class IncludedData { NOT_SET, AllData, MetadataOnly };

namespace IncludedDataMapper {
AWS_SAGEMAKER_API IncludedData GetIncludedDataForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForIncludedData(IncludedData value);
}  // namespace IncludedDataMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
