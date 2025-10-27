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
enum class SageMakerResourceName { NOT_SET, training_job, hyperpod_cluster };

namespace SageMakerResourceNameMapper {
AWS_SAGEMAKER_API SageMakerResourceName GetSageMakerResourceNameForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSageMakerResourceName(SageMakerResourceName value);
}  // namespace SageMakerResourceNameMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
