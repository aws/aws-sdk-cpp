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
enum class DatabaseConfigurationRollbackStatus { NOT_SET, NotApplicable, Reverted, RevertFailed };

namespace DatabaseConfigurationRollbackStatusMapper {
AWS_SAGEMAKER_API DatabaseConfigurationRollbackStatus GetDatabaseConfigurationRollbackStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDatabaseConfigurationRollbackStatus(DatabaseConfigurationRollbackStatus value);
}  // namespace DatabaseConfigurationRollbackStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
