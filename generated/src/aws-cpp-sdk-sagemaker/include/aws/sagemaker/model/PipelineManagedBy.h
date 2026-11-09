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
enum class PipelineManagedBy { NOT_SET, AWS, CUSTOMER };

namespace PipelineManagedByMapper {
AWS_SAGEMAKER_API PipelineManagedBy GetPipelineManagedByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForPipelineManagedBy(PipelineManagedBy value);
}  // namespace PipelineManagedByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
