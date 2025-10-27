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
enum class MonitoringJobDefinitionSortKey { NOT_SET, Name, CreationTime };

namespace MonitoringJobDefinitionSortKeyMapper {
AWS_SAGEMAKER_API MonitoringJobDefinitionSortKey GetMonitoringJobDefinitionSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMonitoringJobDefinitionSortKey(MonitoringJobDefinitionSortKey value);
}  // namespace MonitoringJobDefinitionSortKeyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
