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
enum class SlurmHealthComponent { NOT_SET, Slurmdbd };

namespace SlurmHealthComponentMapper {
AWS_SAGEMAKER_API SlurmHealthComponent GetSlurmHealthComponentForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSlurmHealthComponent(SlurmHealthComponent value);
}  // namespace SlurmHealthComponentMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
