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
enum class AuthMode { NOT_SET, SSO, IAM };

namespace AuthModeMapper {
AWS_SAGEMAKER_API AuthMode GetAuthModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAuthMode(AuthMode value);
}  // namespace AuthModeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
