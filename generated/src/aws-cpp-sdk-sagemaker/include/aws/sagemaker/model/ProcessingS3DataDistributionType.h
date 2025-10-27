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
enum class ProcessingS3DataDistributionType { NOT_SET, FullyReplicated, ShardedByS3Key };

namespace ProcessingS3DataDistributionTypeMapper {
AWS_SAGEMAKER_API ProcessingS3DataDistributionType GetProcessingS3DataDistributionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProcessingS3DataDistributionType(ProcessingS3DataDistributionType value);
}  // namespace ProcessingS3DataDistributionTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
