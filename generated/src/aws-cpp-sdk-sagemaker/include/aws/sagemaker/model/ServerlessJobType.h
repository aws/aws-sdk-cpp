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
enum class ServerlessJobType { NOT_SET, FineTuning, Evaluation };

namespace ServerlessJobTypeMapper {
AWS_SAGEMAKER_API ServerlessJobType GetServerlessJobTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForServerlessJobType(ServerlessJobType value);
}  // namespace ServerlessJobTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
