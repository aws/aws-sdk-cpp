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
enum class ExecutionRoleSessionNameMode { NOT_SET, STATIC_, USER_IDENTITY };

namespace ExecutionRoleSessionNameModeMapper {
AWS_SAGEMAKER_API ExecutionRoleSessionNameMode GetExecutionRoleSessionNameModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForExecutionRoleSessionNameMode(ExecutionRoleSessionNameMode value);
}  // namespace ExecutionRoleSessionNameModeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
