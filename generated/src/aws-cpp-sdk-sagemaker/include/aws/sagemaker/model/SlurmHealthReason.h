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
enum class SlurmHealthReason { NOT_SET, DaemonDown, DaemonDisabled, DbUnreachable };

namespace SlurmHealthReasonMapper {
AWS_SAGEMAKER_API SlurmHealthReason GetSlurmHealthReasonForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSlurmHealthReason(SlurmHealthReason value);
}  // namespace SlurmHealthReasonMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
