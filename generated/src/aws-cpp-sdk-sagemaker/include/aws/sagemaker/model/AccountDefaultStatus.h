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
enum class AccountDefaultStatus { NOT_SET, ENABLED, DISABLED };

namespace AccountDefaultStatusMapper {
AWS_SAGEMAKER_API AccountDefaultStatus GetAccountDefaultStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAccountDefaultStatus(AccountDefaultStatus value);
}  // namespace AccountDefaultStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
