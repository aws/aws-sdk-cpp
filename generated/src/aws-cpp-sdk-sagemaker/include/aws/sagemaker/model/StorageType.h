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
enum class StorageType { NOT_SET, Standard, InMemory };

namespace StorageTypeMapper {
AWS_SAGEMAKER_API StorageType GetStorageTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForStorageType(StorageType value);
}  // namespace StorageTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
