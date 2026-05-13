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
enum class ManagedStorageType { NOT_SET, Restricted };

namespace ManagedStorageTypeMapper {
AWS_SAGEMAKER_API ManagedStorageType GetManagedStorageTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForManagedStorageType(ManagedStorageType value);
}  // namespace ManagedStorageTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
